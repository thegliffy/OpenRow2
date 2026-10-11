# OpenRow2

Decompilation of the **Saints Row 2** PC executable — continuation of the original [KairiFey/OpenRow2](https://github.com/KairiFey/OpenRow2) hub (which was a README-only placeholder; this repo is where the work happens).

**Working binary:** the Steam **Linux** build's engine binary, `saintsrow2.i386` (32-bit ELF, stripped, 9,221 functions). It turned out to be better terrain than the Windows `SR2.exe`: the binary leaks its own structure through assert strings, and its data archives parse cleanly.

## What the binary revealed

- The engine is **eON** — Volition's cross-platform engine (`Exit_eON`, `eON_FileSystem::*`, dev paths like `/home/peterm/Development/Projects/eon2-sr2/...` baked into asserts).
- The PC port is not native: it's a full **Win32 emulation layer** (gdi32, registry, threads, winsock, XAudio2-on-OpenAL) with a **D3D9-on-OpenGL shim** whose vtables follow the documented D3D9 method order — plus a HLSL→GLSL translator (`D3DBytecodeToGLSLText`).
- **VPFS is a writable overlay filesystem** with its own on-disk database (`vpfsdb`), not an archive: `VPFS_Open`, `VPFS_ArchiveRead`, `VPFS_FindInVirtualFilesystem`, `VPFS_CreateFolder`, `WriteDatabase`.
- **zstream** (Volition's own name, from debug strings) is the decompression subsystem — the VPFS decode path, bundling zlib 1.2.3.4.
- All 18 VPP package archives parse cleanly (53,969 asset entries) via a Python port of gibbed's reader.

## Scoreboard

**902 / 9,221 engine functions named (~9.8%)** — every name evidence-based (assert signatures, debug strings, source paths, vtable alignment). Zero guesses.

| Wave | Method | Names |
|---|---|---|
| 1 | Hand-read decompiles (zstream, tinyxml, shader PCH) | 10 |
| 2 | Source-path asserts → module prefixes | 721 |
| 3 | Assert signatures (VPFS district) | 22 |
| 4 | Binary-wide signature asserts | 505 |
| 5 | Message-style asserts | 103 |
| 6 | D3D9 vtable alignment (15-anchor shift match) | 102 |

The batch machine has converged: remaining unnamed functions have ambiguous (shared) or absent asserts and need per-function reading.

## Tooling

- `tools/volition_hash.py` — Volition rot-left-6 string hash (ported from gibbed's StringHelpers); wordlist → hash→string seeds.
- `tools/vpp.py` — VPP package parser (Python port of gibbed's `PackageFile`), verified against `common.vpp_pc`.
- `tools/hash_scan.py` — scan binaries for seed-hash dwords.
- `tools/DumpStringRefs.java` — map every embedded string to its referencing function (the naming anchors).
- `tools/DumpFunctions.java` / `tools/Stats.java` — function maps and scoreboard.
- `tools/ApplyNames.java` / `tools/ApplyComments.java` — batch-apply evidence-based names and source attributions to the Ghidra project.
- `tools/DecompileList.java` — batch-decompile function lists.
- `tools/names_batch*.tsv` — the applied rename batches (audit trail).
- `seeds/` — verified seeds (53,969), string refs (16,692), function map, PLT call edges (14,318).
- `decomp/` — raw decompilation output (evidence for applied names).
- `vendor/` — reference RE tooling, cloned not committed: [gibbed/Gibbed.SaintsRow2](https://github.com/gibbed/Gibbed.SaintsRow2) (zlib-style license) and the [saintsrowmods2](https://github.com/saintsrowmods2/SaintsRow2Tools) fork (PegTool, StringHashTool, save editor).

## Pipeline

1. Ghidra headless import + auto-analysis (done — project on disk, not committed).
2. `DumpStringRefs` → `DumpFunctions` → regenerate maps.
3. Extractor rules (assert-signature / message-style / vtable alignment) → `names_batchN.tsv` → `ApplyNames`.
4. Each pass compounds: renamed functions anchor the next wave.

## Next

- D3D9 device vtable: 15 anchors deep; remaining ~100 slots are one careful read away.
- Ambiguous-assert tier: per-function decompile reading (~8,300 functions).
- VPFS compression crack: read the `vpfs_*` → `zstream_decompress` path (payload isn't plain zlib).
- Optional: Windows `SR2.exe` as a second corpus for cross-binary matching against community RE knowledge.

## License

MIT — covers this project's own contributions (tooling, analysis, naming data). No game binaries or assets are committed; you need your own legal copy of Saints Row 2. Nothing was copied from the original KairiFey/OpenRow2 repo (it carries no license).
