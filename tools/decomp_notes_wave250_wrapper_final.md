# Wave 250 — wrapper-pairing lane: relaxed tier sweep (final 2)

Reran graph-unique pairing with the header self-call bug fixed (decompile header name
was being counted as a callee — waves 248/249 were unaffected because their scan
filtered unnamed callees before the uniqueness test). Relaxed tier surfaced 30
unique-unique + 48 multi-wrapper callees; all 15 newly-read bodies hand-adjudicated.

## Applied (2)
- `0412bd80 -> thunk_VPFS_SetCurrentDirectory` (pure forwarder)
- `0401f7e0 -> thunk_OpenGLDebugMessageCallback` (clamp-arg + tail call — same class
  as waves 248/249 applied)

## Adjudicated holds (14 newly read)
Loops/predicates/state writes/multi-calls: `04010dd0` (env-applier + list counter),
`04139dd0` (dual global manager teardown), `040fae10` (getter-with-side-effect),
`04132930`, `0400e140` (full-read verifier), `04181fe0`, `04131a50`, `042a9870`,
`042aad00` (build-default-colormap loop), `042aaf20` (gamma blend), `042bf130`
(write-rows loop), `042bf190`, `042c1a20` (bkgd chunk writer), `042af7d0`
(read_data_fn setter). Multi-wrapper callees (`__cxa_atexit` ×25 — GCC TU-init thunks,
`__stack_chk_fail` ×18 etc.) cannot take unique names — structural, left unnamed.

## Status
Lane EXHAUSTED: 21 applied across waves 248–250, ~35 hand-read holds, multi-wrapper
tiers structurally unnameable. Remaining hand-read mass needs deep per-cluster work or
new pinned sources.
