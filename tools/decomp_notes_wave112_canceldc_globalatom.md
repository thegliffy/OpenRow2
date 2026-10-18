# Wave 112 — CancelDC + GlobalGetAtomNameA

Scoreboard: 3,082 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0411e5f0 | eON_CancelDC | abort-proc callback |
| 04129c00 | eON_GlobalGetAtomNameA | forwards to GetAtomNameA |

## LEAVE

| Addr | Why |
|------|-----|
| 04129b10 / 04129d80 | identical GlobalDeleteAtom twins |

## Next

GlobalFindAtom / GlobalDeleteAtom if uniqueness appears; SetAbortProc.
