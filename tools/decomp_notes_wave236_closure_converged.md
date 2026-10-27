# Wave 236 — closure iteration #2 (fixed point reached; lane closed)

Re-ran the wave-235 closure over the updated ledger. 3 gated hits, 0 applied:
- `png_malloc_array_checked` claimed via anchors png_malloc_array + png_realloc_array — candidate
  slot `042aa110` is wave-235's `png_malloc_base` (body has no divide; source `checked` guards on
  `req <= PNG_SIZE_MAX/element_size`). `checked` was inlined at compile time — stays unnamed.
- `png_write_chunk` claimed via anchor write_unknown_chunks → `042c1af0`: body is a stack-shuffle
  stub tail-calling png_write_complete_chunk; source png_write_chunk calls header+data+end.
  Cannot be proven from the body alone — left unnamed per the no-invention rule.

Closure lane (both directions, all three pinned vendor clones, macro-def parsing) has converged:
zero renames this iteration. Remaining single-feature seed groups re-audited against the current
ledger — no new single-unnamed-target groups.
