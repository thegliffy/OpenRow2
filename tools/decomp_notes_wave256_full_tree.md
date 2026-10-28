# Wave 256 — recovered tree completed (full 132-TU coverage)

Status: COMPLETE. Board: 5,197 / 9,221 (held — comments only, zero renames).

## What this wave did
Extended the Wave 255 source-recovery tier from the >=10-member floor to the
full map in `agent/w254_source_files.csv` (`MINTU=1`).

1. **Regenerated all 132 recovered skeletons** under `recovered/eon2/src/...`
   (was 20 at the wave-255 floor) — 776 members total.
2. **Attach tier re-run at full scope**: 40 call-graph-exclusive unnamed
   helpers attached (was 25).
3. **MCP comment batch**: 344 new targets (816 total - 472 already applied in
   wave 255), **344/344 applied, 0 failures** via `set_comment` with
   `DomainFile.save`. Every one of the 816 members/attached helpers in the
   recovered tree now carries its `recovered source file: <path>` EOL comment
   in Ghidra.

## State after this wave
- `recovered/` = complete per-TU membership ledger: 132 files, 776 named
  members, 40 attached unnamed helpers, 816/816 Ghidra comments applied
  (472 wave 255 + 344 wave 256), zero failures across both batches.
- Naming unchanged (evidence-only policy holds); no seed rows touched.

## Remaining leads (from wave-255 menu)
- Runtime probe on skeleton anchors (gdb, wave-247 method) for
  runtime-exclusive membership.
- GLEW patch diff vs upstream 1.5.2 (documentation artifact).
