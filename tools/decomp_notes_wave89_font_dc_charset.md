# Wave 89 — ReleaseDC + CreateFont A/W + font resource/enum + CharToOem

Scoreboard after apply: **2,985 / 9,221**.

## Renames (9)

- `eON_ReleaseDC` (`HDC_Release`)
- `eON_CreateFontIndirectA` / `eON_CreateFontA` / `eON_CreateFontW` (→`CreateFontIndirectW`)
- `eON_AddFontResourceW` (`AddFontResourceExW(path,0,0)`)
- `eON_EnumFontFamiliesW` (`eON_Int_EnumerateFontFamilies`)
- `eON_LoadBitmapA` (`eON_Int_LoadBitmap`)
- `eON_CharToOemBuffA` / `eON_CharToOemW` (CP_OEMCP=`1`)

LEAVE: GetDlgItem wrappers; SetWindowLong forwarder triples; ShowWindow/Is* window query cluster without unique locks.

Batch: `tools/names_batch80.tsv`
