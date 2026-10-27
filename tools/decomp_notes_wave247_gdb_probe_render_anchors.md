# Wave 247 — targeted gdb probe: top render anchors

Targets: `041a5dd0` (390 call sites) and `0419cb30` (214 call sites). Ghidra decompile
timed out on both (static lane closed for giants), so evidence came from a live i386
gdb session (`tools/gdb_probe247.py`, game booted under DISPLAY=:77/llvmpipe) plus
GLEW source structure from tarballs (1.3.1, 1.5.1, 1.5.2, 1.6.0) and the git clone.

## Runtime evidence
- `0x041a5dd0` fired exactly once in a full live session, ~20s after process start,
  backtrace: `_start -> main -> 0x0400bb6a -> 0x04021050 (DetermineMaxSamplesForFormat,
  checker-named) -> 0x041a5dd0`. Zero hits during minutes of live rendering.
- `0x0419cb30` (`_glewInit_GL_EXT_direct_state_access`, checker-named): zero hits —
  consistent: GLEW only calls per-extension init functions when the extension is
  present; llvmpipe reports no DSA.

## Source structure match (GLEW 1.5.2 tarball, generated glew.c)
- `glewInit()` is small and calls the generated mega-function `glewContextInit()`
  (line 6815, ~2,000 lines, ~306 extension-resolver calls in 1.5.2; extension count
  grows monotonically in later 1.5.x — matches the game's 390).
- The game binary's 390-call anchor is exactly this generated `glewContextInit`, called
  once at startup from the game's GL-init master `04021050`.
- The 214-call anchor is the generated `_glewInit_GL_EXT_direct_state_access` —
  the checker's existing name matches the real GLEW generated name. ✓

## Version note
`DetermineMaxSamplesForFormat` and `initialisation error` appear in NO upstream GLEW
(checked 1.3.1–1.6.0 tarballs + all git tags) — the game ships a patched/custom GLEW
copy with its own assert strings and function; the game's GLEW carries
`__GLEW_ARB_instanced_arrays` (≥1.5.10-era).

## Outcome
- `041a5dd0` renamed to `glewContextInit` (live `list_functions filter=glewContextInit`
  returns it at `041a5dd0`; seed mirror row appended; flush persisted).
- `0419cb30` checker name confirmed by structure; no change.
- Board held at 5,196 / 9,221: the GLEW TU functions live OUTSIDE the tracked 9,221
  denominator (live program carries 9,751 functions), so this rename cannot move the
  board — it is structural documentation, honestly off-board.
- Probe harness kept at `tools/gdb_probe247.py`.
