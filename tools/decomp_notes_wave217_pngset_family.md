# Wave 217 — held png_set_* family resolved by body match (+1 name correction)

All 10 Wave-215 holds closed by direct body-vs-source match (vendor/libpng
v1.6.0 + v1.6.40), plus one bonus lock and one correction.

| addr | name | evidence |
|---|---|---|
| 042b00a0 | png_set_crc_action | pngrtran.c:51 string; two-switch action store to +0xd4 |
| 042b01b0 | png_set_background_fixed | calls png_rtran_ok (named); null-background warning guard; double fields +0x1c0..0x1cc; flag 0x40080 |
| 042bb180 | png_set_hIST | num_palette gate <0x100; 0x200 alloc (256×2); PNG_INFO_hIST 0x40 at info+8 ✓ wave-208 constants |
| 042bb3c0 | png_set_pCAL | inline: 'Invalid pCAL equation type','Invalid pCAL parameter count' ✓ pngset.c |
| 042bbcf0 | png_set_iCCP | inline: 'Invalid iCCP compression method' ✓ pngset.c |
| 042bc2c0 | png_set_tIME | png_set_tIME exactly: null guards + PNG_WROTE_tIME gate + month/day/hour/min/sec ranges + valid\|=0x200 |
| 042bc690 | png_set_unknown_chunks | realloc_array stride 0x14 (png_unknown_chunk=20B); count/capacity +0xec/+0xf0; 'too many unknown chunks' via pointer |
| 042bcc00 | png_set_compression_buffer_size | inline: 'invalid compression buffer size'; decrease gate vs +0x11c |
| 042bf380 | png_set_filter | inline: 'Unknown custom filter method','Unknown row filter for method 0'; filter-bit switch → +0x1b2 |
| 042c33d0 | png_write_sCAL_s | "Can't write sCAL (buffer too small)"; strlen(w)+strlen(h)+2 ≤ 0x40 → png_write_complete_chunk ✓ |
| 042a5e30 | png_convert_to_rfc1123_buffer | v1.6.40-only ranges; month-name table DAT_0439991c+idx*4; 29-byte buffer; calls png_format_number ✓ |

**Correction:** `042a6070` was applied as `png_set_tIME` in Wave 215 via the
seed-uniqueness join. Body shows it is `png_convert_to_rfc1123` (the deprecated
wrapper: returns `png_ptr->time_buffer` +0x285, calls
`png_convert_to_rfc1123_buffer`, warns 'Ignoring invalid time value' — string
belongs to png.c, not pngset.c ✓). The real `png_set_tIME` is `042bc2c0`
(row above). Scoreboard net: +11 (4,959 → 4,970).

## Ops
Batch `tools/names_batch207.tsv` (batch = wave − 10). Seeds synced via raw-line
patch (functions.csv 12 rows, string_refs.csv 28 name-column rows, CRLF kept).
Read-back 12/12.
