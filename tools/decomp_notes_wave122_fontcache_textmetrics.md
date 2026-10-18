# Wave 122 — FontCache remove/get + TextMetrics + GDI object lists

Scoreboard: 3,131 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0411c100 | eON_FontCache_GetFontInMemory | GetFontInMemory wrapper |
| 0411b2c0 | FontCache::RemoveMemoryFont | erase mem font entry |
| 0411c2d0 | eON_RemoveFontMemResourceEx | API wrapper |
| 0411d870 | eON_Gdi_ReleaseObjectList | multi ReleaseObject |
| 0411db10 | eON_Gdi_AssignObjectList | copy + AddRef |
| 04120040 | eON_GetTextMetrics | Sfnt → TEXTMETRIC |

## Next

Ellipse; SelectPalette; StretchBlt; glyph outline.
