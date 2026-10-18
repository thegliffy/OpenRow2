# Wave 75 — MapViewOfFile + GetFileAttributesA + SetFilePointer + GetFileType

Scoreboard after apply: **2,901 / 9,221**.

## Renames (4)

- `eON_MapViewOfFile` (MapViewOfFileEx with base=0)
- `eON_GetFileAttributesA`
- `eON_SetFilePointer` (fs vs VPFS_Seek/Tell)
- `eON_GetFileType` (type 3→FILE_TYPE_PIPE else DISK)

LEAVE: `FUN_0412e3d0` twin of `eON_MapViewOfFileEx`.

Batch: `tools/names_batch66.tsv`
