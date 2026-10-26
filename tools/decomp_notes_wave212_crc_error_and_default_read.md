# Wave 212 — png_crc_error + png_default_read_data: 2 names

Small closing wave for the libpng io/CRC path; both bodies line-by-line vs
v1.6.0:

| addr | name | lock |
|---|---|---|
| 042b66a0 | png_crc_error | pngrutil.c:247 — ancillary/critical flag gates (identical bit logic to png_calculate_crc), io_state write, `png_read_data(p, crc_bytes, 4)`, compare vs stored crc field (+0x19c), return mismatch |
| 042af740 | png_default_read_data | pngrio.c — fread via io_ptr (+0xbc), unique seed string "Read Error" on mismatch |

Write-side counterparts (`png_default_write_data`/`png_flush_data`) are not
linked into this binary ("Write Error" exists only in pngtest/contrib; "Flush
Error" is a later-version string) — the game reads PNGs only.

## Ops

2/2 read-back verified; scoreboard 4,927 → 4,929. Batch `tools/names_batch203.tsv`
(batch = wave − 9). Seeds synced (2 functions.csv rows, 1 string_refs row).

## Next

pngread.c simple-API + progressive reader bodies; pngerror's
png_formatted_warning/png_default_error pair; pngwutil deflate-claim side around
the already-named `png_compress_IDAT`/`png_write_compressed_data_out`.
