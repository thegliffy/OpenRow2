# Wave 225 — gdb runtime lane: emulated Win32 file-API chain confirmed on the live process (0 renames)

Ran the game on this box under gdb with python breakpoints on libc
open/open64/fopen printing a backtrace for target files (archives,
DFEngine cache, registry, ads state, saves, profile). Drove menu ->
NEW GAME -> Normal -> creator -> world (Jailbreak) -> pause ->
SAVE/LOAD -> NEW SAVE GAME -> YES at 10:41:34. gdb log:
`decomp/wave225/gdb_probe_filtered.log` (19,898 hits).

## Runtime-confirmed chain

Every target-file open runs through:

    eON_CreateFileA / eON_CreateFileW
      -> vpfs_CreateFileA
        -> [read path]  VPFS_Open -> VPFS_OpenFileOnDisk -> fs_CreateFileA -> open64
        -> [create path] vpfs_04047220 (the exe/dll-checking, mutex-guarded,
                        backslash+"C:" normalizer) -> fs_CreateFileA -> open64

Stable return-address chains (identical across all hits per file class):

- read:  open64 <- 0412eea4 (fs_CreateFileA) <- 0403c903 (VPFS_OpenFileOnDisk)
         <- 040422d5/0404225e (VPFS_Open) <- 0412f5c4/0412f55e/0412f57e
         (vpfs_CreateFileA) <- 04131d66 (eON_CreateFileA, ASCII paths:
         .vpp_pc archives, .bbsave, profile.dat) or 04131ebb
         (eON_CreateFileW, wide paths: DFEngine cache, ads .dat, registry)
- create: ... <- 04047404/040474b0 (vpfs_04047220) <- ...
- wide dispatchers observed in the same family during the session:
  FUN_04132730 (WideCharToMultiByte -> FUN_04042f10 -> VPFS_SetFileAttributes
  or fs_SetFileAttributesA = the W entry for SetFileAttributes) and
  FUN_041340d0 (WideCharToMultiByte -> ... -> VPFS_IsFile -> VPFS_Delete =
  the real DeleteFileW entry; note the checker's eON_DeleteFileW at
  0412c830 checks VPFS_IsFolder + ERROR_DIRECTORY(0x10b) = RemoveDirectoryW
  semantics — the checker's assert-based name stands, flagged here for the
  record).

The assert-named functions on the shared chain (fs_CreateFileA,
VPFS_Open, VPFS_OpenFileOnDisk, vpfs_CreateFileA, eON_CreateFileA/W) are
now independently corroborated by live runtime backtraces. The two
dispatchers with no assert string stay unnamed (behavior-matched, no
rule-legal signature).

## New runtime facts

- `.bbsave` filenames encode the real wall-clock save time: both saves'
  filename tails match their mtimes to the second
  (`...41102726092038` = 10/27/26 09:20:38,
   `...11102726104134` = 10/27/26 10:41:34), preceded by a 16-digit
  constant and `_108-`. Header dword0 differs per save (hash/checksum);
  dword1 = 108 = the `_108-` prefix.
- Save written through the create path (vpfs_04047220); profile.dat
  updated 2 s later. Clean kernel32 shutdown dance as in wave 224.
- DFEngine cache (`engine.var`, `cache/objects.dfo`, `df.dat`) opened at
  boot via the W path — the old engine's runtime cache is alive in the
  Linux build's boot sequence.
- Ad middleware (Double Fusion) fully wired: writes dfts.dat/dftm.dat
  state during the session and retries `master10.doublefusion.com`
  every 5 min (DNS dead since ~2013), logging to engine_log.html.

## Files

- `decomp/wave225/gdb_probe_filtered.log` — filtered hit+backtrace log.
- `decomp/wave225/save_game_2.bbsave` — save produced during the run.
- `decomp/wave225/menu.png`, `decomp/wave225/save_panel.png`,
  `decomp/wave225/confirm.png` — drive screenshots.

No renames; scoreboard holds at 5,000 / 9,221. Naming sources remain as
closed in wave 223; this wave corroborates existing names instead of
adding new ones.
