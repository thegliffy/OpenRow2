# Wave 116 — MapMode / Viewport / PenIndirect / fonts

Scoreboard: 3,099 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04125dd0 | eON_SetMapMode | map mode 1..16 |
| 041267d0 | eON_GetMapMode | read map mode |
| 04125d80 | eON_SetViewportOrgEx | DC origin shorts |
| 04126260 | eON_GetViewportExtEx | DC extent SIZE |
| 041263d0 | eON_CreatePenIndirect | OBJ_PEN from LOGPEN |
| 041261b0 | eON_GetDIBColorTable | RGBQUAD memcpy |
| 04125090 | eON_GetTextFaceA | Arial A stub |
| 041250c0 | eON_GetTextFaceW | Arial W stub |
| 04126850 | eON_AddFontResourceA | file→font |
| 04126c60 | eON_Gdi_EnsureInitialized | DC pool init |

## Next

SetViewportExtEx; WindowOrg/Ext; SelectPalette; StretchBlt.
