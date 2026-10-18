# Wave 121 — Rectangle + AddFontMem + FontCache

Scoreboard: 3,125 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0411ec10 | eON_Rectangle | pen edge + brush fill |
| 04126050 | eON_AddFontMemResourceEx | Win32 mem font API |
| 0411c1b0 | eON_FontCache_AddMemoryFont | buffer→FT face |
| 0411c370 | eON_FontCache_EnsureInitialized | singleton |
| 0411d820 | eON_Gdi_ReleaseObject | refcount delete |
| 0411c780 | eON_Font_GetCharIndex | FT_Get_Char_Index |

## Next

Ellipse/RoundRect; SelectPalette; StretchBlt; PatBlt.
