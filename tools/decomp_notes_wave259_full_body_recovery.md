# Wave 259 — body recovery completed for the full recovered tree

Status: COMPLETE. Board: 5,197 / 9,221 (held — zero renames).

## What this wave did
Extended wave 258's body-recovery pipeline (`tools/w258_bodies.py HOT=ALL`)
from the 8 hot TUs to **all 132 recovered source files**:

- **776/776 named members** now carry their live Ghidra decompile bodies
  (zero decompile failures across the tree; cache `/tmp/w258_bodies.json`).
- **40 call-graph-attached helpers** carry corpus bodies (wave-233
  checkpoint decompiles).
- Seed-spelling members resolved via seed address (string_refs), since the
  board spells several of them differently (checker-lane names live as
  FUN_ pending entries — renames still governed by the evidence-only
  policy; nothing renamed here).

`recovered/eon2/src/...` is now a complete per-TU body ledger: source path
→ every function that references it → actual decompiled body.

## Side result (GLEW, closing wave 258's loose end)
Git-date audit of the 12 missing-vs-1.5.0-registry entries: 9 are
GL/GLX core-VERSION strings (never emitted by the game's GLEW at all —
confirmed patched fork) and 3 are the NV_*_program4 extensions added
upstream 2006-11-21, after the game's 2006-10-24 ship. Generation-input
snapshot therefore predates 2006-11-21; base is 1.3.x-era (1.3.1 is the
only fully-testable fit — mirror has no 1.3.x tags, dead tarballs).

## Artifacts
- `recovered/` — 132 files, complete bodies.
- `tools/w258_bodies.py` — accepts HOT=ALL.
- Wave 258 note updated (era-fit conclusion corrected).
