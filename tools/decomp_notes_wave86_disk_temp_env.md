# Wave 86 — DiskFree/TempFile A twins + env/volume/VPFS crumbs

Scoreboard after apply: **2,963 / 9,221**.

## Renames (8)

- `eON_GetDiskFreeSpaceA` / `eON_GetDiskFreeSpaceExA` (MultiByte→W)
- `eON_GetTempFileNameA` (MultiByte→`GetTempFileNameW`)
- `eON_GetEnvironmentStringsW` (environ block → wide)
- `eON_GetVolumeInformationA` (fills `eONVolume` / `0xdeadbeef`; WideChar round-trip)
- `eON_GetDriveTypeW` (wide strcmp twin of `eON_GetDriveTypeA`)
- `eON_GetSystemDirectoryW` (writes `C:\Windows\System32`)
- `VPFS_GetFirstSubelement` (unique invalid-handle message)

LEAVE: three identical `GetWindowsDirectoryW`-shaped stubs (`041358e0`/`04135a40`/`04135ae0`); `04046c50` prep wrapper that calls already-named `VPFS_ConvertDiskFileToWriteableLocation`.

Batch: `tools/names_batch77.tsv`
