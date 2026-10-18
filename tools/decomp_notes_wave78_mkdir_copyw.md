# Wave 78 — CreateDirectory A/W + CopyFileW

Scoreboard after apply: **2,918 / 9,221**.

## Renames (3)

- `eON_CreateDirectoryA` / `eON_CreateDirectoryW` (VPFS_CreateFolder)
- `eON_CopyFileW` (Wide→A then `eON_CopyFileA`)

LEAVE: multiple shared `VPFS_Delete` twins (DeleteFileA/W candidates).

Batch: `tools/names_batch69.tsv`
