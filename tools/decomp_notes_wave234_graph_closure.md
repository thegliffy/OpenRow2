# Wave 234 — source-graph closure, forward direction (vendor pinned tags)

Lane: extend the wave-230 reverse-closure method to the FORWARD direction across all three
vendor clones at their pinned tags: a named (ledger) source function whose body contains exactly
one call to a parsed source function whose name is unused in the ledger, AND whose Ghidra body
contains exactly one call to an unnamed FUN_ slot → closure candidate. Every candidate
hand-read line-by-line against pinned-tag source; constants verified from pinned-tag headers
(`PNG_INTERLACE=0x0002`, `PNG_FLAG_APP_WARNINGS_WARN=0x200000`, `PNG_FLAG_APP_ERRORS_WARN=0x400000`
→ byte 0xd6 masks 0x20/0x40, `PNG_FILTER_HEURISTIC_UNWEIGHTED=1`).

## Applied (11, board 5179 -> 5190)
- `042a9df0` -> `png_app_error`      (flag-bit ladder; warn-bit vs error-bit agree with pngpriv.h)
- `042a9e20` -> `png_app_warning`    (sibling pair — same struct offset 0xd6, masks 0x20 vs 0x40)
- `042a61f0` -> `png_chunk_unknown_handling` (stack-built 4-byte chunk string → png_handle_as_unknown)
- `042a7550` -> `png_fixed`          (floor(100000*fp+.5), INT32 bounds via .rodata doubles, png_fixed_error)
- `042aa410` -> `png_free`           (NULL guards, free_fn@+0x2d4 indirect else png_free_default)
- `042c1b30` -> `png_free_buffer_list` (unlink loop calling png_free — cross-closes with row above)
- `042a75f0` -> `png_muldiv`         (divisor!=0, zero fast-path *res=0 return 1, FLOATING_ARITH branch)
- `042bd700` -> `png_reset_filter_heuristics` (num_prev_filters=0, heuristic_method=UNWEIGHTED=1, free arrays)
- `042bce50` -> `png_set_interlace_handling` (interlaced@+0x1b0, transformations|=PNG_INTERLACE, return 7/1)
- `042a5220` -> `png_sig_cmp`        (stack-built PNG signature 89 50 4E 47 0D 0A 1A 0A, clamp ladder, memcmp)
- `042c1940` -> `png_write_chunk_data` (guards, png_write_data + png_calculate_crc order preserved)

## Rejected (hand-read)
- `png_flush` @ `042c2230` — body is write_complete_chunk + flag|=0x10; source is indirect
  `output_flush_fn` call. No match.
- `png_set_gamma_fixed` @ `042b0050` — body is translate_gamma_flags shape (magic-value ladder);
  source fn starts with png_rtran_ok call. Also a REV-direction probe disagreed on target; REV
  check in this script used the wrong graph direction — fixed for wave 235.

Cross-validation bonus: png_free_buffer_list→png_free and free→free_default close each other;
the app_warn/app_error pair cross-validates struct offset + pinned constants.

Artifacts: `tools/w234_closure.py`, `/tmp/w234_hits.json`, `/tmp/w234_anchbodies.json`,
`agent/live_functions234.json`; seeds/functions.csv re-synced (11 rows).
