#!/usr/bin/env python3
"""VPFS end-to-end decode proof: AES-256-CBC + zlib.

Key: from DAT_04408c70 in the binary (dumped via DumpBytes.java).
IV:  the 16-byte field at header offset 0x20.
Payload: data after the 240-byte header region (0xF0).
"""
import struct, zlib, sys
from Crypto.Cipher import AES

KEY = bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48")
data = open("bin/saintsrow2.vpfs", "rb").read()
magic, ver = struct.unpack_from("<II", data, 0)
print(f"magic 0x{magic:08X} version {ver}")
iv = data[0x20:0x30]
print(f"IV candidate @0x20: {iv.hex()}")

# header says: field@0x10=0x3eb, 0x14=0x2e, 0x18=0xa — try payload start candidates
for start in (0xF0, 0x100, 0x200, 0x400, 0x1000):
    ct = data[start:start + 0x4000]
    ct = ct[:len(ct) // 16 * 16]
    pt = AES.new(KEY, AES.MODE_CBC, iv).decrypt(ct)
    head = pt[:32]
    # zlib stream?
    ok = ""
    if pt[0] == 0x78:
        try:
            out = zlib.decompress(data[start:])
            ok = f" ZLIB DECOMPRESS OK -> {len(out)} bytes, head={out[:40]!r}"
        except Exception as e:
            ok = f" (zlib fail: {e})"
    print(f"start 0x{start:X}: {head.hex()}{ok}")
