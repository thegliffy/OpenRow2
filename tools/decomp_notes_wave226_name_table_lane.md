# Wave 226 — kernel32-emulation name-table lane (+12)

Lane opened off the Wave 225 loose end: the bare `SetFileAttributesA`/`DeleteFileA`/
`SetFileAttributesW`/`DeleteFileW` strings in the 0x04331b00 pool are not assert
messages — they are the **name pool of the game's own Win32-API emulation layer**,
referenced only through a `{name_ptr, fn_ptr, 0}` dispatch table (12-byte stride,
at file-grid vaddr 0x0432f0a4, 37 contiguous entries; multiple parallel copies of
the table exist at 0x0432fa00/0x0432fe00/0x0433d700 regions, all pointing at the
same name-pool strings and the same targets).

## Validation before applying
- 100% agreement with existing checker names on every overlap the checker had
  already resolved through other means (ReadFile, WriteFile, CreateFileA/W,
  GetFullPathNameA/W, GetDriveTypeA/W, GetDiskFreeSpaceA, CreateDirectoryW,
  FileTime\*, LocalFileTimeToFileTime, GetFileInformationByHandle — 14 exact at
  scan time; after this wave, 26 exact).
- Wave 225 runtime corroborated two entries live: `SetFileAttributesW` ran on the
  `dfts.dat` unlink path, and the DeleteFileW target executed the file delete.
- Body semantics checked per rename before applying (no blind batch):
  - `FindFirstFileA/W`, `FindNextFileA/W` -> thin wrappers; W variants do the
    wide->narrow conversion and tail-call the same shared find engine
    (FUN_0412a830 / FUN_0412a640).
  - `GetFileAttributesW` -> W wrapper -> resolve -> `VPFS_GetFileAttributes` /
    `VPFS_GetStatIfDiskObject_Fast`.
  - `SetFileAttributesW` -> W wrapper -> `VPFS_SetFileAttributes` +
    `fs_SetFileAttributesA` (checker-named helper) — observed live, Wave 225.
  - `RemoveDirectoryA` -> `VPFS_IsFolder` -> `VPFS_Delete` (exact RemoveDirectory
    semantics; pairs with its W twin already named by the checker).
  - `FlushFileBuffers` -> handle resolve + `Synchronisation_GetObjectInfo` +
    SetLastError path.
  - `GetLogicalDrives` -> `return 0xc` — a drive bitmask (C:|D:). Dead giveaway
    this is the emulation's answer to GetLogicalDrives.
  - `SetFileInformationByHandle`, `LockFile`, `UnlockFile` -> `return 0` stubs.
    The names belong to the slots: this table IS the game's runtime linker data.

## Renames applied (12, all targets previously unnamed, names unused in ledger)
04132900 eON_SetFileInformationByHandle, 04134990 eON_LockFile,
04132b70 eON_FlushFileBuffers, 0412b660 eON_FindFirstFileA,
0412b970 eON_FindNextFileA, 04135d10 eON_GetLogicalDrives,
0412b690 eON_FindFirstFileW, 0412b9a0 eON_FindNextFileW,
0412c770 eON_RemoveDirectoryA, 041323d0 eON_GetFileAttributesW,
04132730 eON_SetFileAttributesW, 041349b0 eON_UnlockFile.

## Held / flagged (not renamed)
- Nine table entries whose names the checker already parked on different slots
  (SetFilePointer, SetFileTime, FindClose, GetFileAttributesA, SetFileAttributesA,
  CreateDirectoryA, DeleteFileA, DeleteFileW, GetFileType). Checker names are
  authoritative; the two W-pair conflicts (DeleteFileW on 041340d0 vs
  eON_DeleteFileW on 0412c830) resolve cleanly in the table's favor on pure body
  semantics (IsFile+ENOENT = DeleteFile; IsFolder+ERROR_DIRECTORY = RemoveDirectory),
  and the Wave 225 runtime delete matched the table's target, but existing names
  were left as-is per lane rules.
- `SetEndOfFile` entry -> `fs_files_04132a50` (module-prefix tier name; left).

## Bookkeeping
- `decomp/wave226_kernel32_name_table.json` — full 37-entry table with live names.
- `seeds/functions.csv` re-synced from live map (14 rows updated).
- Scoreboard: 5,000 -> 5,013 / 9,221.
