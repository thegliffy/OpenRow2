#!/usr/bin/env python3
"""Try all AES modes x key/IV candidates; scan decrypted output for zlib streams."""
import zlib
from Crypto.Cipher import AES

KEY32 = bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48010000007267626178797a77ffffffff")
KEY16 = bytes.fromhex("e79a76b0a9343de28fe9b6eaa21d8d48")
data = open("bin/saintsrow2.vpfs", "rb").read()
IVS = {"hdr@0x20": data[0x20:0x30], "zero": bytes(16), "key_lo": KEY16, "key_hi": KEY32[16:]}
MODES = {"CBC": AES.MODE_CBC, "CFB": AES.MODE_CFB, "OFB": AES.MODE_OFB, "CTR": AES.MODE_CTR}

def scan(pt):
    # zlib stream start candidates
    for i in range(0, len(pt) - 2):
        if pt[i] == 0x78 and (pt[i] * 256 + pt[i+1]) % 31 == 0 and pt[i+1] in (0x01, 0x5e, 0x9c, 0xda):
            return i
    return None

for kn, key in (("k32", KEY32), ("k16", KEY16)):
    for ivn, iv in IVS.items():
        for mn, mode in MODES.items():
            try:
                if mn == "CTR":
                    c = AES.new(key, mode, initial_value=iv)
                else:
                    c = AES.new(key, mode, iv)
            except Exception:
                continue
            pt = c.decrypt(data[0xF0:0xF0+0x2000])
            hit = scan(pt)
            if hit is not None:
                print(f"HIT {kn} iv={ivn} mode={mn} zlib at +0x{hit:X}")
                off = 0xF0 + hit
                # re-decrypt from that point (CBC needs re-align; for stream modes just slice)
                if mn in ("CFB", "OFB", "CTR"):
                    try:
                        out = zlib.decompress(pt[hit:])
                        print(f"   DECOMPRESS OK -> {len(out)} bytes: {out[:80]!r}")
                    except Exception as e:
                        print(f"   decompress fail: {e}")
                else:
                    # CBC: decrypt aligned from 0xF0, decompress from hit (must be block-aligned)
                    if hit % 16 == 0:
                        try:
                            out = zlib.decompress(pt[hit:])
                            print(f"   DECOMPRESS OK -> {len(out)} bytes: {out[:80]!r}")
                        except Exception as e:
                            print(f"   decompress fail: {e}")
