# Wave 71 — LoadLibrary A/W/ExW + GetModuleHandleEx + time APIs

Scoreboard after apply: **2,872 / 9,221**.

## Renames (10)

### Modules
- `eON_LoadLibraryA` / `eON_LoadLibraryW` / `eON_LoadLibraryExW`
- `eON_GetModuleHandleExA` / `eON_GetModuleHandleExW` (prefix normalize)

### Time
- `eON_GetSystemTime` / `eON_GetLocalTime` (SYSTEMTIME fill via gmtime/localtime)
- `eON_GetSystemTimeAsFileTime` (null-checked FILETIME)
- `eON_FileTimeFromTimeval` / `eON_LocalFileTimeFromTimeval` (gettimeofday → FILETIME helpers)

Batch: `tools/names_batch62.tsv`
