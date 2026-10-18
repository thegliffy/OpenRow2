# Wave 74 — CreateFileMapping/MapView/Unmap + GetFileSize + directories + CancelIo

Scoreboard after apply: **2,897 / 9,221**.

## Renames (11)

- `eON_GetCurrentDirectoryA` / `eON_SetCurrentDirectoryA` / `W`
- `eON_CreateFileMappingA` / `W` (vpfs_CreateFileMappingA forwards)
- `eON_MapViewOfFileEx` (fs vs VPFS disk-handle route)
- `eON_UnmapViewOfFile` + `VMM_UnmapView` (page-align unmap)
- `eON_GetFileSize` / `Ex` (VPFS_GetSize)
- `eON_CancelIo` (VPFS_CancelIo)

Batch: `tools/names_batch65.tsv`
