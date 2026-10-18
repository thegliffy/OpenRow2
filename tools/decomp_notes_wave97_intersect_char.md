# Wave 97 — IntersectRect + CharUpper/Lower + IsCharAlpha

Scoreboard: 3,030 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04175610 | eON_IntersectRect | max/min edge intersection |
| 0417eca0 | eON_CharUpperA | toupper string/char |
| 0417ed30 | eON_CharUpperW | wide toupper |
| 0417ee70 | eON_CharLowerA | tolower string/char |
| 0417ef00 | eON_CharLowerW | wide tolower |
| 0417eda0 | eON_CharUpperBuffA | toupper buff n |
| 0417ee10 | eON_CharUpperBuffW | wide upper buff |
| 0417ef70 | eON_CharLowerBuffA | tolower buff n |
| 0417efe0 | eON_CharLowerBuffW | wide lower buff |
| 0417f040 | eON_IsCharAlphaA | ctype alpha bits |
| 0417f0a0 | eON_IsCharAlphaW | iswalpha |
| 0417f100 | eON_IsCharLowerW | iswlower |

## LEAVE

| Addr | Why |
|------|-----|
| 0417ec30 | strcpy (src,dst) returns 1 — not standard lstrcpy return |
| 0417f070 / 0417f0d0 | ctype bit masks — IsCharUpper/LowerA ambiguous without table |
| UnionRect | not found adjacent |

## Next

IsCharUpperW/LowerA if locked; cursor/focus/capture wrappers.
