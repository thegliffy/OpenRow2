# Wave 246 — targeted behavioral-lane closure (gdb-evidence rename)

The runtime/gdb lane (wave 225) had left one behavior-matched dispatcher unnamed
because static-only evidence was insufficient at the time. Its evidence is now
runtime-grade, so it was applied:

- **`041340d0 -> fs_DeleteFileW`** — the true DeleteFileW entry of the emulated
  Win32 layer: wide path -> `eON_WideCharToMultiByte` -> path lookup helper
  (`FUN_04042f10`) -> `VPFS_IsFile` -> `VPFS_Delete`, with Win32-exact failure
  codes: `ERROR_FILE_NOT_FOUND` (2) when the path lookup fails and
  `ERROR_ACCESS_DENIED` (5) when the path is not a file — precisely what
  DeleteFileW returns, and complementary to the checker-named `eON_DeleteFileW`
  at `0412c830`, which answers `ERROR_DIRECTORY` (0x10b) for the non-directory
  case (RemoveDirectoryW semantics, per wave 225). Live backtrace during the
  wave-225 save run corroborated the chain. Family conventions match
  (`fs_MoveFileA`, `fs_SetFileAttributesA`, `eON_MoveFileW`, `fs_RemoveDirectoryA`);
  name verified unused in every spelling before applying.

No new gdb session was needed — wave 225 already captured the runtime evidence;
the rule is "probe only if evidence arises", and it had. Verified on disk via
`.rep` grep (post wave-244 persistence fix). Board: 5,195 -> 5,196.
