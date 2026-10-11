#!/usr/bin/env python3
"""Volition string hash (Saints Row 2) — port of gibbed's StringHelpers.HashVolition.

Used to seed Ghidra symbol maps: game code references strings by 32-bit hash
(rot-left-6 accumulate, ASCII lowercased). Given a wordlist of candidate
strings (from extracted data files, xtbl keys, lestrings, filenames), this
produces hash -> string mappings to name decompiled functions/globals.

Usage:
  python3 volition_hash.py hash <string>            # hash one string
  python3 volition_hash.py seed wordlist.txt out.csv # hash every line -> csv
"""
import csv
import sys


def hash_volition(s: str) -> int:
    h = 0
    for ch in s:
        c = ord(ch)
        if 0x41 <= c <= 0x5A:  # 'A'..'Z'
            c += 0x20
        h = ((h << 6) | (h >> 26)) & 0xFFFFFFFF
        h ^= c
    return h


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        sys.exit(1)
    cmd, arg = sys.argv[1], sys.argv[2]
    if cmd == "hash":
        print(f"0x{hash_volition(arg):08X}")
    elif cmd == "seed":
        out = sys.argv[3]
        n = 0
        with open(arg) as f, open(out, "w", newline="") as o:
            w = csv.writer(o)
            w.writerow(["hash", "string"])
            seen = set()
            for line in f:
                s = line.strip()
                if s and s not in seen:
                    seen.add(s)
                    w.writerow([f"0x{hash_volition(s):08X}", s])
                    n += 1
        print(f"seeded {n} hashes -> {out}")
    else:
        sys.exit(f"unknown command {cmd}")


if __name__ == "__main__":
    main()
