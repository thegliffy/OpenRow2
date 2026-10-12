#!/usr/bin/env python3
"""Brute-force VPFS decode: AES-256-CBC key candidates x IV candidates x payload starts."""
import struct, zlib
from Crypto.Cipher import AES

KEYS = {
    "key@04408c70+0":  bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48"),
    "key@04408c70+20": bytes.fromhex("010000007267626178797a77ffffffff"),
    "key@04408c70 full32": bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48010000007267626178797a77ffffffff"),
}
data = open("bin/saintsrow2.vpfs", "rb").read()
IVS = {"hdr@0x20": data[0x20:0x30], "zero": bytes(16), "key0": KEYS["key@04408c70+0"]}

hits = []
for kn, key in KEYS.items():
    for ivn, iv in IVS.items():
        c = AES.new(key, AES.MODE_CBC, iv)
        # decrypt first block at every 16-aligned start in first 64KB
        for start in range(0x0, 0x10000, 16):
            pt = c.decrypt(data[start:start+16])
            if pt[0] == 0x78 and pt[1] in (0x01, 0x9c, 0xda):  # zlib CMF/FLG
                hits.append((kn, ivn, start, pt))
                print(f"HIT key={kn} iv={ivn} start=0x{start:X} pt={pt.hex()}")
                # try full decompress from here
                try:
                    out = zlib.decompress(data[start:])
                    print(f"   ZLIB OK -> {len(out)} bytes head={out[:60]!r}")
                except Exception as e:
                    print(f"   zlib fail: {e}")
print("done, hits:", len(hits))
