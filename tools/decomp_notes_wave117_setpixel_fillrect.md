# Wave 117 — SetViewportExtEx / SetPixel / FillRect / TextOutA

Scoreboard: 3,105 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 041220f0 | eON_SetViewportExtEx | DC extents |
| 04122140 | eON_SetPixel | MEMDC pixel write |
| 041230d0 | eON_Gdi_Init | pool init once |
| 04122dc0 | eON_Gdi_InitDC | DC slot reset |
| 04123b40 | eON_FillRect | RECT + brush fill |
| 04121fc0 | eON_TextOutA | ExtTextOutA gate |

## Next

TextOutW; StretchBlt; PatBlt; WindowOrg/Ext; SelectPalette.
