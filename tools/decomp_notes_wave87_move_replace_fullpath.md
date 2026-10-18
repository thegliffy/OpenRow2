# Wave 87 — MoveFile(Ex) W + ReplaceFile A/W + GetFullPathName A/W

Scoreboard after apply: **2,970 / 9,221**.

## Renames (7)

- `eON_MoveFileW` (WideChar→VPFS_MoveFileOrFolder)
- `eON_MoveFileExA` / `eON_MoveFileExW` (flags reject `0x34`; bit0 = replace-existing path)
- `eON_ReplaceFileA` / `eON_ReplaceFileW` (unique `Non-zero flags in ReplaceFileA` log)
- `eON_GetFullPathNameA` / `eON_GetFullPathNameW` (`.` / `C:.` normalization; W wraps A)

LEAVE: `04133970` MoveFileA twin of already-named `eON_MoveFileA`; `041340d0` DeleteFileW twin of `eON_DeleteFileW`.

Batch: `tools/names_batch78.tsv`
