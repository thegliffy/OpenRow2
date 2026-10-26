# Wave 209 — libpng reader district completes: 11 matchers + 7 manual, 18 names

Wave 208's call-graph anchors (`png_crc_read`/`png_crc_finish`/`png_get_uint_31`
/`png_set_sPLT` + the pngerror cluster) made the remaining pngrutil district
readable. `callers` on the anchors pulled 18 unnamed focus functions — the rest
of the chunk-handler region.

## Method

Per-function literal sets from decompiles (`decomp/wave209_*.json`) matched
against v1.6.0 pngrutil.c per-function literals; strict matches require the
source-only excess to be debug strings only. Where a literal set spans multiple
source functions (shared literals), the DISTINCTIVE strings each resolve to
exactly one owner and lock the function.

## Applied (18)

| addr | name | lock |
|---|---|---|
| 042b6830 | png_cache_unknown_chunk | unique "unknown chunk exceeds memory limits" |
| 042b6b40 | png_handle_PLTE | "bKGD/hIST/tRNS must be after", "ignored in grayscale PNG" (all PLTE-only) |
| 042b6e30 | png_handle_gAMA | strict unique 3-set {invalid, missing IHDR, out of place} |
| 042b7150 | png_handle_cHRM | strict unique incl. "invalid values" |
| 042b73a0 | png_handle_sRGB | strict unique (rendering intent paths) |
| 042b74d0 | png_handle_iCCP | strict unique 9-literal set ("out of memory" owner) |
| 042b7b00 | png_handle_sPLT | 5 sPLT-only strings + calls named png_set_sPLT |
| 042b7de0 | png_handle_tRNS | strict unique ("invalid with alpha channel") |
| 042b8080 | png_handle_bKGD | strict unique ("invalid index" path) |
| 042b8750 | png_handle_pCAL | unique "unrecognized equation type" |
| 042b8ab0 | png_handle_sCAL | "bad width format"/"non-positive width" etc (sCAL-only) |
| 042b8d40 | png_handle_tIME | strict unique 3-set (7-byte length check) |
| 042b8e70 | png_handle_tEXt | unique "Insufficient memory to process text chunk" |
| 042b8ff0 | png_handle_zTXt | strict unique 7-set (png_decompress_chunk path) |
| 042b9200 | png_handle_iTXt | strict unique 7-set (compressed-iTXt path) |
| 042b94e0 | png_handle_unknown | "error in user chunk"/"forcing save of an unhandled chunk…" (pngrutil 2801–2940 region); 4-arg `(png_ptr, info_ptr, length, keep)`; calls png_cache_unknown_chunk |
| 042b96d0 | png_check_chunk_name | unique "invalid chunk type" |
| 042b9720 | png_read_chunk_header | line-by-line vs v1.6.0: read 8, png_get_uint_31, PNG_CHUNK_FROM_STRING, reset CRC + CRC over name, check_chunk_name; io_state writes 0x21→0x41 = PNG_IO_READING\|CHUNK_HDR→CHUNK_DATA |

Cross-checks: every caller edge to wave-208-named anchors lands on functions
this wave names (sPLT→png_set_sPLT, sCAL→png_set_sCAL_s, PLTE→png_get_uint_31);
the reader district (042b6000–042b9fff) is now fully named except zlib glue.

## Gates & ops

18/18 read-back verified post-apply. Batch `tools/names_batch200.tsv`
(batch = wave − 9). Seeds re-synced: 18 rows functions.csv, 91 string_refs.
Scoreboard 4,872 → 4,890 (53.0%).

## Next

pngrio side: `png_read_data`'s twin (the CRC accumulator FUN_042a5xxx pair) —
`png_calculate_crc`/`png_reset_crc`/`png_crc_error` sit in pngrutil's head in
v1.6.0 and should match the helpers FUN_042a52b0/FUN_042a52e0/FUN_042a6270 by
body; then IDAT row path (`png_decompress_chunk` → `png_process_data`) around
the already-named zstream_* placeholders.
