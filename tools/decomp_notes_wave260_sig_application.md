# Wave 260 — documented-API signature application pass

Status: COMPLETE. Board: 5,197 / 9,221 (held — zero renames; return types +
comments only, per the wave-244 apply template: `set_return_type` for
DTM-resolvable types, full documented prototype as an EOL comment).

## Scope gate
- Seeds (`seeds/functions.csv`) rows whose name is EXACTLY a canonical, fully
  documented Win32 API spelling, or `eON_`/`eOn_`/`fs_`/`VPFS_` + such a
  spelling (the name-table/checker lanes — identities already accepted on the
  board on game evidence).
- `[undocumented]`-sugared sigs excluded (inferred, not documented).
- Per target, live board name must match the seed name exactly before
  applying (zero drift rows; every applied row verified by live name).
- Result: 484 targets.

## Applied
- `tools/w260_sig_map.py` — scope builder → `/tmp/w260_targets.tsv`.
- `tools/w260_apply.sh` — batch via MCP: `set_return_type` (types probed
  against DTM first: `int`, `uint`, `ushort`, `short`, `uchar`, `void`,
  `void *` all resolve) + `set_comment` `documented signature: <proto>`.
- Batch `proc_f24aa508a352`: **484/484 ok, zero failures.** Flush via
  `DomainFile.save(TaskMonitor.DUMMY)` path (`df.save: ok`); board verified
  unchanged 5,197 / 4,024 / 9,221.

## Verification
- Types render in live decompile: `eON_GetTickCount` → `uint`,
  `eON_SetFocus` → `void *`, `VPFS_GetOverlappedResult`/
  `eON_AllocateAndInitializeSid` → `int`, `EnterCriticalSection` → `void`.
- Comments ride the same `set_comment` persistence path as waves 255/256
  (decompile text output does not render them; per-call ok + save confirmed).

## Notes
- Return types cover the documented contract only; parameter types are
  documented as comments (Ghidra prototype args not forced — i386 cdecl is
  already correct in the binary).
- No seed rows changed this wave (application is live-DB + comment layer).
