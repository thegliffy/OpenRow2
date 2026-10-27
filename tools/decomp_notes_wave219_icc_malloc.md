# Wave 219 — ICC/cspace statics + malloc family (13 names)

Relaxed matcher (unique source-function containment; source-only excess allowed
since decompiler doesn't render pointer-table strings) over remaining unnamed
seed owners. All applied names were additionally body-verified or structure-
verified against vendor source line by line.

| addr | name | evidence |
|---|---|---|
| 042a67f0 | png_icc_check_tag_table | stride-12 tag loop at header+0x84; both report calls inline in body |
| 042a6970 | png_check_IHDR | both 'Unknown * method in IHDR' strings in body |
| 042a7b90 | png_colorspace_set_sRGB | 'cHRM chunk does not match sRGB' in body |
| 042a7d60 | png_compare_ICC_profile_with_sRGB | 'out-of-date sRGB profile' in body (v1.6.40 string) |
| 042a6270 | png_zstream_error | 'unsupported zlib version','zlib IO error' in body — v1.6.40 wave-214 dead-end partially REVERSED: this fn does match png.c source |
| 042aa150 | png_malloc_array | 'internal error: array alloc' in body; guard shape ✓ source |
| 042aa1c0 | png_realloc_array | 'internal error: array realloc' in body; guard shape ✓ source |
| 042aa2c0 | png_malloc | 'Out of memory' + null→png_error path ✓ (vs warn variant) |
| 042aa3a0 | png_malloc_warn | 'Out of memory' + null→png_warning path ✓ |
| 042aa350 | png_malloc_default | 'Out of Memory' (capital M = malloc_default per source comment) + passes NULL to base ✓ |
| 042a4fe0 | png_icc_profile_error | "profile '" + name + "': " build; 196-byte message buffer = sizeof message; colorspace flag |
| 042a4fb0 | is_ICC_signature_char | char ranges 32 / 48-57 / 65-90 / 97-122 exactly ✓ |

Held: 042a95f0 — body is verbatim `png_safecat` source (4-arg bounds-checked
copy loop), but `042a9510` already carries that name from the original checker
lane and is the callee of the decompiled `png_benign_error`/`png_chunk_error`
call sites. Two candidates, one name — 042a9510's body (digits + bracket-hex
formatter) fits `png_format_number`-ish formatting instead. Flagged for
checker-lane review; 042a95f0 left unnamed.

## Ops
Scoreboard 4,982 → 4,994 (12 applied). Batch `tools/names_batch209.tsv` (batch = wave − 10).
Seeds synced (functions.csv 12, string_refs.csv 40). Read-back 12/12.
