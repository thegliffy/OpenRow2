# Wave 235 — closure iteration #1 (parser extended to PNG_FUNCTION macro defs; REV direction fixed)

Extended the source parser with the `PNG_FUNCTION(ret, name,(args), ATTR)` macro form (~22 defs
across the pinned tag) and fixed the REV direction (candidate = unique unused-name source CALLER
of a named anchor; binary: anchor's callers == exactly one unnamed). 7 gated hits, all hand-read.

## Applied (5, board 5190 -> 5195)
- `042a6160` -> `png_handle_as_unknown` — 2 independent gates (chunk_unknown_handling, and via its
  own body vs source: guard, `num_chunk_list*5`, `memcmp(...,4)`, `p[4]` ladder) — verbatim.
- `042aa300` -> `png_calloc` — body == source verbatim: `png_malloc(); if (ret) memset(); return;`
  (calls ledger-named png_malloc). Gate noise (check_location) rejected; name from body read.
- `042aa110` -> `png_malloc_base` — body: guard + `malloc_fn`@+0x2d0 indirect + raw `malloc`
  (dead `size <= PNG_SIZE_MAX` on i386). 14 callers incl. ledger-named png_malloc/png_malloc_warn/
  png_malloc_default/png_realloc_array — all call malloc_base in pinned source ✓. The
  `png_malloc_array_checked` gate-claim rejected (no divide in body — checked was inlined).
- `042aa3f0` -> `png_free_default` — body == source verbatim (De Morgan guard + `free()`);
  sole caller is wave-234's `png_free` — cross-lane cross-check ✓.
- `042a9ce0` -> `png_fixed_error` — stack-built literal assembles "fixed point overflow in " +
  name, calls ledger-named `png_error` (noreturn). Two-anchor consensus (convert_gamma_value,
  png_fixed) ✓.

## Rejected on body read (this iteration)
- `check_location` and `png_inflate_claim` gate-hits (bodies are allocators, resolved above).
- Prior-wave holds stand: `png_flush` @ 042c2230, `png_set_gamma_fixed` @ 042b0050.

Artifacts: `tools/w235_closure.py`, `/tmp/w235_hits.json`, `/tmp/w235_bodies.json`,
`agent/live_functions235.json`; seeds/functions.csv re-synced (5 rows). Next: wave 236 re-runs
to fixed point (new anchors can open new gates; until zero new hits).
