#!/usr/bin/env python3
"""VPP package parser (Saints Row 2) — Python port of gibbed's PackageFile.cs.

Format (all little-endian, sections aligned to 2048):
  header (384 bytes): magic 0x51890ACE, version 4, flags@0x14C,
    index_count@0x154, package_size@0x158, index_size@0x15C,
    names_size@0x160, extensions_size@0x164, uncompressed_data_size@0x168,
    compressed_data_size@0x16C
  index  : index_count * 28-byte entries
  names  : ASCIIZ pool
  extensions: ASCIIZ pool
  data   : entries at their offsets (uncompressed PC) or sequential
           compressed blocks (flags bit 0 — 360 compression)

Index entry (28 bytes): name_off, ext_off, u32(0 on PC), data_off,
  uncompressed_size, compressed_size (-1 on PC), u32(0 on PC)

Usage: python3 vpp.py <package.vpp_pc> [list|extract <name> <out>]
"""
import struct
import sys

MAGIC = 0x51890ACE
ALIGN = 2048


def align(n, a=ALIGN):
    return (n + a - 1) // a * a


def read_asciiz(buf, off):
    end = buf.index(b"\x00", off)
    return buf[off:end].decode("ascii", "replace")


def parse(path):
    data = open(path, "rb").read()
    magic, version = struct.unpack_from("<II", data, 0)
    if magic != MAGIC:
        raise SystemExit(f"not a VPP: magic 0x{magic:08X}")
    if version != 4:
        raise SystemExit(f"unsupported version {version}")
    flags = struct.unpack_from("<I", data, 0x14C)[0]
    (index_count, package_size, index_size, names_size, ext_size,
     uncomp_size, comp_size) = struct.unpack_from("<7I", data, 0x154)
    compressed = bool(flags & 1)

    off = align(384)
    index_buf = data[off:off + align(index_size)]
    off += align(index_size)
    names_buf = data[off:off + align(names_size)]
    off += align(names_size)
    ext_buf = data[off:off + align(ext_size)]
    base = off  # data section start

    entries = []
    seq = base
    for i in range(index_count):
        e = off = i * 28
        name_off, ext_off, u08, data_off, usize, csize, u18 = \
            struct.unpack_from("<7i", index_buf, off)
        if compressed:
            real_off = seq
            seq += align(csize)
        else:
            real_off = data_off + base
        entries.append({
            "name": read_asciiz(names_buf, name_off),
            "ext": read_asciiz(ext_buf, ext_off),
            "offset": real_off,
            "size": usize,
            "csize": csize,
            "u08": u08, "u18": u18,
        })
        # gibbed asserts these are 0 on PC packages; report instead of crash
        if u08 != 0 or u18 != 0:
            print(f"WARN entry {i}: u08={u08} u18={u18}", file=sys.stderr)
    return data, flags, compressed, entries


if __name__ == "__main__":
    path = sys.argv[1]
    data, flags, compressed, entries = parse(path)
    print(f"# {path}: {len(entries)} entries, flags={flags}, compressed={compressed}")
    if len(sys.argv) > 2 and sys.argv[2] == "extract":
        name, out = sys.argv[3], sys.argv[4]
        for e in entries:
            if f"{e['name']}.{e['ext']}" == name:
                open(out, "wb").write(data[e["offset"]:e["offset"] + e["size"]])
                print(f"extracted {name} ({e['size']} bytes) -> {out}")
                break
    else:
        for e in entries[:40]:
            print(f"  {e['name']}.{e['ext']}  off=0x{e['offset']:x} size={e['size']}")
