# Wave 215 — per-function source sets + body-string verification: 22 names

Upgraded the matcher from whole-file joins to PER-FUNCTION parsed source sets
(v1.6.40 + v1.6.0 tags), then verified each candidate by requiring every seed
string of the function to physically appear in its decompiled body before
applying. 32 unique matches; 22 body-verified and applied; 10 held (strings are
pointer-referenced, not inline in the decompile — checker was right to hold).

Applied (all via gateway, read-back verified):

| addr | name |
|---|---|
| 042a6070 | png_set_tIME |
| 042aadf0 | png_image_memory_read |
| 042aafc0 | png_image_read_colormap |
| 042ac930 | png_read_row |
| 042aff30 | png_rtran_ok |
| 042affa0 | convert_gamma_value |
| 042b03a0 | png_set_alpha_mode_fixed |
| 042b1210 | png_set_rgb_to_gray_fixed |
| 042b1360 | png_set_rgb_to_gray |
| 042b1400 | png_init_read_transformations |
| 042b2360 | png_read_transform_info |
| 042ba6f0 | png_read_start_row |
| 042bbaa0 | png_set_PLTE |
| 042bbeb0 | png_set_text_2 |
| 042bc350 | png_set_tRNS |
| 042bde20 | write_unknown_chunks |
| 042be0e0 | png_write_info |
| 042be4e0 | png_write_end |
| 042c1ee0 | png_write_PLTE |
| 042c2310 | png_write_iCCP |
| 042c2ad0 | png_write_hIST |
| 042c3100 | png_write_pCAL |

Held (cross-ref only, strings not inline in body): 042b00a0, 042b01b0,
042bb180, 042bb3c0, 042bbcf0, 042bc2c0, 042bc690, 042bcc00, 042bf380,
042c33d0 — mostly the png_set_* family whose error strings are referenced via
pointer tables; those bodies need control-flow match against source instead.

## Ops

Scoreboard 4,937 → 4,959. Batch `tools/names_batch205.tsv` (batch = wave − 10).
Seeds synced (22 functions.csv rows, 57 string_refs rows). `vendor/gcc` cloned
(full mirror) for the future libstdc++ lane.

## Next

- The 10 held: verify by control-flow against v1.6.40 bodies (strings are
  referenced via pointer table but the function IS the source function —
  e.g. 042bc2c0 = png_set_tIME twin, 042bb180 = png_set_hIST, 042b00a0 =
  png_set_crc_action).
- libstdc++ lane: 'basic_string::substr', 'vector::_M_range_insert',
  'vector<bool>::_M_insert_aux' on unnamed functions (single-owner strings) —
  these are libstdc++ 4.x-era symbols; GCC clone on disk now (releases/* tags
  sparse — verify strings in gcc-4.x libstdc++ source).
