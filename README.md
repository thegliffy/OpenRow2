# OpenRow2

Decompilation of the **Saints Row 2** PC executable — continuation of the original [KairiFey/OpenRow2](https://github.com/KairiFey/OpenRow2) hub (which was a README-only placeholder; this repo is where the work happens).

**Working binary:** the Steam **Linux** build's engine binary, `saintsrow2.i386` (32-bit ELF, stripped, 9,221 functions). It turned out to be better terrain than the Windows `SR2.exe`: the binary leaks its own structure through assert strings, and its data archives parse cleanly.

## What the binary revealed

- The engine is **eON** — Volition's cross-platform engine (`Exit_eON`, `eON_FileSystem::*`, dev paths like `/home/peterm/Development/Projects/eon2-sr2/...` baked into asserts).
- The PC port is not native: it's a full **Win32 emulation layer** (gdi32, registry, threads, winsock, XAudio2-on-OpenAL) with a **D3D9-on-OpenGL shim** whose vtables follow the documented D3D9 method order — plus a HLSL→GLSL translator (`D3DBytecodeToGLSLText`).
- **VPFS is a writable overlay filesystem** with its own on-disk database (`vpfsdb`), not an archive: `VPFS_Open`, `VPFS_ArchiveRead`, `VPFS_FindInVirtualFilesystem`, `VPFS_CreateFolder`, `WriteDatabase`.
- **zstream** (Volition's own name, from debug strings) is a zlib 1.2.3.4 wrapper. VPFS does not call it. The archive directory and the file bodies are AES blocks (`decomp/vpfs_zstream_note.txt`).
- All 18 VPP package indexes parse (53,969 asset names) via a Python port of gibbed's reader. Entry bytes start after the aligned extension pool.

## Scoreboard

**4,923 / 9,221 functions carry a project name (53.4%).** A name is kept when that function references a matching assert signature, a single source file, or a D3D9 vtable slot locked by those signatures. Module prefixes name the file, not the function. Message-style strings do not replace a signature name.

| Wave | Method | Applied | New functions |
|---|---|---|---|
| 213 | v1.6.40-only string matches + compression-setter struct-field split (`tools/decomp_notes_wave213_v1640_stragglers.md`). | 8 | 8 |
| 212 | png_crc_error + png_default_read_data body matches (`tools/decomp_notes_wave212_crc_error_and_default_read.md`). | 2 | 2 |
| 211 | png.c/pngerror.c helper bodies line-by-line (`tools/decomp_notes_wave211_helper_bodies.md`). | 4 | 4 |
| 210 | pngwriter side + simple-API reader sweep vs v1.6.0 (`tools/decomp_notes_wave210_pngwriter_side.md`). | 33 | 33 |
| 209 | Libpng reader district completion: pngrutil handler bodies vs v1.6.0 via call-graph anchors + distinctive-string locks (`tools/decomp_notes_wave209_pngrutil_completion.md`). | 18 | 18 |
| 208 | Libpng reader district source match vs v1.6.0: 6 chunk handlers + 7 pngset setters + 8 error/crc helpers vs v1.6.0 (`tools/decomp_notes_wave208_libpng_chunk_district.md`). | 21 | 21 |
| 207 | Vtable aligner unfreeze: dumps refreshed from live, MM*/AudioRenderClient lanes re-gated, 7 slots (`tools/decomp_notes_wave207_vtable_unfreeze.md`). | 7 | 7 |
| 206 | XAudio2 MANUAL_ORDER pinned to eON observed layout; aligner shift-0 fits named the 4 gap slots (`tools/decomp_notes_wave206_xaudio2_pinned.md`). | 4 | 4 |
| 205 | Loader name-table mega-batch: static-binary dispatch tables, single-ref gates, ~420 checker-name agreements (`tools/decomp_notes_wave205_loader_name_table.md`). | 1,166 | 1,166 |
| 204 | TranslateAccelerator + DeleteTimerQueue (`tools/decomp_notes_wave204_accel_timerqueue.md`). | 8 | 8 |
| 203 | IsMainThread + SetErrorMode + Wnd gates (`tools/decomp_notes_wave203_mainthread_errormode.md`). | 10 | 10 |
| 202 | Thread APIs GetCurrent/Priority/Terminate (`tools/decomp_notes_wave202_thread_apis.md`). | 11 | 9 new + 2 renames |

…and 184 earlier waves in [`tools/SCOREBOARD.md`](tools/SCOREBOARD.md).

10 + 721 + 2 + 103 + 15 + 53 + 49 = 953. Wave 5's file originally had 32 extra rows aimed at functions wave 4 had already named (`GetLight` over `StateBlock_GetTextureStageState`, `glCheckFramebufferStatus` over `GetFramebufferHash`, and similar). Those rows did not apply and have been removed. The scoreboard counts the live Ghidra project after all waves were applied and re-dumped; `seeds/functions.csv` and `seeds/string_refs.csv` are that dump. Wave 9's 119 proposal rows collapse to 53 unique functions (keyboard/mouse/gamepad runs share slots on the same interface); the 11 two-anchor `iaudioclient` proposals were held below the ≥3-anchor trust floor. Wave 10's 102 rows are the unique remainder after wave 9 (conflicting class prefixes resolved to the base class — shared implementations); the aligner now enforces ≥3 anchors, so the two-anchor MMDevice/MMEndpoint/IAudioCapture/IAudioRender runs stay held.

64 functions reference more than one `Class::Method` (`seeds/ambiguous_signatures.tsv`). The usual extra is an inlined helper such as `Direct3DDevice9Imp::MultithreadedGuard_Enter`. The published name is the signature whose method matches; split the Ghidra body before treating that name as the whole function. Split check batches 1–9 are done (`seeds/splitcheck_batch*.tsv`, classified in `seeds/split_classified.tsv`): 54 candidate boundaries were false refs (data reads, not flow) and 15 were jump-table entries — `seeds/split_confirmed.tsv` has no confirmed real entry yet, so no body has been split.

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
- `mcp/` — PyGhidra MCP server (`server.py`, FastMCP, port 8191, Docker on moneta at `/dock/openrow2`): the resident single-writer gateway that owns the live Ghidra project — `decompile`, `rename`, `set_comment`, `list_functions`, `list_strings`, `callers`, `scoreboard`. Waves 27+ apply through it; its `scoreboard` is the live authority.
- `decomp/` — raw decompilation output (evidence for applied names).
- `vendor/` — reference RE tooling, cloned not committed: [gibbed/Gibbed.SaintsRow2](https://github.com/gibbed/Gibbed.SaintsRow2) (zlib-style license) and the [saintsrowmods2](https://github.com/saintsrowmods2/SaintsRow2Tools) fork (PegTool, StringHashTool, save editor).

## Pipeline

1. Ghidra headless import + auto-analysis (done — project on disk, not committed).
2. `DumpStringRefs` → `DumpFunctions` → regenerate maps.
3. Extractor rules (assert-signature / message-style / vtable alignment) → `names_batchN.tsv` → `ApplyNames`.
4. A later pass may add a class qualifier. It must not replace a signature-derived name with a shorter string found in the same function.
5. Re-apply `names_batch7.tsv` on the local Ghidra project. `seeds/functions.csv` already contains those qualified names.

## Local model

`AGENTS.md` is the work loop. `python3 tools/llm_work.py next` prints one unnamed function and the strings it references. `check` allows a name only when that function alone has one assert message of the form `Class::Method` plus the text around it. `accept` appends a passing row to `tools/names_batch_llm.tsv` (`current<TAB>proposed`) for `ApplyNames` after batches 2–7. `ask` sends the packet to a local OpenAI-compatible server (`OPENROW_LLM_URL`, default `http://127.0.0.1:18280/v1`) and stops at the checker.

`python3 tools/test_llm_work.py` runs the checker against the seeds.

## Next

Wave 213 applied (4,937): v1.6.40-only string matches, compression-setter pairs split on pngstruct.h field order, image pair on the channels computation; libpng district now dry for both matcher eras. See `tools/decomp_notes_wave213_v1640_stragglers.md`.

Wave 212 applied (4,929): png_crc_error + png_default_read_data body-matched vs v1.6.0; write-side io twins confirmed not linked. See `tools/decomp_notes_wave212_crc_error_and_default_read.md`.

Wave 211 applied (4,927): png.c/pngerror.c helper bodies line-by-line — png_reset_crc, png_calculate_crc, png_read_data, png_format_number. See `tools/decomp_notes_wave211_helper_bodies.md`.

Wave 210 applied (4,923): pngwriter side + simple-API reader sweep vs v1.6.0 — png_write_IHDR/tRNS/bKGD/tEXt/zTXt/iTXt/sRGB/sPLT/sBIT/oFFs/pHYs/tIME/compress paths, png_read_info/end/buffer/sig, png_combine_row, png_set_longjmp_fn; 33 names, seed-uniqueness gated. See `tools/decomp_notes_wave210_pngwriter_side.md`.

Wave 209 applied (4,890): pngrutil reader district completed against v1.6.0 — PLTE/gAMA/cHRM/sRGB/iCCP/sPLT/tRNS/bKGD/pCAL/sCAL/tIME/tEXt/zTXt/iTXt handlers + png_handle_unknown + png_check_chunk_name + png_read_chunk_header; 18 names, call-graph cross-locks clean. See `tools/decomp_notes_wave209_pngrutil_completion.md`.

Older wave notes: [`tools/SCOREBOARD.md`](tools/SCOREBOARD.md) and `tools/decomp_notes_wave*.md`.


The assert-signature naming queue is empty (`python3 tools/llm_work.py queue` prints `0 functions`). A new name still has to be a `Class::Method` that one function alone takes from an assert. The checker is the authority. Do not hand-edit `tools/names_batch*.tsv`, and do not invent a name from a call mix.

Closed, do not restart:

- Ambiguous splits. The 64 functions in `seeds/ambiguous_signatures.tsv` were checked. `seeds/split_confirmed.tsv` has no real boundary. A split needs a call or a data reference from outside the function. A jump inside the same function does not count.
- Windows `.rdata` paths. All 71 paths in `seeds/win_rdata_sourcepaths.txt` are absent from the Linux binary, filenames included (`decomp/win_rdata_match_note.txt`, `seeds/win_rdata_matches.tsv`). Leave `seeds/rejected/win_string_module_map.csv` unused.
- String-reference catalog of unnamed `FUN_` bodies: `decomp/largest_fun_strings_note.txt` through `note94.txt` (937 functions).
- D3D9 and COM slots that already have an anchor. Do not name an unanchored slot to fill a gap.
- XAudio2 voice/engine surface: ExecuteOperation opcodes 0-10, voice/source vtable locks, Imp ctor, CancelOperations, GetAudioGraphMutex (waves 23-31). Remaining helpers are STL tree/vector bodies.
- Largest no-string `FUN_` bodies (`decomp/largest_fun_calls_note.txt`): ADC/MUL data tables — not names.
- GLSL producers: `decomp/shader_glsl_note.txt`. `FUN_04052100` and `FUN_0405ac10` stay unnamed (IdentifyInstruction assert is the callee).
- COT COM object tracker: Cot::{Create,AddRef,Release,Destroy,ReportLeaks} (wave 31).
- eON COM bootstrap + unique eON_* C district + module_hex assert upgrades (wave 32).
- VPFS invalid-handle wrappers + CoSetProxyBlanket; shared eON_FileSystem/Varyings and remaining module_hex leftovers confirmed leave-alone (wave 33).
- Win32 C-API district + DeterminePrimitiveType (wave 34).
- Sockets eON_* leftovers + Query Issue (wave 35).
- Sockets/VirtualProtect/clipboard wave (wave 36).
- VPFS_OpenExec + sync Create* A/W (wave 37).
- thread/window/fileinfo + WaitableTimer (wave 38).
- versioninfo + fs/vpfs pointer/attrs (wave 39).
- ToUnicode/ToAscii + GetUserObjectInformation + fs_unlink (wave 40).
- Shared-cluster verdicts + SetRenderState + OGLC/LinkedProgramData (wave 41).
- d3d9device→Imp + libpng unique APIs (wave 42).
- Harder D3D + png body-lock + COM Imp ctors (wave 43).
- Imp ctors + png_image_write + inline device Imp (wave 44).
- Bulk inline d3d9device→Imp + Set*ShaderConstant* + ShowCursor helpers (wave 45).
- Same-method d3d9device wrappers LEAVE + cursor C-API district + leave-alones (wave 46).
- user32 leftovers + cursor internals + ProcessKeyUp (wave 47).
- user32/GDI leftovers + clipboard/OpenURL/screensaver + GetAdapterIdentifier (wave 48).
- Heap_Create/Validate + RegCreateKeyEx + OpenGLDebugWriter/Window/Gamepad/DSC crumbs (wave 49).
- Registry Ex leftovers + thin wrappers + Stdout debug writer (wave 50).
- OpenGL thread/error + shader_pch savers + FreeLibrary (wave 51).

Closed, continued:

- VPFS decrypt and extract. `tools/vpfs_extract.py` follows the AES path (`decomp/vpfs_aes_plain.txt`) and writes `decomp/vpfs_dir_records.tsv`. The 15 files check out as PE32 or the VC80 manifest (`decomp/vpfs_extract_check.txt`). `language_setup.exe` is UPX. Extracted files stay out of the tree. The `tools/vpfs_*.py` probes other than `vpfs_extract.py` still search for zlib or import `Crypto`. Do not extend them.
- Call catalog of unnamed `FUN_` bodies: `decomp/largest_fun_calls_note.txt` through `note625.txt` (6,248 functions). Note 625 holds the last 8. An instruction mix is not a `Class::Method` name.
- Breakpad `{anonymous}` writers: `decomp/breakpad_writers_note.txt`. One `FUN_` entry stays unnamed: `0400939e`, the assert-only stub for the inlined constructor.
- Subsystem map: `decomp/subsystem_map_note.txt`. Buckets are library-call prefixes from `tools/subsystem_map.py`, not names.
- VPFS extracted files: `decomp/vpfs_files_note.txt`. The 15 files stay in `/tmp` and out of the tree.

Open:

- Assert queue empty; message/C-API harvest drained (waves 32–61). Remaining unique-string `FUN_` are leave-alones (breakpad/assert/unimplemented/STL/Present logger).
- Shared helpers: cursor workers; clipboard SDL→HGLOBAL sync; GetLongPathNameA log; SetForcedOpenGLDisplay pair; DrawPrimitive pipeline helper; VirtualFreeEx twin; GetSampleFunction_OpenGLCore shared log.
- Leave-alone closed: 8 same-method `d3d9device_*` wrappers; capture-devices stub; Present/params logger; FileSystem/Varyings/GetDlgItem; module_hex; ambiguous splits; breakpad stub.

The extracted `sr2_pc.exe` contains the 71 Windows paths. That does not add a Linux assert the checker can name. Leave `seeds/rejected/win_string_module_map.csv` unused.

## License

MIT — covers this project's own contributions (tooling, analysis, naming data). No game binaries or assets are committed; you need your own legal copy of Saints Row 2. Nothing was copied from the original KairiFey/OpenRow2 repo (it carries no license).
