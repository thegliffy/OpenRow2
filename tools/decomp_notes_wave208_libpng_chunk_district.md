# Wave 208 — libpng reader district source match: IHDR/IEND/sBIT/hIST/pHYs/oFFs + error cluster, 21 names

`llm_work.py queue` was empty; `agent/done.tsv` audit found zero re-propose
candidates (all 61 proposal files are empty — those were declines, not
checker holds). Hand-read layer day.

The pngrutil clone-looking clusters resolved as DISTINCT chunk handlers, not
clones: each binary function passes its own literals to the shared
error/warning wrappers, which is exactly the libpng 1.6.0 design (verified
against `vendor/libpng` tag v1.6.0 — the only era whose pngrutil.c carries the
lowercase `missing IHDR`/`out of place`/`duplicate`/`invalid` per-handler
literals this binary has).

## Method

Per-function literal sets from saved decompiles (kept in
`decomp/wave208_*.json`) matched against per-function literal sets parsed from
v1.6.0 sources; single-ref strings gate the five string-anchored names; the
ambiguous pairs resolve by body structure against the source.

## Applied (21)

Handlers (control-flow matched to v1.6.0 pngrutil.c):
| addr | name | lock |
|---|---|---|
| 042b6960 | png_handle_IHDR | 13-byte chunk; row-bits math; calls png_set_IHDR 9-arg |
| 042b6db0 | png_handle_IEND | requires IHDR+IDAT mode bits; length==0; benign "invalid" otherwise |
| 042b6f30 | png_handle_sBIT | read_sBIT table via +0x1b4/0x1b7; sig_bit assembly; valid bit 0x02 = PNG_INFO_sBIT (png.h v1.6.0) |
| 042b82c0 | png_handle_hIST | 2-byte pairs == num_palette (+0x1a4), 256-entry local; valid bit 0x40 = PNG_INFO_hIST |
| 042b8430 | png_handle_pHYs | 9 bytes unsigned → png_set_pHYs |
| 042b8590 | png_handle_oFFs | 9 bytes with sign-extension (png_get_s32) → png_set_oFFs |

pngset.c setters (unique-string or call-graph locked):
| addr | name | lock |
|---|---|---|
| 042bb6c0 | png_set_sCAL_s | unique "Invalid sCAL unit"; strlen/'-' checks = png_check_fp_number path |
| 042bb880 | png_set_sCAL | double args (sibling shares the width/height warning pair — body decides) |
| 042bb990 | png_set_sCAL_fixed | fixed (int) args |
| 042bba60 | png_set_pHYs | called by png_handle_pHYs; writes valid bit 0x80 = PNG_INFO_pHYs |
| 042bb380 | png_set_oFFs | called by png_handle_oFFs; writes valid bit 0x100 = PNG_INFO_oFFs |
| 042bfdc0 | png_set_compression_window_bits | writes zlib_window_bits (0x128, main group) |
| 042bfec0 | png_set_text_compression_window_bits | writes zlib_text_window_bits (0x13c, text group) — group order from png_deflate_claim twin |

pngrutil/io helpers:
| addr | name | lock |
|---|---|---|
| 042b6350 | png_get_uint_31 | unique "PNG unsigned integer out of range" |
| 042b6500 | png_crc_read | the handlers' 3-arg read helper (matched twin at v1.6.0) |
| 042b6760 | png_crc_finish | 1024-byte skip loop + unique "CRC error" |

pngerror.c cluster (the read-aid the reference asked for):
| addr | name | lock |
|---|---|---|
| 042a9510 | png_safecat | [XX] hex-escape for non-printables (0x5b/0x5d), printable passthrough |
| 042a97a0 | png_warning | unique "libpng warning: %s" |
| 042a9a30 | png_benign_error | formats via safecat → warning; matches v1.6.0 body |
| 042a9b50 | png_longjmp | longjmp_fn(+0x9c)/(jmp_buf,+0xa0) mechanism; abort fallback |
| 042a9b90 | png_error | unique "libpng error: %s"; error_fn callback; → png_longjmp(p,1) |
| 042a9d70 | png_chunk_error | formats chunk-name context via png_safecat → png_error |
| 042a9dc0 | png_chunk_benign_error | BENIGN_ERRORS_WARN flag → benign/warning path else chunk_error |

## Gates & ops

Unique-string rows: string_refs.csv ownership verified (5 singles above).
Pairs: no exact-set match; decided by body structure against v1.6.0 source,
triangulated by PNG_INFO_* constants and struct group offsets. Batch:
`tools/names_batch199.tsv` (batch = wave − 9), applied through the MCP gateway
(single writer) 2026-10-26, every name verified by read-back. Seeds
re-synced from live: 21 rows in functions.csv, 37 in string_refs.csv.
Scoreboard 4,851 → 4,872.

`vendor/libpng` clone added (uncommitted per AGENTS.md — vendor/ is not
committed; tag v1.6.0 checked out for reference).
