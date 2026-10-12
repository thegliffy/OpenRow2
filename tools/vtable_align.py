#!/usr/bin/env python3
"""Vtable alignment wave (documented method order -> FUN_ slots).

For each dump (from DumpVtable.java), group rows into contiguous pointer runs
(one run = one vtable), find the shift where ALREADY-NAMED slots agree with the
documented interface order, and only then propose names for FUN_ slots.
A run needs >= 2 agreeing named anchors before any proposal is trusted.

Documented order comes from Wine headers' `#define Interface_Method(...)` blocks
(Wine emits them in vtable order, inherited methods first).

Usage: python3 tools/vtable_align.py
"""
import csv
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HDR = ROOT / "agent" / "headers"

# class -> (header file, interface prefix in that file)
CLASSES = {
    "DirectInputDeviceImp": ("dinput.h", "IDirectInputDevice8"),
    "DirectInputKeyboardDeviceImp": ("dinput.h", "IDirectInputDevice8"),
    "DirectInputMouseDeviceImp": ("dinput.h", "IDirectInputDevice8"),
    "DirectInputGamepadDeviceImp": ("dinput.h", "IDirectInputDevice8"),
    "DirectInputImp": ("dinput.h", "IDirectInput8"),
    "AudioClientImp": ("audioclient.idl", "IAudioClient"),
    "AudioCaptureClientImp": ("audioclient.idl", "IAudioCaptureClient"),
    "AudioRenderClientImp": ("audioclient.idl", "IAudioRenderClient"),
    "MMDeviceImp": ("mmdeviceapi.idl", "IMMDevice"),
    "MMDeviceEnumeratorImp": ("mmdeviceapi.idl", "IMMDeviceEnumerator"),
    "MMDeviceCollectionImp": ("mmdeviceapi.idl", "IMMDeviceCollection"),
    "MMEndpointImp": ("mmdeviceapi.idl", "IMMEndpoint"),
    "PropertyStoreImp": ("propidl.idl", "IPropertyStore"),
    "DirectSoundBuffer8Imp": ("dsound.h", "IDirectSoundBuffer8"),
    "DirectSound3DBuffer8Imp": ("dsound.h", "IDirectSound3DBuffer8"),
}


def order_from_defines(fname, iface):
    """Method order from Wine's #define Interface_Method blocks."""
    text = open(HDR / fname).read()
    order = []
    for line in text.splitlines():
        m = re.match(r"#define\s+%s_([A-Za-z0-9_]+)\(" % iface, line)
        if m:
            order.append(m.group(1))
    return order or None


def order_from_idl(fname, iface):
    """Method order from an .idl interface body (inheritsfrom resolved)."""
    text = open(HDR / fname).read()
    chain = []
    cur = iface
    seen = set()
    base = None
    while cur and cur not in seen:
        seen.add(cur)
        if cur == "IUnknown":
            base = ["QueryInterface", "AddRef", "Release"]
            break
        chain.append(cur)
        m = re.search(r"interface\s+[^\n]*\b%s\b[^\n]*:\s*(\w+)" % cur, text)
        if not m:
            m = re.search(r"interface\s+%s\s*:\s*(\w+)" % cur, text)
        cur = m.group(1) if m else None
    order = base or []
    for iface_name in reversed(chain):
        m = re.search(r"interface\s+[^\n]*\b%s\b[^\n]*:" % iface_name, text)
        if not m:
            return None
        body = text[m.end():text.find("}", m.end())]
        for line in body.splitlines():
            line = line.strip()
            if line.startswith(("[", "import", "typedef", "const", "/*", "//")) or not line:
                continue
            f = re.search(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", line)
            if f and f.group(1) not in ("interface", "HRESULT", "BOOL"):
                order.append(f.group(1))
    return order or None


def documented_order(fname, iface):
    if fname.endswith(".h"):
        return order_from_defines(fname, iface)
    return order_from_idl(fname, iface)


def runs(rows):
    rows = sorted(rows, key=lambda r: int(r["slot_addr"], 16))
    out, cur = [], [rows[0]]
    for r in rows[1:]:
        if int(r["slot_addr"], 16) - int(cur[-1]["slot_addr"], 16) == 4:
            cur.append(r)
        else:
            out.append(cur)
            cur = [r]
    out.append(cur)
    return out


def main():
    proposals = []
    for path in sorted((ROOT / "agent" / "vtables").glob("*.tsv")):
        rows = [r for r in csv.DictReader(open(path), delimiter="\t") if r["slot_addr"] != "NOTPOINTER"]
        if not rows:
            continue
        for run in runs(rows):
            named = [r for r in run if "::" in r["target_name"]]
            if not named:
                continue
            prefixes = {n["target_name"].split("::")[0] for n in named}
            prefixes = [p for p in prefixes if p in CLASSES]
            if not prefixes:
                continue
            cls = prefixes[0]
            src, iface = CLASSES[cls]
            order = documented_order(src, iface)
            if not order:
                print(f"!! no documented order for {cls} ({src})", file=sys.stderr)
                continue
            best = None
            for shift in range(len(run)):
                agree = 0
                for r in named:
                    di = run.index(r) - shift
                    if 0 <= di < len(order) and order[di] == r["target_name"].split("::")[-1]:
                        agree += 1
                if agree >= 2 and (best is None or agree > best[1]):
                    best = (shift, agree)
            if not best:
                continue
            shift, agree = best
            print(f"{path.name}: run@{run[0]['slot_addr']} class={cls} shift={shift} anchors={agree}/{len(named)} slots={len(run)}")
            for i, r in enumerate(run):
                di = i - shift
                if r["target_name"].startswith("FUN_") and 0 <= di < len(order):
                    print(f"    PROPOSE {r['target']} -> {cls}::{order[di]}")
                    proposals.append((r["target"], r["target_name"], f"{cls}::{order[di]}", f"{src} {iface} shift={shift} anchors={agree}"))
    print()
    print(f"TOTAL proposals: {len(proposals)}")
    with open(ROOT / "agent" / "vtable_proposals.tsv", "w") as f:
        for t, cur, name, why in proposals:
            f.write(f"{t}\t{cur}\t{name}\tvtable_align\t{why}\n")


if __name__ == "__main__":
    main()
