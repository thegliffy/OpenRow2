# OpenRow2 — consolidated architecture map

Navigation document for the decompilation of the game's Linux i386 binary.
Every claim here traces to a wave note (`tools/decomp_notes_*.md`, 190+ files);
nothing here is guesswork — speculative statements carry a `(open)` marker.

## Big picture
One statically-linked i386 executable shipping its own C++ runtime (gcc 4.3.4
libstdc++, 62 raw `_Z` strings outside the analyzed string space — wave 238),
three vendor clones pinned at source tags (zlib `v1.2.3.4` — TWO full copies,
region A `0x04006f00–0x04012000` and region B `0x04525f00–0x04527200`, waves
231/233/244; libpng `libpng-1.6.16-signed`, 187 named functions; tinyxml), an
emulated Win32 layer (`eON_*`, 2,335 names — the binary was built on Windows
and routes "kernel32" calls through internal dispatch tables), XAudio2 (72
names) plus a DirectInput class family (`DirectInput{Gamepad,Keyboard,Mouse}
DeviceImp`, 88 names), an OpenAL SOFT-fork audio path, Double Fusion ad
middleware (live: `ads/dftm.dat`, `ads/dfts.dat`, `ads/engine_log.html` — wave
225), and a separate `bin/CrashReporter.i386` sharing NO code with the game
(toolchain divergence — wave 243).

## Asset & save pipeline (runtime-verified, waves 224–225)
- **VPFS archives** + `fs_*` dispatch wrappers (game's own VFS; 106+ parked
  pool entries confirmed as wrappers — wave 232/239).
- **Registry**: `EonRegistry.xml` under `~/.local/share/volition/saintsrow2`,
  with `vpfsdb` backup rotation observed live.
- **Saves**: `*.bbsave` — filename tail encodes wall-clock save time
  (`…092038` = 09:20:38); full write path demonstrated live on Xvfb via the
  pause-menu SAVE GAME.
- **File APIs**: `eON_DeleteFileW` does NOT match its Win32 name's semantics
  (runtime-observed mismatch, wave 225 — `(open)` naming pending).
- Game boots on `DISPLAY=:77` with llvmpipe software GL; runtime input is
  XTEST-only (no `_NET_ACTIVE_WINDOW`).

## Subsystems by call volume (PLT-signature map, refreshed wave 245)
| subsystem | callers | notes |
|---|---|---|
| alloc | 1,006 | game allocator layer over malloc/new |
| memory | 630 | |
| string | 414 | |
| threads | 381 | pthreads incl. cancel + named semaphores |
| render | 271 | top anchor `0x041a5dd0` (390 GL calls), `0x0419cb30` (214) |
| audio | 69 | OpenAL + SOFT extensions (`alBufferSubDataSOFT`) |
| fileio | 65 | stdio; `fopen64`-era |
| filesystem | 58 | raw fd + dirent |
| network | 40 | BSD sockets + gethostby* |
| inflate | 11 | both zlib copies' entry points (wave 244 applied return
  types + verbatim pinned-tag prototypes as entry comments) |

## Naming infrastructure & state
- **Board**: 5,195 / 9,221 named (56.3%) — wave 240 closure; wave 244 added no
  names but applied real types.
- **Canonical ledger**: `seeds/functions.csv` (`entry,name`, CRLF) — survived
  the wave-244 persistence incident and drove the full recovery.
- **Gateway**: single-writer PyGhidra MCP server (moneta, `[REDACTED]`);
  persistence ONLY via `DomainFile.save(monitor)` — PyGhidra never auto-flushes
  and `Project.save()` is a no-op on non-versioned files (wave 244 incident:
  a container rebuild wiped ~2,950 RAM-only renames; `bulk_reseed` restored the
  board exactly).
- **Checker lanes**: queue 0, vtable align 0 proposals, PLT 18 anchors.
- **Mechanical naming exhausted**: dispatch/name-table (226–229), vendor source
  matching (230–233), source-graph closure (234–236, converged), feature joins
  and mangled lanes (237–239), bipartite call-set matching (241),
  cross-binary (243) — all dry. Remaining mass is per-function hand-read.
