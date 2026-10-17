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

**2,255 / 9,221 functions carry a project name (24.5%).** A name is kept when that function references a matching assert signature, a single source file, or a D3D9 vtable slot locked by those signatures. Module prefixes name the file, not the function. Message-style strings do not replace a signature name.

| Wave | Method | Applied | New functions |
|---|---|---|---|
| 29 | XAudio2 GetVoiceDetails / GetOutputFilterParameters / SetSourceSampleRate (`decomp/xaudio_voice_details_note.txt`). Details copies 3 voice fields; GetOutputFilterParameters is the read twin of the named setter; SetSourceSampleRate writes the +0xc4 field GetSamplesNeeded reads. Return-0 stubs, constant-1 stub, and GLSL producers stay SKIP. | 3 | 3 |
| 28 | XAudio2 Start/Stop/Discontinuity (`decomp/xaudio_opcodes_7910_note.txt`). Opcodes 7/9/10 locked via jumptable wiring: Start (buffer-pending play flag), Discontinuity (zero SamplesPlayed), Stop (clear play flag + release; Flags bit 0x20 = XAUDIO2_PLAY_TAILS). 6 names. | 6 | 6 |
| 27 | XAudio2 FrequencyRatio pair (`decomp/xaudio_frequency_ratio_note.txt`). Opcode 8 locked without the rest of the private enum: float-clamp queue wrapper queues op 8 -> ExecuteOperation case 8 passes the float into the commit stub that stores voice+4; adjacent Get reads voice+4. 3 names: `SetFrequencyRatio`, `GetFrequencyRatio`, `Real_SetFrequencyRatio`. Other opcode-7/9/10 wrappers stay unnamed. | 3 | 3 |
| 26 | DirectInput class-prefix resolution (renames, not new names): per-class vtable anchors in `agent/vtables/dinputgamepad.tsv` pin the gamepad/keyboard/mouse runs to their concrete classes; shared slots claimed by multiple runs keep the base class. 27 renames `DirectInputDeviceImp::X` → `DirectInput{Gamepad,Keyboard,Mouse}DeviceImp::X`, applied through the PyGhidra MCP gateway. Evidence: `decomp/vtable_class_prefix_note.txt`. Seeds re-synced from the live project. | 27 | 0 (scoreboard corrected to 2,243) |
| 25 | Breakpad source match, completed (`decomp/breakpad_source_match_note4.txt`; 3 names, body-verified against the era-appropriate upstream revision 9f150ee33e99 where the constructor asserts sit at lines 0x8c/0x8d): `WriteMinidumpImpl` (blob-size test = `sizeof(CrashContext)`, the five copied words = si_addr/si_signo/tid), `WriteMinidump` (path,pid,blob,size — builds the dumper, owns two empty lists), `WriteMinidump` (path,mappings,appmem,dumper — takes the dumper as an arg, owns no lists). `0400939e` stays `FUN_`: it is the cold assert stub for the inlined constructor. | 3 | 3 |
| 24 | XAudio2 completion pass (14 bodies hand-read, `agent/wave24_decompiles.txt`). 2 names: `SubmitSampleBuffer` (pushes a 9-dword XAUDIO2_BUFFER into the buffer vector under the voice mutex — source-voice-only storage) and `GetState` (sums packet counts across the pending/queued/playing buffer vectors, ÷36 element math, fills the state struct). The `ExecuteOperation` opcode switch (`agent/wave24_executeop.txt`) pairs queued opcodes with commit stubs but the opcode→method enum is Volition-private, so the four queue wrappers (opcodes 7–10) and the trivial field getters stay unnamed. | 2 | 2 |
| 23 | XAudio2 hand-read (12 names): engine methods locked by assert-named constructors (`CreateMasteringVoice`/`CreateSourceVoice`/`CreateSubmixVoice` call the named ctors; `DestroyMasteringVoice` nulls the stored voice; `CommitChanges` drains the op queue through the named `ExecuteOperation`); voice Set/Get pairs locked by assert anchors (`SetVolume`/`GetVolume` on field +0x5c, `SetChannelVolumes`/`GetChannelVolumes`, `SetOutputMatrix`/`GetOutputMatrix` — documented pair adjacency, cross-checked against the vtable run at shift −9); `SetFilterParameters` carries its own upstream assert string; `QueueOperation` is the op-queue appender the setters call. The aligner's ≥3-anchor rule can't fire on this run (implementation vtable order ≠ documented IDL order; anchors sit at slots 1–6, needing a negative shift). | 12 | 12 |
| 22 | Hand-read decompiles: OpenGL context dump helpers (`agent/wave22_decompiles.txt`, 15 bodies). All SKIP under the rules — an instruction/call mix is not a name; none has a `Class::Method` assert. Evidence kept, no names. | 0 | 0 |
| 21 | Tinyxml source match, continued (`decomp/tinyxml_source_match_note3.txt`; 2 names, both source-match rows; checker holds them — the FindOrCreate signature belongs to the inlined callee) | 2 | 2 |
| 20 | Tinyxml source match, continued (`decomp/tinyxml_source_match_note2.txt`; 15 rows, 9 new names — 6 were module-prefix upgrades; assert-line matches verified against upstream) | 15 | 9 |
| 1 | Hand-read decompiles (zstream, tinyxml, shader PCH) | 10 | 10 |
| 2 | Source-path asserts → module prefixes | 721 | 721 |
| 3 | Assert signatures (VPFS district) | 22 | 0 (renames) |
| 4 | Binary-wide signature asserts | 462 | 2 |
| 5 | Message-style asserts | 103 | 103 |
| 6 | D3D9 vtable alignment (assert anchors, documented method order) | 102 | 15 |
| 7 | Short names qualified to `Class::Method` when that method is the only matching signature | 249 | 0 (renames) |
| 8 | Local-model loop (`llm_work.py`, checker-verified) | 25 | 25 |
| 9 | COM vtable alignment (DirectInputDevice8 runs, ≥3-anchor rule) | 119 | 53 |
| 10 | COM vtable alignment, parser fixed (IDL `[id(N)]` attrs, `IDirectSound3DBuffer` alias, `module_Method` anchors, ≥3-anchor rule enforced) | 102 | 49 (53 rows hit wave-9 names) |
| 19 | GLEW 2012-era sweep (glew-1.8.0 pinned specs; modern gl.xml misses extensions whose lists changed since; bodies verified) | 20 | 20 |
| 18 | GLEW extension-init sweep (all remaining exact gl.xml require-block matches; bodies verified by spot-check) | 62 | 62 |
| 17 | GLEW extension-init completion (string sets match gl.xml require blocks exactly; bodies load exactly those functions) | 8 | 8 |
| 16 | libpng source match (upstream pngread.c bodies) | 2 | 2 |
| 15 | Breakpad source match (upstream bodies; 4 assert-only stubs stay unnamed) | 2 | 2 |
| 14 | Tinyxml source match (upstream bodies verified against SourceForge tinyxml git master; inlined-assert collisions resolved by body) | 5 | 5 |
| 12 | GLEW loader identification: the extension-set init functions match GLEW's generated `_glewInit_*`/`glxewInit`/`glewInit` bodies (string sets match the Khronos registry per extension; verified against GLEW master) | 10 | 10 |
| 13 | Hand-read decompiles: GLEW extension sets completed (`_glewInit_GL_VERSION_1_4`, `_glewInit_GL_NV_half_float` — string sets match the Khronos registry exactly), enum-to-string decoders (`OpenGL_DataTypeToString`, `OpenGL_BufferToString`, `OpenGL_InternalFormatToString`, `D3D9_FormatToString`, `user32_MessageToString`), `OpenGL_LogState_CompressedTexture`, `eON_ShaderData::GenerateVaryingAssignments` | 9 | 9 |

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

