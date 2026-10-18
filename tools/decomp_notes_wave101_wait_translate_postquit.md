# Wave 101 — WaitMessage + TranslateMessage + PostQuitMessage

Scoreboard: 3,047 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04171490 | eON_WaitMessage | infinite wait with QS mask `0x4ff` |
| 041714e0 | eON_TranslateMessage | accepts WM_KEY* / WM_SYSKEY* |
| 041722f0 | eON_PostQuitMessage | posts `WM_QUIT` (0x12) to current thread |

## LEAVE

| Addr | Why |
|------|-----|
| 0416f970 / 0416f9b0 | thunks into already-named EnumDisplaySettings A/W |
| 041757b0 | BitBlt helper with `param_10==4` — StretchBlt uncertain |

## Next

GetMessagePos; GetMessage A/W if body-locked uniquely.
