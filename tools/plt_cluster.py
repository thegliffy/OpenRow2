#!/usr/bin/env python3
"""Cluster FUN_ functions by their PLT call signature (vein #1).

Generic singletons (operator.delete, __stack_chk_fail, plain malloc/free,
one-argument libc calls) carry no module signal, so a cluster only counts
when it has a distinctive multiset: >= 2 distinct callees, or a single
distinctive callee from the engine list. Clusters are anchored to source
modules through seeds/linux_source_refs.tsv where any member already has
a path attribution.

Usage: python3 tools/plt_cluster.py <functions.csv> <string_refs.csv> <plt_callsites.csv>
"""
import csv
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

GENERIC = {
    "operator.delete", "operator.new", "operator.delete[]", "operator.new[]",
    "__stack_chk_fail", "memcpy", "memmove", "memset", "memcmp", "bzero",
    "bcopy", "strlen", "strcmp", "strcpy", "strncpy", "strncmp", "strcat",
    "strchr", "strstr", "malloc", "free", "calloc", "realloc",
    "__cxa_atexit", "__cxa_guard_acquire", "__cxa_guard_release",
    "__cxa_begin_catch", "__cxa_end_catch", "__cxa_throw", "_ZSt17__throw_bad_allocv",
    "pthread_mutex_lock", "pthread_mutex_unlock", "printf", "fprintf", "puts",
    "fopen", "fclose", "fread", "fwrite", "fflush",
}


def main(fn_csv, sr_csv, plt_csv):
    funcs = {}
    with open(fn_csv, newline="") as f:
        for row in csv.DictReader(f):
            funcs[row["entry"].lower()] = row["name"]

    # string evidence per function (module paths and signatures)
    strings = defaultdict(list)
    with open(sr_csv, newline="") as f:
        for row in csv.DictReader(f):
            strings[row["function_entry"].lower()].append(row["string"])

    plt = defaultdict(list)
    with open(plt_csv, newline="") as f:
        for row in csv.DictReader(f):
            plt[row["caller_addr"].lower()].append(row["callee_name"])

    # anchor: functions already attributed to a source path
    anchors = defaultdict(list)
    p = ROOT / "seeds" / "linux_source_refs.tsv"
    with open(p, newline="") as f:
        for row in csv.DictReader(f, delimiter="\t"):
            for ent in row["functions"].split(","):
                ent = ent.strip().lower().split()[0] if ent.strip() else ""
                if ent:
                    anchors[ent].append(row["path"])

    clusters = defaultdict(list)
    for entry, callees in plt.items():
        name = funcs.get(entry, "")
        if not name:
            continue
        sig = tuple(sorted(set(callees) - GENERIC))
        if not sig:
            continue
        if len(sig) == 1 and len(set(callees)) == 1:
            continue  # single generic-ish callee, no shape
        clusters[sig].append(entry)

    out = sorted(clusters.items(), key=lambda kv: -len(kv[1]))
    print(f"{len(out)} clusters, {sum(len(v) for v in clusters.values())} functions")
    for sig, members in out:
        unnamed = [m for m in members if funcs[m].startswith("FUN_")]
        if len(members) < 3 or not unnamed:
            continue
        anchored = {a for m in members for a in anchors.get(m, [])}
        if not anchored:
            continue
        print(f"{len(members):4d} ({len(unnamed)} unnamed)  {'+'.join(sig)[:80]}")
        for a in sorted(anchored):
            print(f"      ANCHOR: {a}")
        for m in sorted(unnamed):
            print(f"      {m}  {funcs[m]}")


if __name__ == "__main__":
    main(*sys.argv[1:4])
