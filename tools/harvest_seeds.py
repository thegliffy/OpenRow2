#!/usr/bin/env python3
"""Harvest the complete asset-name universe from all VPP archives, hash every
name with the Volition hash, and emit verified hash->name seeds.

These are ground-truth: the names come from the game's own package indexes,
so any hash constant found in the binary that matches one of these is a
verified symbol seed for Ghidra.

Usage: python3 harvest_seeds.py bin/*.vpp_pc > seeds/verified_seeds.csv
"""
import csv
import sys

sys.path.insert(0, "tools")
from vpp import parse
from volition_hash import hash_volition

rows = {}
for path in sys.argv[1:]:
    try:
        _, _, _, entries = parse(path)
    except SystemExit as e:
        print(f"skip {path}: {e}", file=sys.stderr)
        continue
    n = 0
    for e in entries:
        full = f"{e['name']}.{e['ext']}" if e["ext"] else e["name"]
        h = hash_volition(full)
        if h not in rows:
            rows[h] = (full, path)
            n += 1
    print(f"{path}: {len(entries)} entries ({n} new hashes)", file=sys.stderr)

w = csv.writer(sys.stdout)
w.writerow(["hash", "name", "source"])
for h in sorted(rows):
    name, src = rows[h]
    w.writerow([f"0x{h:08X}", name, src])
