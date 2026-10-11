#!/usr/bin/env python3
"""Scan the binary for little-endian dword hashes matching the seed wordlist.

Every hit = a hash table entry in the engine whose string we can recover.
Filters out hash-0 padding noise and garbage strings; survivors are verified
hash->string seeds for Ghidra symbol maps.
"""
import re
import struct
import sys
from collections import defaultdict

sys.path.insert(0, "tools")
from volition_hash import hash_volition

data = open("bin/saintsrow2.i386", "rb").read()

ident = re.compile(r"^[A-Za-z_][A-Za-z0-9_]{2,}$")
words = [l.strip() for l in open("/tmp/sr2_strings.txt") if l.strip()]
h2s = defaultdict(list)
for w in words:
    if ident.match(w):
        h2s[hash_volition(w)].append(w)

hits = []
for off in range(0, len(data) - 3, 4):
    v = struct.unpack_from("<I", data, off)[0]
    if v and v in h2s:
        hits.append((off, v, h2s[v]))

print(f"scanned {len(data)} bytes, {len(h2s)} candidate identifiers, {len(hits)} dword-aligned hits")
for off, v, strs in hits[:60]:
    print(f"  0x{off:06x} -> 0x{v:08X} = {strs}")
