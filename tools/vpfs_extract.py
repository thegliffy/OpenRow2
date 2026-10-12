#!/usr/bin/env python3
"""Extract saintsrow2.vpfs with the AES path the binary runs.

Directory: AES-128-CBC, zero IV, at header[+8] + header[+0x14] + 0x20.
File bodies: AES-128-ECB on each 16-byte block at file_start + n * (stride * 16).
Other file bytes stay as they are. No inflate.
"""

import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VPFS = ROOT / "bin" / "saintsrow2.vpfs"
ELF = ROOT / "bin" / "saintsrow2.i386"
TSV = ROOT / "decomp" / "vpfs_dir_records.tsv"
OUT_DIR = Path("/tmp/openrow-vpfs")
KEY_OFF = 0x408c70


def openssl_dec(mode, key_hex, data, iv=None):
    cmd = ["openssl", "enc", "-d", mode, "-K", key_hex, "-nopad"]
    if iv is not None:
        cmd.extend(["-iv", iv])
    proc = subprocess.run(cmd, input=data, capture_output=True)
    if proc.returncode != 0 or len(proc.stdout) != len(data):
        err = proc.stderr.decode("utf-8", "replace").strip()
        raise SystemExit(err or "openssl decrypt failed")
    return proc.stdout


def walk_directory(plain):
    records = []
    pos = 0x59
    while pos + 36 <= len(plain):
        typ, nlen = struct.unpack_from("<HH", plain, pos)
        if nlen < 2 or pos + 36 + nlen > len(plain):
            break
        raw_name = plain[pos + 36 : pos + 36 + nlen]
        if not raw_name.endswith(b"\x00"):
            break
        try:
            name = raw_name[:-1].decode("ascii")
        except UnicodeDecodeError:
            break
        if not name or any(ord(c) < 32 for c in name):
            break
        attr = struct.unpack_from("<I", plain, pos + 32)[0]
        end = pos + 36 + nlen
        if typ == 0:
            if end + 4 > len(plain):
                break
            count = struct.unpack_from("<I", plain, end)[0]
            if count > 64 or end + 4 + count * 4 > len(plain):
                break
            trailer = 4 + count * 4
            size = 0
        else:
            if end + 8 > len(plain):
                break
            size = struct.unpack_from("<Q", plain, end)[0]
            trailer = 24 if end + 24 <= len(plain) else len(plain) - end
        records.append((typ, name, attr, size))
        pos = end + trailer
        if typ != 0 and trailer < 24:
            break
    return records


def decrypt_file(blob, key_hex, stride):
    step = stride * 16
    blocks = []
    offs = []
    off = 0
    while off + 16 <= len(blob):
        blocks.append(blob[off : off + 16])
        offs.append(off)
        off += step
    if not blocks:
        return blob
    dec = openssl_dec("-aes-128-ecb", key_hex, b"".join(blocks))
    out = bytearray(blob)
    for i, at in enumerate(offs):
        out[at : at + 16] = dec[i * 16 : (i + 1) * 16]
    return bytes(out)


def pe_has_text(blob):
    if blob[:2] != b"MZ" or len(blob) < 0x40:
        return False
    e_lfanew = struct.unpack_from("<I", blob, 0x3C)[0]
    if e_lfanew + 24 > len(blob) or blob[e_lfanew : e_lfanew + 4] != b"PE\x00\x00":
        return False
    nsec = struct.unpack_from("<H", blob, e_lfanew + 6)[0]
    opt = struct.unpack_from("<H", blob, e_lfanew + 20)[0]
    base = e_lfanew + 24 + opt
    for i in range(nsec):
        at = base + i * 40
        if at + 8 > len(blob):
            return False
        if blob[at : at + 8].split(b"\x00", 1)[0] == b".text":
            return True
    return False


def main():
    vpfs = VPFS.read_bytes()
    if vpfs[:4] != b"VPFS":
        raise SystemExit("not a VPFS file")
    key_hex = ELF.read_bytes()[KEY_OFF : KEY_OFF + 16].hex()
    d08, d0c, _d10, d14, stride = struct.unpack_from("<IIIII", vpfs, 0x08)
    dir_off = d08 + d14 + 0x20
    directory = openssl_dec(
        "-aes-128-cbc", key_hex, vpfs[dir_off : dir_off + d0c], "0" * 32
    )
    records = walk_directory(directory)
    if len(records) != 16:
        raise SystemExit(f"expected 16 directory records, got {len(records)}")

    cursor = 0x20
    rows = []
    for index, (typ, name, attr, size) in enumerate(records):
        if typ == 0:
            arch = 0
        else:
            arch = cursor
            cursor += size
        rows.append((index, typ, name, attr, size, arch))

    TSV.write_text(
        "index\ttype\tname\tattributes\tsize\tarchive_offset\n"
        + "".join(
            f"{i}\t{typ}\t{name}\t{attr:#x}\t{size:#x}\t{arch:#x}\n"
            for i, typ, name, attr, size, arch in rows
        )
    )

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    for _i, typ, name, _attr, size, arch in rows:
        if typ == 0:
            print(f"{name}\tdir")
            continue
        plain = decrypt_file(vpfs[arch : arch + size], key_hex, stride)
        (OUT_DIR / name).write_bytes(plain)
        print(f"{name}\t{arch:#x}\t{size:#x}\t{plain[:4]!r}")

    bink = (OUT_DIR / "binkw32.dll").read_bytes()
    if not pe_has_text(bink):
        raise SystemExit("binkw32.dll is not a PE with a .text section")
    manifest = (OUT_DIR / "microsoft.vc80.crt.manifest").read_bytes()
    if not manifest.startswith(b"\xef\xbb\xbf<"):
        raise SystemExit("manifest does not start with a BOM and <")
    print("checks ok")


if __name__ == "__main__":
    sys.exit(main())
