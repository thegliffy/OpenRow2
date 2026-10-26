# Wave 211 — png.c/pngerror.c helper bodies: 4 names

Bodies matched line-by-line against v1.6.0 sources (no unique-string anchors;
these are the callees the wave 208–210 matches kept routing through):

| addr | name | lock |
|---|---|---|
| 042a52b0 | png_reset_crc | png.c:102 — `crc32(0, Z_NULL, 0)` written to struct crc field (+0x19c) |
| 042a52e0 | png_calculate_crc | png.c:114 — ancillary/critical flag gates (0x300==both bits critical test; ancillary 0x0008), single crc32 accumulate + store (uInt loop folds on 32-bit) |
| 042af7a0 | png_read_data | pngrio.c — `read_data_fn` guard + unique "Call to NULL read function" (twin of already-named png_write_data) |
| 042a9640 | png_format_number | pngerror.c static — the "0123456789ABCDEF" digits switch (dec/hex/width modes, writes backwards), png_formatted_warning path |

## Ops

4/4 read-back verified; scoreboard 4,923 → 4,927. Batch `tools/names_batch202.tsv`
(batch = wave − 9). Seeds synced (the four rows above).

## Next

pngio twins: `png_default_read_data` (the actual fread body behind read_data_fn)
and `png_default_flush_data`; `png_crc_error`/`png_crc_finish` are named —
`png_check_chunk` (the length/name dispatcher, pngrutil master design, v1.6.0
inline) may sit unnamed between the now-named handlers.
