#!/usr/bin/env python3
"""Full-file scan: AES-128-CBC (key@04408c70) x IV candidates; zlib headers at 16-aligned offsets."""
import zlib
from Crypto.Cipher import AES

KEY = bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48")
data = open("bin/saintsrow2.vpfs", "rb").read()
IVS = {"hdr@0x20": data[0x20:0x30], "zero": bytes(16), "key": KEY}

for ivn, iv in IVS.items():
    c = AES.new(KEY, AES.MODE_CBC, iv)
    pt = c.decrypt(data[:len(data)//16*16])
    hits = 0
    for i in range(0, min(len(pt), 0x200000) - 2, 16):
        if pt[i] == 0x78 and (pt[i]*256+pt[i+1]) % 31 == 0 and pt[i+1] in (0x01,0x5e,0x9c,0xda):
            try:
                out = zlib.decompress(pt[i:])
                print(f"iv={ivn} offset 0x{i:X}: DECOMPRESS OK -> {len(out)} bytes: {out[:70]!r}")
            except Exception as e:
                print(f"iv={ivn} offset 0x{i:X}: header ok, decompress: {str(e)[:60]}")
            hits += 1
            if hits > 5: break
    if hits == 0: print(f"iv={ivn}: no zlib headers in first 2MB")
