# Wave 210 — pngwriter side + simple-API reader: 33 names

Follow-on from waves 208–209: swept every unnamed function in the libpng-linked
district whose seed literals match a v1.6.0 source function uniquely (binary
literals ⊆ source function's literals; source-only excess must be debug strings
only). 34 candidates; 33 applied — `042a9640` (png_format_number candidate)
held: its only seed string is shared, no unique anchor.

## Gate

Seed-uniqueness recomputed per entry: every listed literal must map to exactly
one function in string_refs.csv, or at least one uniquely-owned literal must
anchor an otherwise-unique source match (the wave 208/209 tier).

## Applied (33)

pngerror.c: png_set_longjmp_fn, png_set_strip_error_numbers
pngset.c: png_create_colormap_entry, decode_gamma, png_set_cHRM, png_set_cHRM_XYZ, png_set_text, png_set_unknown_chunk_location
pngread.c: png_read_info, png_read_end, png_image_read_background, png_image_read_colormapped
pngrutil/pngrio: png_read_buffer, png_read_sig, png_combine_row, png_init_filter_heuristics
pngwrite.c: png_write_info_before_PLTE, png_text_compress, png_write_compressed_data_out, png_write_IHDR, png_compress_IDAT, png_write_sRGB, png_write_sPLT, png_write_sBIT, png_write_tRNS, png_write_bKGD, png_write_tEXt, png_write_zTXt, png_write_iTXt, png_write_oFFs, png_write_pHYs, png_write_tIME, png_write_data

(Per-file attribution from the v1.6.0 grep; several write_* land through unique
format-string literals like the chunk-name CAT macros.)

## Ops

33/33 read-back verified. Batch `tools/names_batch201.tsv` (batch = wave − 9).
Seeds re-synced: 33 rows functions.csv, 81 string_refs. Scoreboard
4,890 → 4,923 (53.4%).

## Next

`042a9640` needs body-read vs v1.6.0 `png_format_number` (shared literal —
check the [XX] consumer chain). The pngwutil deflate side (`png_deflate_claim`,
`png_compress_IDAT` caller) and pngio.c (`png_default_read_data`,
`png_default_flush_data`) remain; the writer district's big blobs
(`png_write_info` body, `png_write_IDAT`) should anchor via CAT-macro
format strings on the remaining multi-literal candidates.
