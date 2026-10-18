# Wave 73 — GetACP/OEMCP/CPInfo + CompareStringW + overlapped/file-mapping sync

Scoreboard after apply: **2,886 / 9,221**.

## Renames (8)

- `eON_GetACP` / `eON_GetOEMCP` (both return 1250 / 0x4e2 in this build)
- `eON_GetCPInfo` / `eON_CompareStringW` (prefix normalize)
- `Synchronisation_SetOverlappedEvent` / `ResetOverlappedEvent` (type==1; used by fs_Read/WriteFileEx)
- `eON_OpenFileMappingA` + `Synchronisation_OpenNamedObject` (OpenObjectByName under lock)

Batch: `tools/names_batch64.tsv`
