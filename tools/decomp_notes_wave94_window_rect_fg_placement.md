# Wave 94 — window rect / FG / placement / ScreenClient

Scoreboard after renames: see README.

## Named (body-locked)

| Addr | Name | Lock |
|------|------|------|
| 04182a40 | eON_GetDesktopWindow | returns const `0x271a` desktop HWND sentinel |
| 041818e0 | eON_GetWindowRect | LTRB from HWND+0x14..0x20 or desktop work area |
| 041819b0 | eON_GetClientRect | client origin 0,0 + size from HWND edges / desktop |
| 04182c80 | eON_SetForegroundWindow | writes `DAT_0451c0d8`; SendMessageA desktop/broadcast crumbs |
| 04182db0 | eON_GetForegroundWindow | returns `DAT_0451c0d8` |
| 04183700 | eON_ScreenToClient | `POINT -=` HWND+4/+8 |
| 04183790 | eON_ClientToScreen | `POINT +=` HWND+4/+8 |
| 04183e00 | eON_GetWindowPlacement | desktop-only WINDOWPLACEMENT fill via work area |
| 04187210 | eON_GetWindowInfo | `cbSize==0x3c` WINDOWINFO fill |

## LEAVE

| Addr | Why |
|------|-----|
| 04181fe0 | HWND guard + vtable +0x8c only — IsIconic-like, not unique enough |
| 04182dc0 | clears FG + SendMessageA(0) — not a clear Win32 API twin |
| 04183500 / 04183600 | identical HWND→FUN_04180890 twins |
| 04183f90 | thread-affinity gate + vtable +0xb0 — DestroyWindow/EnableWindow-ish, slot unknown |

## Next

Continue user32/GDI thin wrappers; avoid shared HWND-guard twins and unknown vtable slots.
