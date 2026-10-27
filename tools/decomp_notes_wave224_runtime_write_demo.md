# Wave 224 — runtime write path demonstrated live (0 renames)

Ran the game on this box (Xvfb :77, llvmpipe software GL, native Linux ELF
via Steam tree rsynced from glifftop). Full boot: main menu -> NEW GAME
(Normal) -> character creator -> world (Jailbreak mission, HUD live).
Drove the pause menu (Enter opens it, mouse via XTEST) to SAVE/LOAD ->
Save Game -> confirm dialog -> save committed at 09:20:38.

## Runtime writes observed live (strace, this session)

- `~/.local/share/volition/saintsrow2/EonRegistry.xml` — REWRITTEN at boot
  (O_WRONLY|O_CREAT|O_TRUNC). This is the emulated-registry database: UTF-16
  keys (N-prefixed hex), maps Windows CSIDL paths (Shell Folders/Personal)
  under `~/.local/share/volition/saintsrow2`.
- `.../AppDataLocal/THQ/Saints Row 2/ads/dftm.dat`, `ads/dfts.dat`,
  `ads/engine_log.html` — engine's ad-middleware state files, written during
  the session (Double Fusion ad server `master10.doublefusion.com`, DNS dead
  since ~2013; retried every 5 min).
- `.../AppData/Saints Row 2/_108-100000000000000041102726092038.bbsave` —
  CREATED 09:20:38 (O_WRONLY|O_CREAT|O_EXCL|O_TRUNC), 240,472 bytes. First
  game-produced save on this machine. `profile.dat` updated 2 s later.
- Boot sequence on `VPFS_registry.vpfsdb`: open RDONLY then
  `unlink(VPFS_registry.vpfsdb.backup)` — the DB backup-rotation dance; DB
  rewritten when dirty (last dirtied during the Oct 13 run).
- Boot scan of `data/DFEngine/`: opendir + `engine.var` +
  `cache/objects.dfo` — the DFEngine cache (files runtime-produced on
  glifftop's real Steam install).
- Clean shutdown: `kernel32_ProcessDetach` (266 ms to suspend game threads)
  -> `kernel32_Shutdown` -> `===enforcing log flush===`.

## bbsave format peek

Header: `6c b5 44 46 | 6c 00 00 00 | a0 0f 00 00 | "sr2_city"` at 0x10,
then UTF-16 timestamp strings ("09:20:38", "10.27.26"). Bytes 2-3 spell
"DF". Filename tail `41102726092038` = 0x2561f9635506 — 46 bits, does not
fit a 32-bit Volition hash; likely a platform/user id, not a name hash.
Left as observed fact; no rename invented from it.

## Files

- `decomp/wave224/strace_runtime_writes.log` — write/create/rename/unlink
  lines + vpfsdb/DFEngine/preload boot lines from the run.
- `decomp/wave224/save_game.bbsave` — the save produced during the run.
- `decomp/wave224/EonRegistry.xml` — emulated registry (UTF-16 XML).
- `decomp/wave224/*.png` — menu -> save tab -> confirmation screenshots.

No renames: the runtime layer writes through the emulated Win32 layer; no
new single-owner assert candidates surfaced. Naming sources remain as
closed in wave 223.
