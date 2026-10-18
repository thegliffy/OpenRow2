# Wave 96 — user32 RECT helpers

Scoreboard: 3,018 / 9,221.

## Named (body-locked)

| Addr | Name | Lock |
|------|------|------|
| 04175440 | eON_CopyRect | copy 4 dwords |
| 04175480 | eON_EqualRect | LTRB equality |
| 041754d0 | eON_PtInRect | point-in-rect half-open |
| 04175500 | eON_SetRect | write LTRB |
| 04175530 | eON_SetRectEmpty | zero RECT |
| 04175560 | eON_OffsetRect | translate by dx,dy |
| 04175590 | eON_IsRectEmpty | left≥right or bottom≤top |
| 041755e0 | eON_InflateRect | expand/shrink by dx,dy |

## LEAVE

| Addr | Why |
|------|-----|
| 041755c0 / 041755d0 / 041756c0 | constant stubs (return 1/0) — not Intersect/Union |
| breakpad / STL unique sigs | policy leave |

## Next

Hunt IntersectRect/UnionRect; continue thin Win32 wrappers.
