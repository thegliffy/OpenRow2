#!/usr/bin/env python3
"""OpenRow2 Ghidra MCP server — resident PyGhidra process owning the project.

Single-writer gateway: one JVM, one open project, serialized access, so any
number of MCP clients can decompile/rename/comment without cold-start cost
and without two processes opening the same .gpr.
"""
import os
import threading

import pyghidra
from fastmcp import FastMCP

GHIDRA_DIR = os.environ.get("GHIDRA_INSTALL_DIR", "/ghidra")
PROJECT_DIR = os.environ.get("PROJECT_DIR", "/project")
PROJECT_NAME = os.environ.get("PROJECT_NAME", "OpenRow2")

LOCK = threading.RLock()  # Ghidra is not thread-safe; serialize everything

pyghidra.start(install_dir=GHIDRA_DIR)
PROJECT = pyghidra.open_project(PROJECT_DIR, PROJECT_NAME)

PROGRAM = None
CONSUMER = None  # replaced with a Java Object below


def _walk(df, prog):
    global PROGRAM
    if PROGRAM is None and prog is not None:
        PROGRAM = "/" + df.getPathname().lstrip("/")
        return False
    return True


pyghidra.walk_programs(PROJECT, _walk)
assert PROGRAM is not None, "no program found in project"
import jpype
from jpype import JBoolean, JObject, JClass
from ghidra.util.task import TaskMonitor
CONSUMER = jpype.JString("openrow2-mcp-consumer")
_df = PROJECT.getProjectData().getRootFolder().getFile(PROGRAM.lstrip("/"))
PROGRAM = _df.getDomainObject(CONSUMER, JBoolean(True), JBoolean(False), TaskMonitor.DUMMY)

from ghidra.app.decompiler import DecompInterface  # after start()
DECOMP = DecompInterface()
DECOMP.openProgram(PROGRAM)


def addr(s):
    return PROGRAM.getAddressFactory().getDefaultAddressSpace().getAddress(s)


def func_at(a):
    return PROGRAM.getFunctionManager().getFunctionAt(a)


def find_func(target):
    t = target.strip()
    if t.lower().startswith("0x") or all(c in "0123456789abcdef" for c in t.lower()):
        f = func_at(addr(t))
        if f is not None:
            return f
    it = PROGRAM.getFunctionManager().getFunctions(True)
    tl = t.lower()
    while it.hasNext():
        f = it.next()
        if str(f.getName()).lower() == tl:
            return f
    return None


def save():
    # PyGhidra never auto-flushes and Project.save() is a no-op on
    # non-versioned files; the DomainFile save is the only path that persists.
    _df.save(TaskMonitor.DUMMY)


mcp = FastMCP("openrow2")


@mcp.tool()
def ping() -> dict:
    """Health check; returns program name and function count."""
    with LOCK:
        return {"program": str(PROGRAM.getName()),
                "functions": int(PROGRAM.getFunctionManager().getFunctionCount())}


@mcp.tool()
def decompile(target: str) -> dict:
    """Decompile a function by address (0x...) or name."""
    with LOCK:
        f = find_func(target)
        if f is None:
            return {"error": f"no function at {target}"}
        from ghidra.util.task import TaskMonitor
        res = DECOMP.decompileFunction(f, 120, TaskMonitor.DUMMY)
        if res is None or res.getDecompiledFunction() is None:
            return {"error": (res.getErrorMessage() if res else "decompile returned null")}
        return {"addr": str(f.getEntryPoint()), "name": str(f.getName()),
                "c": res.getDecompiledFunction().getC()}


@mcp.tool()
def list_functions(filter: str = "", limit: int = 200) -> dict:
    """List functions whose name contains FILTER (case-insensitive). Empty filter lists the first LIMIT."""
    with LOCK:
        out = []
        fl = filter.lower()
        it = PROGRAM.getFunctionManager().getFunctions(True)
        while it.hasNext() and len(out) < limit:
            f = it.next()
            n = str(f.getName())
            if not fl or fl in n.lower():
                out.append({"addr": str(f.getEntryPoint()), "name": n})
        return {"count": len(out), "functions": out}


@mcp.tool()
def rename(target: str, new_name: str) -> dict:
    """Rename a function (by address or current name). Saves the project."""
    with LOCK:
        f = find_func(target)
        if f is None:
            return {"error": f"no function at {target}"}
        from ghidra.program.model.symbol import SourceType
        with pyghidra.transaction(PROGRAM, f"rename {f.getName()} -> {new_name}"):
            f.setName(new_name, SourceType.USER_DEFINED)
        save()
        return {"ok": True, "addr": str(f.getEntryPoint()), "name": str(f.getName())}


@mcp.tool()
def set_comment(target: str, comment: str) -> dict:
    """Set an EOL comment at a function entry (by address or name). Saves the project."""
    with LOCK:
        from ghidra.program.model.listing import CodeUnit
        f = find_func(target)
        a = f.getEntryPoint() if f else addr(target)
        with pyghidra.transaction(PROGRAM, f"comment at {a}"):
            PROGRAM.getListing().setComment(a, CodeUnit.EOL_COMMENT, comment)
        save()
        return {"ok": True, "addr": str(a)}


