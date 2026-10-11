#!/usr/bin/env python3
"""Locate __FILE__ path strings in the Windows SR2 executable's .rdata.

SR2_pc.exe is SecuROM-packed: .text is encrypted, so strings have no code
xrefs. Each path is one literal at a file offset. The strings on either
side are context, not a module range. Do not assign every string up to the
next path to that .cpp — other translation units sit in between.

Usage: python3 tools/win_rdata_paths.py SR2_pc.exe > seeds/win_rdata_paths.csv
"""
import csv
import re
import struct
import sys

PATH_RE = re.compile(r"\.(cpp|h|inl|hpp|c)$", re.I)


def pe_sections(data):
    if data[:2] != b"MZ":
        raise SystemExit("not a PE")
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\x00\x00":
        raise SystemExit("not a PE")
    _, nsec, _, _, _, optsz, _ = struct.unpack_from("<HHIIIHH", data, pe + 4)
    sec = pe + 24 + optsz
    out = []
    for i in range(nsec):
        o = sec + i * 40
        name = data[o:o + 8].split(b"\x00", 1)[0].decode("ascii", "replace")
        vsz, va, rsz, raw = struct.unpack_from("<IIII", data, o + 8)
        out.append((name, raw, rsz))
    return out


def c_strings(blob, base, minlen=4):
    out = []
    i = 0
    n = len(blob)
    while i < n:
        if 32 <= blob[i] < 127:
            j = i
            while j < n and 32 <= blob[j] < 127:
                j += 1
            if j < n and blob[j] == 0 and j - i >= minlen:
                out.append((base + i, blob[i:j].decode("ascii")))
                i = j + 1
                continue
        i += 1
    return out


def clean_path(s):
    for mark in (".\\", "./", "q:\\", "Q:\\"):
        k = s.find(mark)
        if k > 0:
            return s[k:]
    return s


def main():
    if len(sys.argv) != 2:
        raise SystemExit("usage: win_rdata_paths.py <SR2_pc.exe>")
    data = open(sys.argv[1], "rb").read()
    rdata = next((raw, rsz) for name, raw, rsz in pe_sections(data) if name == ".rdata")
    strings = c_strings(data[rdata[0]:rdata[0] + rdata[1]], rdata[0])
    w = csv.writer(sys.stdout, lineterminator="\n")
    w.writerow(["offset", "path", "prev", "next"])
    n = 0
    for i, (off, s) in enumerate(strings):
        if not PATH_RE.search(s) or ("\\" not in s and "/" not in s):
            continue
        prev = strings[i - 1][1] if i else ""
        nxt = strings[i + 1][1] if i + 1 < len(strings) else ""
        w.writerow([f"0x{off:08X}", clean_path(s), prev, nxt])
        n += 1
    print(f"{n} path markers in .rdata", file=sys.stderr)


if __name__ == "__main__":
    main()
