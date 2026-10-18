# Wave 95 — GetDlgItem / GetWindowTextA / GetClassNameA / EnableWindow / MoveWindow / GetWindowThreadProcessId

Scoreboard: 3,010 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04182ad0 | eON_GetDlgItem | assert `eON_GetDlgItem() didn't find control...` |
| 041821d0 | eON_GetWindowTextA | HWND+0x50 ANSI copy |
| 04183bb0 | eON_GetClassNameA | atom HWND+0x3c → class name |
| 04182430 | eON_EnableWindow | WS_DISABLED-style bit + vtable+0x90 |
| 04186b10 | eON_MoveWindow | validates HWND → SetWindowPos(x,y,cx,cy) |
| 041829b0 | eON_GetWindowThreadProcessId | tid at +0x38; optional pid |

## LEAVE

| Addr | Why |
|------|-----|
| 04184d50–04184e40 | four identical SetClassLongPtrA stub twins |
| 04183060 / 04183140 | SendMessage A/W crumbs only — not unique PostMessage lock |
| 04182050 / 04182110 | 2-arg SendMessage bool wrappers — uncertain |
| 041812e0 / 04184670 / 04183820 | vtable-only Destroy/Show/Update — slot unknown |
| GetDlgItem *callers* (838e0, 83a40, …) | share GetDlgItem assert via call — do not invent |

## Next

Continue user32 thin wrappers with unique body/assert locks.