The assert-signature naming queue is empty (`python3 tools/llm_work.py queue` prints `0 functions`). A new name still has to be a `Class::Method` that one function alone takes from an assert. The checker is the authority. Do not hand-edit `tools/names_batch*.tsv`, and do not invent a name from a call mix.

Closed, do not restart:

- Ambiguous splits. The 64 functions in `seeds/ambiguous_signatures.tsv` were checked. `seeds/split_confirmed.tsv` has no real boundary. A split needs a call or a data reference from outside the function. A jump inside the same function does not count.
- Windows `.rdata` paths. All 71 paths in `seeds/win_rdata_sourcepaths.txt` are absent from the Linux binary, filenames included (`decomp/win_rdata_match_note.txt`, `seeds/win_rdata_matches.tsv`). Leave `seeds/rejected/win_string_module_map.csv` unused.
- String-reference catalog of unnamed `FUN_` bodies: `decomp/largest_fun_strings_note.txt` through `note94.txt` (937 functions).
- D3D9 and COM slots that already have an anchor. Do not name an unanchored slot to fill a gap.

Closed, continued:

- VPFS decrypt and extract. `tools/vpfs_extract.py` follows the AES path (`decomp/vpfs_aes_plain.txt`) and writes `decomp/vpfs_dir_records.tsv`. The 15 files check out as PE32 or the VC80 manifest (`decomp/vpfs_extract_check.txt`). `language_setup.exe` is UPX. Extracted files stay out of the tree. The `tools/vpfs_*.py` probes other than `vpfs_extract.py` still search for zlib or import `Crypto`. Do not extend them.
- Call catalog of unnamed `FUN_` bodies: `decomp/largest_fun_calls_note.txt` through `note625.txt` (6,248 functions). Note 625 holds the last 8. Every `FUN_` in `seeds/functions.csv` now appears in a string note or a call note. An instruction mix is not a `Class::Method` name. Scoreboard stays 2,216 / 9,221 named (24.0%).
- Breakpad `{anonymous}` writers: `decomp/breakpad_writers_note.txt`. Five named by source match (wave 15, `decomp/breakpad_source_match_note.txt`; wave 25, `decomp/breakpad_source_match_note4.txt`). One `FUN_` entry stays unnamed: `0400939e`, the assert-only stub for the inlined constructor.
- Subsystem map: `decomp/subsystem_map_note.txt`. Buckets are library-call prefixes from `tools/subsystem_map.py`, not names.
- VPFS extracted files: `decomp/vpfs_files_note.txt`. The 15 files stay in `/tmp` and out of the tree.
- GLSL producers: `decomp/shader_glsl_note.txt`, continued from `decomp/identify_instruction_note.txt`. `FUN_04052100` and `FUN_0405ac10` stay unnamed.

The extracted `sr2_pc.exe` contains the 71 Windows paths. That does not add a Linux assert the checker can name. Leave `seeds/rejected/win_string_module_map.csv` unused.

## License

MIT — covers this project's own contributions (tooling, analysis, naming data). No game binaries or assets are committed; you need your own legal copy of Saints Row 2. Nothing was copied from the original KairiFey/OpenRow2 repo (it carries no license).
