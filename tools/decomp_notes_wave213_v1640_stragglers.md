# Wave 213 — v1.6.40-anchored stragglers: 8 names

The game links a libpng newer than v1.6.0 (strings like
`info change after png_start_read_image or png_read_update_info` and
`length exceeds PNG maximum` exist only in later 1.6.x) — those two exact-match
seed-unique strings named their owners directly. The compression-setter pairs
were resolved by struct field offsets: pngstruct.h orders `zlib_method` before
`zlib_window_bits` and `zlib_text_method`/`zlib_text_window_bits` after the
regular block — binary writes +0x124/+0x128 (regular) vs +0x138/+0x13c (text),
and the gap fields (+0x12c mem, +0x130 strategy, +0x134 text_level) line up
with the already-named `png_deflate_claim` body's reads. The image pair split
on `channels = (format & COLOR) ? 3 : 1` computed right after the interlace
switch = png_image_read_composite (042adcc0); sibling = png_image_read_and_map
(042ae210).

| addr | name | lock |
|---|---|---|
| 042adcc0 | png_image_read_composite | channels-from-format computation after interlace switch (pngread.c 1.6.40) |
| 042ae210 | png_image_read_and_map | sibling of above (only two functions print "unknown interlace type") |
| 042bd650 | png_set_user_transform_info | exact unique string (pngtrans.c, v1.6.40-only) |
| 042c1a80 | png_write_complete_chunk | exact unique string 'length exceeds PNG maximum' (pngwutil.c, v1.6.40-only) |
| 042bfdc0 | png_set_compression_window_bits | writes zlib_window_bits (+0x128) |
| 042bfec0 | png_set_text_compression_window_bits | writes zlib_text_window_bits (+0x13c) |
| 042bfe20 | png_set_compression_method | writes zlib_method (+0x124) |
| 042bff20 | png_set_text_compression_method | writes zlib_text_method (+0x138) |

## Ops

8/8 read-back verified; scoreboard 4,929 → 4,937. Batch `tools/names_batch204.tsv`
(batch = wave − 9). Seeds synced (8 functions.csv rows, 10 string_refs rows).

## Next

- The libpng district is now dry for both v1.6.0 and v1.6.40 matcher passes (0
  unique matches left). Remaining unnamable = no-literal functions needing
  call-graph entry points.
- New district idea: zlib itself (deflate/inflate literals like
  "compression window... " are consumed; look for inflate table-building bodies
  / CRC strings), or the engine's PNG wrapper calling png_image_*/png_read_* —
  the wrapper layer may name via its own unique assert strings in seeds.
