# Wave 255 — recovered source skeletons for the biggest TUs

Status: COMPLETE. Board: 5,197 / 9,221 (held — comments only, zero renames).

## What this wave did
Continuation of the Wave 254 source-recovery tier, driven by the machine map
`agent/w254_source_files.csv`.

1. **Emitted 20 recovered source skeletons** under `recovered/` mirroring the
   recovered build root (`recovered/eon2/src/...`), one per TU with >=10
   member functions. Each skeleton is a membership ledger (no fabricated
   code): every member listed with its Ghidra address, source-path evidence
   noted in the header.
2. **Attached unnamed helpers**: call-graph-exclusive tier — unnamed corpus
   bodies (from `agent/w233_bodies.jsonl`) whose named mentions are
   exclusively members of one skeleton TU. 25 attached across the 20 TUs.
   These remain unnamed in Ghidra (naming stays evidence-only per the
   wave-251 policy); attachment is recorded in the skeletons.
3. **Applied types/comments via MCP**: `set_comment` EOL comment
   `recovered source file: <path>` written at the Ghidra entry of all 447
   members + 25 attached helpers = **472/472 applied, 0 failures**, each
   persisted through the server's `DomainFile.save` path.

## Biggest TUs in the skeleton set
| TU | members | attached |
|---|---|---|
| d3d9/direct3ddevice9imp.cpp | 139 | 74 |
| d3d9/openGlDebugFunctions.cpp | 36 | 5 |
| win32/gdi32/gdi32.cpp | 27 | 1 |
| core/vpfs/vpfs.cpp | 26 | 12 |
| d3d9/direct3dsurface9imp.cpp | 26 | 1 |
| core/linux/opengl_objects.cpp | 19 | 2 |
| d3d9/direct3dbasetexture9imp.h | 18 | 0 |
| win32/kernel32/synchronisationPrimitives.cpp | 16 | 3 |
| thirdParty/tinyxml/tinyxml.cpp | 15 | 0 |
| d3d9/xaudio2_full/xaudio2voiceimpl.cpp | 14 | 6 |
| win32/kernel32/fs_files.cpp | 14 | 6 |
| win32/kernel32/mem_vm.cpp | 12 | 3 |
| win32/kernel32/windll.cpp | 12 | 0 |
| win32/ntdll/rtlbitmap.cpp | 12 | 0 |
| win32/kernel32/heapImplementation.cpp | 11 | 0 |
| core/vpfs/vpfsdb.cpp | 10 | 3 |
| d3d9/direct3dvolume9imp.cpp | 10 | 2 |
| d3d9/display.cpp | 10 | 0 |
| win32/winsock/winsock.cpp | 10 | 0 |
| thirdParty/tinyxml/tinyxmlparser.cpp | 10 | 0 |

## Notes
- Skeletons committed in `b620bfa` (`recovered/` tree + `tools/w255_skeletons.py`
  + `tools/w255_apply.sh`).
- MCP comment batch: 472/472 ok (`/tmp/w255_targets.tsv`, zero-fail run).
- No seed rows changed this wave (no renames).
