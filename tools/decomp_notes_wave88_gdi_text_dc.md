# Wave 88 — GDI DeleteDC + ExtTextOutA + text-extent A/W/I

Scoreboard after apply: **2,976 / 9,221**.

## Renames (6)

- `eON_DeleteDC` (`HDC_FreeDC`)
- `eON_ExtTextOutA` (MultiByte→`ExtTextOutW`; unimplemented-options log)
- `eON_GetTextExtentExPointW` (wchar→glyph indices via FreeType, then `GetTextExtentExPointI`)
- `eON_GetTextExtentPoint32A` / `eON_GetTextExtentPoint32W` (thin ExPoint wrappers)
- `eON_GetTextExtentPointI` (thin `GetTextExtentExPointI`)

LEAVE: duplicate Point32 thins `04120d00`/`04120dc0`; return-0 GDI stubs.

Batch: `tools/names_batch79.tsv`
