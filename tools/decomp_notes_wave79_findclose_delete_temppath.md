# Wave 79 — FindClose + DeleteFile A/W + GetTempPath A/W

Scoreboard after apply: **2,924 / 9,221**.

## Renames (6)

- `eON_FindClose` (type-7 find DIR*) / `eON_FindCloseFindHandle` (heap find block)
- `eON_DeleteFileA` / `eON_DeleteFileW`
- `eON_GetTempPathA` / `eON_GetTempPathW`

LEAVE: remaining DeleteFileA body twins (`0412c770`, `041336d0`, …).

Batch: `tools/names_batch70.tsv`
