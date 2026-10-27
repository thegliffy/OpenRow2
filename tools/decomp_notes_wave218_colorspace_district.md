# Wave 218 — png_colorspace/ICC statics district (12 names)

Queue empty; rebuilt the per-function matcher across BOTH v1.6.0 and v1.6.40,
joined against unnamed seed owners only (136 unnamed with seed strings).
10 unique matches + 1 two-way pair, both split by control flow.

| addr | name | evidence |
|---|---|---|
| 042a51e0 | png_set_sig_bytes | seeds all rendered in body |
| 042a6450 | png_icc_check_header | BE-parsed header vs 132-byte ICC_HEADER_LENGTH (`*0xc+0x84`), endian-swap branch, 'intent outside defined range' |
| 042a76e0 | png_colorspace_set_rgb_coefficients | seeds all rendered in body |
| 042a7ab0 | png_colorspace_check_gamma | seeds all rendered in body |
| 042a8a90 | png_colorspace_set_chromaticities | seeds all rendered in body |
| 042a8710 | png_colorspace_set_endpoints | seeds all rendered in body |
| 042a4e50 | png_colorspace_set_xy_and_XYZ | seeds all rendered in body |
| 042a80e0 | png_colorspace_set_gamma | calls 042a7ab0 (check_gamma, matched this wave); colorspace-flag write |
| 042a8190 | png_muldiv_warn | seeds all rendered in body |
| 042a8f60 | png_build_gamma_table | seeds all rendered in body |
| 042a7430 | png_ascii_from_fixed | integer digit loop; buffer-too-small string (shared pair → split by body) |
| 042a6e60 | png_ascii_from_fp | double/frexp/inf path — clearly the FP variant |

Pair split: 042a7430/042a6e60 both matched {ascii_from_fp, ascii_from_fixed};
042a6e60 has the float path (frexp, "inf") → fp; 042a7430 is integer → fixed.
Internal-consistency check: set_gamma→check_gamma edge closed within the wave ✓.

## Ops
Scoreboard 4,970 → 4,982. Batch `tools/names_batch208.tsv`. Seeds synced
(functions.csv 12 rows, string_refs.csv 33 rows, CRLF kept). Read-back 12/12.
