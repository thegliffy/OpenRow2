#!/usr/bin/env python3
"""Decrypt the VPFS directory using the exact path the binary runs.

Header (0x20 bytes, from FUN_040491e0 / decomp/vpfs_decrypt_entries.txt):
  +0x00 magic 'VPFS'   +0x04 version -> DAT_04468a84
  +0x08 ?              +0x0c dir_size -> DAT_04468a88 (malloc'd, read, decrypted)
  +0x10 -> DAT_04468a8c  +0x14 -> DAT_04418044 (user data size)
  +0x18 -> DAT_04468a90 (stride, 16-byte units)
Directory blob follows the header at 0x20.
FUN_0403abc0 = key schedule (128/128) + KeyExpansion(key@DAT_04408c70)
  + AES::Decrypt(..., mode=1) = CBC decrypt, first block XOR zero buffer -> IV = 0.
"""
import struct, sys
from Crypto.Cipher import AES

ELF = "bin/saintsrow2.i386"
VPFS = "bin/saintsrow2.vpfs"

def vaddr_to_off(data, vaddr):
    # ELF32: e_phoff@0x1C, phentsize@0x2A, phnum@0x2C
    e_phoff = struct.unpack_from("<I", data, 0x1C)[0]
    phentsize = struct.unpack_from("<H", data, 0x2A)[0]
    phnum = struct.unpack_from("<H", data, 0x2C)[0]
    for i in range(phnum):
        p = e_phoff + i * phentsize
        p_type, p_offset, p_vaddr, p_filesz, p_memsz = struct.unpack_from("<IIIII", data, p)
        if p_type == 1 and p_vaddr <= vaddr < p_vaddr + p_filesz:
            return p_offset + (vaddr - p_vaddr)
    return None

elf = open(ELF, "rb").read()
off = vaddr_to_off(elf, 0x04408C70)
key = elf[off:off + 16]
print(f"key @ vaddr 0x04408C70 (file off 0x{off:X}): {key.hex()}")
expected = "e79a76b0a9343de28fe9b6eaa21d8d48"
print(f"matches script key: {key.hex() == expected}")

data = open(VPFS, "rb").read()
magic, ver, f8, dir_size, f10, f14, f18, f1c = struct.unpack_from("<8I", data, 0)
print(f"magic={magic:#x} ver={ver} f8={f8:#x} dir_size={dir_size:#x} f10={f10:#x} f14={f14:#x} stride16={f18:#x} f1c={f1c:#x}")

blob = data[0x20:0x20 + dir_size]
blob = blob[:len(blob) // 16 * 16]
pt = AES.new(key, AES.MODE_CBC, bytes(16)).decrypt(blob)
open("agent/vpfs_dir_decrypted.bin", "wb").write(pt)

# quick look: printable strings
import re
strs = re.findall(rb"[\x20-\x7e]{4,}", pt)
print(f"decrypted {len(pt)} bytes; {len(strs)} printable runs >=4; first 20:")
for s in strs[:20]:
    print("  ", s.decode())
