# Wave 106 — CreateRectRgn + SaveDC/RestoreDC + IsValidDC

Scoreboard: 3,063 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0411ccd0 | eON_CreateRectRgn | REGION type 8 + rect |
| 04124460 | eON_SaveDC | push state; bump level |
| 04124550 | eON_RestoreDC | pop by nSavedDC |
| 0411c840 | eON_Gdi_IsValidDC | pool index check |

## Next

CreateEllipticRgn / SelectClipRgn; GetTextColor getters.
