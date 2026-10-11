# OpenRow2

Decompilation of the **Saints Row 2** PC executable — continuation of the original [KairiFey/OpenRow2](https://github.com/KairiFey/OpenRow2) hub (which was a README-only placeholder; this repo is where the work happens).

**Working binary:** the Steam **Linux** build's engine binary, `saintsrow2.i386` (32-bit ELF, stripped, 9,221 functions). It turned out to be better terrain than the Windows `SR2.exe`: the binary leaks its own structure through assert strings, and its data archives parse cleanly.

## What the binary revealed

- The engine is **eON** — Volition's cross-platform engine (`Exit_eON`, `eON_FileSystem::*`, dev paths like `/home/peterm/Development/Projects/eon2-sr2/...` baked into asserts).
- The PC port is not native: it's a full **Win32 emulation layer** (gdi32, registry, threads, winsock, XAudio2-on-OpenAL) with a **D3D9-on-OpenGL shim** whose vtables follow the documented D3D9 method order — plus a HLSL→GLSL translator (`D3DBytecodeToGLSLText`).
- **VPFS is a writable overlay filesystem** with its own on-disk database (`vpfsdb`), not an archive: `VPFS_Open`, `VPFS_ArchiveRead`, `VPFS_FindInVirtualFilesystem`, `VPFS_CreateFolder`, `WriteDatabase`.
- **zstream** (Volition's own name, from debug strings) is the decompression subsystem — the VPFS decode path, bundling zlib 1.2.3.4.
- All 18 VPP package indexes parse (53,969 asset names) via a Python port of gibbed's reader. Entry bytes start after the aligned extension pool.

## Scoreboard

**851 / 9,221 functions carry a project name (9.2%).** A name is kept when that function references a matching assert signature, a single source file, or a D3D9 vtable slot locked by those signatures. Module prefixes name the file, not the function. Message-style strings do not replace a signature name.

| Wave | Method | Applied | New functions |
|---|---|---|---|
| 1 | Hand-read decompiles (zstream, tinyxml, shader PCH) | 10 | 10 |
| 2 | Source-path asserts → module prefixes | 721 | 721 |
| 3 | Assert signatures (VPFS district) | 22 | 0 (renames) |
| 4 | Binary-wide signature asserts | 462 | 2 |
| 5 | Message-style asserts | 103 | 103 |
| 6 | D3D9 vtable alignment (assert anchors, documented method order) | 102 | 15 |
| 7 | Short names qualified to `Class::Method` when that method is the only matching signature | 249 | 0 (renames) |

10 + 721 + 2 + 103 + 15 = 851. Wave 5's file originally had 32 extra rows aimed at functions wave 4 had already named (`GetLight` over `StateBlock_GetTextureStageState`, `glCheckFramebufferStatus` over `GetFramebufferHash`, and similar). Those rows did not apply and have been removed.

64 functions reference more than one `Class::Method` (`seeds/ambiguous_signatures.tsv`). The usual extra is an inlined helper such as `Direct3DDevice9Imp::MultithreadedGuard_Enter`. The published name is the signature whose method matches; split the Ghidra body before treating that name as the whole function.

## Tooling

- `tools/volition_hash.py` — Volition rot-left-6 string hash (ported from gibbed's StringHelpers); wordlist → hash→string seeds.
- `tools/vpp.py` — VPP package parser (Python port of gibbed's `PackageFile`). Index layout verified against `common.vpp_pc`. Data offsets are relative to the first byte after the aligned extension pool.
- `tools/hash_scan.py` — scan binaries for seed-hash dwords.
- `tools/DumpStringRefs.java` — map every embedded string to its referencing function (the naming anchors).
- `tools/DumpFunctions.java` / `tools/Stats.java` — function maps and scoreboard.
- `tools/ApplyNames.java` / `tools/ApplyComments.java` — batch-apply evidence-based names and source attributions to the Ghidra project.
- `tools/DecompileList.java` — batch-decompile function lists.
- `tools/names_batch*.tsv` — rename batches. `ApplyNames` matches the function's current name, so re-apply in order. `names_batch7.tsv` qualifies 249 short names to `Class::Method`.
- `seeds/` — verified seeds (53,969), string refs (16,692), function map, PLT call edges (14,318), and `ambiguous_signatures.tsv` (64 functions that reference more than one signature).
- `tools/win_rdata_paths.py` — list `__FILE__` markers in the Windows exe. `.text` is encrypted (byte entropy 8.0), so a path is a file offset plus its two neighboring strings, not a range of owned strings.
- `seeds/win_rdata_paths.csv` — 71 markers from `SR2_pc.exe`. `.\geom\color_pool.cpp` sits between `Color_Entry` and `.rig_pc`. The next path is not the end of that file's strings.
- `seeds/win_rdata_sourcepaths.txt` — the same 71 paths, one per line.
- `seeds/rejected/win_string_module_map.csv` — do not use. It treated the span until the next path as that `.cpp`. `color_pool.cpp` was given 2,194 strings, including melee finisher names and weapon anim names.
- `decomp/` — raw decompilation output (evidence for applied names).
- `vendor/` — reference RE tooling, cloned not committed: [gibbed/Gibbed.SaintsRow2](https://github.com/gibbed/Gibbed.SaintsRow2) (zlib-style license) and the [saintsrowmods2](https://github.com/saintsrowmods2/SaintsRow2Tools) fork (PegTool, StringHashTool, save editor).

## Pipeline

1. Ghidra headless import + auto-analysis (done — project on disk, not committed).
2. `DumpStringRefs` → `DumpFunctions` → regenerate maps.
3. Extractor rules (assert-signature / message-style / vtable alignment) → `names_batchN.tsv` → `ApplyNames`.
4. A later pass may add a class qualifier. It must not replace a signature-derived name with a shorter string found in the same function.
5. Re-apply `names_batch7.tsv` on the local Ghidra project. `seeds/functions.csv` already contains those qualified names.

## Next

- Split the 64 functions in `seeds/ambiguous_signatures.tsv`, then keep the signature that belongs to each piece.
- Check the D3D9 device pointer array itself. The names follow `IDirect3DDevice9` order and line up with the 17 methods already named from asserts. The weak stretch is the run after `DrawIndexedPrimitive` (through `CreateQuery`) and the 10 slots before `SetCursorProperties`, which have no later anchor.
- Read `vpfs_*` → `zstream_decompress`. The VPFS payload is not plain zlib.
- Windows exe: match one `.rdata` string at a time to a Linux function that references it. `win_rdata_paths.csv` is the path list. Leave the rejected adjacency map alone.

## License

MIT — covers this project's own contributions (tooling, analysis, naming data). No game binaries or assets are committed; you need your own legal copy of Saints Row 2. Nothing was copied from the original KairiFey/OpenRow2 repo (it carries no license).