@mcp.tool()
def set_return_type(target: str, typename: str) -> dict:
    """Set a function's return type from a data type resolvable in the program data type
    manager (e.g. '/int', '/ulong'). Saves the project."""
    with LOCK:
        from ghidra.program.model.symbol import SourceType
        f = find_func(target)
        if f is None:
            return {"error": f"no function at {target}"}
        dtm = PROGRAM.getDataTypeManager()
        path = typename if typename.startswith("/") else "/" + typename
        dt = dtm.getDataType(path)
        if dt is None:
            return {"error": f"data type {path} not resolvable"}
        with pyghidra.transaction(PROGRAM, f"return type {target}"):
            f.setReturnType(dt, SourceType.USER_DEFINED)
        save()
        return {"ok": True, "addr": str(f.getEntryPoint()), "return_type": str(dt.getName())}


STRINGS = []  # [(addr, text)] built once by the cache thread
STRINGS_READY = threading.Event()


def _build_string_cache():
    from ghidra.program.model.data import AbstractStringDataType
    listing = PROGRAM.getListing()
    it = listing.getData(True)
    n = 0
    while it.hasNext():
        d = it.next()
        if d is None:
            continue
        try:
            if not isinstance(d.getDataType(), AbstractStringDataType):
                continue
            t = str(d.getValue())
        except Exception:
            continue
        if t:
            STRINGS.append((str(d.getMinAddress()), t))
        n += 1
        if n % 20000 == 0:
            print(f"string cache: {n} data items scanned, {len(STRINGS)} strings", flush=True)
    STRINGS_READY.set()
    print(f"string cache READY: {len(STRINGS)} strings", flush=True)


threading.Thread(target=_build_string_cache, daemon=True).start()


@mcp.tool()
def list_strings(filter: str = "", limit: int = 200) -> dict:
    """List strings in the program whose text contains FILTER (case-insensitive)."""
    if not STRINGS_READY.wait(10):
        return {"error": "string cache still building; retry in a minute"}
    fl = filter.lower()
    out = [{"addr": a, "string": t} for a, t in STRINGS if not fl or fl in t.lower()][:limit]
    return {"count": len(out), "strings": out}


@mcp.tool()
def callers(target: str) -> dict:
    """List call sites that call the function at ADDRESS or NAME."""
    with LOCK:
        f = find_func(target)
        if f is None:
            return {"error": f"no function at {target}"}
        out = []
        for ref in PROGRAM.getReferenceManager().getReferencesTo(f.getEntryPoint()):
            rt = ref.getReferenceType()
            if rt.isCall():
                caller = PROGRAM.getFunctionManager().getFunctionContaining(ref.getFromAddress())
                out.append({"from": str(ref.getFromAddress()),
                            "caller": str(caller.getName()) if caller else None,
                            "type": str(rt.getName())})
        return {"target": str(f.getEntryPoint()), "count": len(out), "callers": out}


@mcp.tool()
def scoreboard() -> dict:
    """Decomp scoreboard: named vs auto-named (FUN_/thunk_) function counts."""
    with LOCK:
        named = unnamed = 0
        it = PROGRAM.getFunctionManager().getFunctions(True)
        while it.hasNext():
            n = str(it.next().getName())
            if n.startswith("FUN_") or n.startswith("thunk_"):
                unnamed += 1
            else:
                named += 1
        return {"named": named, "unnamed": unnamed, "total": named + unnamed}


@mcp.tool()
def bulk_reseed(csv_path: str = "/project/functions.csv") -> dict:
    """Re-apply every name from the canonical seed CSV (entry,name). Only renames
    auto-named (FUN_/thunk_) functions; rows whose name contains '<' (mangled
    templates) are skipped; one save at the end."""
    import csv as _csv
    with LOCK:
        from ghidra.program.model.symbol import SourceType
        applied = skipped = missing = 0
        with open(csv_path, newline="") as fh:
            rows = list(_csv.reader(fh))
        for r in rows:
            if len(r) < 2 or not r[1].strip():
                continue
            a, name = r[0].strip(), r[1].strip()
            if a.lower() == "entry" or "<" in name:
                skipped += 1
                continue
            f = func_at(addr(a))
            if f is None:
                missing += 1
                continue
            cur = str(f.getName())
            if cur != name and not (cur.startswith("FUN_") or cur.startswith("thunk_")):
                skipped += 1
                continue
            if cur == name:
                skipped += 1
                continue
            with pyghidra.transaction(PROGRAM, f"reseed {name}"):
                f.setName(name, SourceType.USER_DEFINED)
            applied += 1
        save()
        return {"applied": applied, "skipped": skipped, "addr_not_function": missing,
                "named_rows": applied + skipped}


@mcp.tool()
def flush() -> dict:
    """Force pending domain-object changes to disk (persistence probe)."""
    with LOCK:
        out = {}
        try:
            m = TaskMonitor.DUMMY
        except Exception as e:
            m = None
            out["monitor"] = str(e)[:100]
        try:
            PROGRAM.save(m)
            out["program.save"] = "ok"
        except Exception as e:
            out["program.save"] = str(e)[:150]
        try:
            _df.save(m)
            out["df.save"] = "ok"
        except Exception as e:
            out["df.save"] = str(e)[:150]
        return out


if __name__ == "__main__":
    mcp.run(transport="streamable-http", host="0.0.0.0",
            port=int(os.environ.get("PORT", "8191")))
