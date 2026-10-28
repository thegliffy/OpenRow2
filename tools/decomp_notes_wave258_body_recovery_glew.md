# Wave 258 — body recovery for live-validated hot TUs; GLEW patch diff

Status: COMPLETE. Board: 5,197 / 9,221 (held — no renames; naming policy intact).

## Part 1 — bodies into recovered/ (hot TUs validated live by wave 257)
Regenerated the 8 hot-TU files in `recovered/` with actual Ghidra bodies
(named members via live MCP decompile; attached helpers via the wave-233
corpus; `tools/w258_bodies.py`): **238/238 named bodies + 95 attached**
— zero gaps after the seed-address fallback resolved the checker-spelling
members (their seed names live as FUN_ pending entries; decompiling by
seed address returned the bodies cleanly).

| file | members | attached |
|---|---|---|
| d3d9/direct3ddevice9imp.cpp | 139 | 74 |
| core/vpfs/vpfs.cpp | 26 | 12 |
| win32/kernel32/synchronisationPrimitives.cpp | 16 | 3 |
| thirdParty/tinyxml/tinyxml.cpp | 15 | 0 |
| win32/kernel32/mem_vm.cpp | 12 | 3 |
| core/vpfs/vpfsdb.cpp | 10 | 3 |
| win32/winsock/winsock.cpp | 10 | 0 |
| thirdParty/tinyxml/tinyxmlparser.cpp | 10 | 0 |

## Part 2 — GLEW patch diff (docs)
String-table fit: binary GL/GLX exact tokens (927) vs generated tables
(GL+GLX only; WGL irrelevant on Linux):

| upstream version | generated table | fully covered by binary? |
|---|---|---|
| 1.3.1 | 290 | YES (0 missing, incl. substrings) |
| 1.5.1 | 360 | no — 4 missing |
| 1.5.2 | 360 | no — 4 missing (same set) |
| 1.6.0 | 501 (w/ WGL) | no — ~52 missing |

The 4 table entries absent from the binary: `GL_NV_vertex_program4`,
`GL_NV_geometry_program4`, `GL_NV_fragment_program4`,
`GLX_NV_video_output` — added upstream 2006-11-21 / post-1.3.1 era.
The binary additionally contains extension strings far newer than any
2006-era GLEW (GL_AMD_* 2013-2014 era) — those come from the statically
linked runtime/Mesa strings of the modern rebuild (binary is
"for GNU/Linux 3.2.32", BuildID → rebuilt toolchain, not the 2006 one).

Conclusion (consistent with wave 247): the game's GLEW generation state is
1.3.x-era — 1.3.1's generated table is fully covered by the binary, and
the only 1.5.x-era table entries missing from the binary (GL_NV_vertex/
geometry/fragment_program4, GLX_NV_video_output) have git first-add dates
of 2006-11-21 and 2008-11-03 — AFTER the game shipped (2006-10-24) — so
1.5.x+ generation is excluded and the base cannot be pinned to a specific
1.3.x point release (those tarballs are dead downloads; every
1.3.2-through-1.5.0 addition that git can date pre-ship IS in the
binary). Combined with the engine-assert strings absent from every
upstream version (wave 247), the linked GLEW is a patched fork.

(Note correction to Part-3 framing: string-level era-fit — base bound
<=1.3.x generation, 1.5.x+ excluded — is what the missing-4 add dates
prove; the binary's modern-toolchain rebuild (GNU/Linux 3.2.32, BuildID)
means it was relinked, so exact provenance of GLEW objects can't be
pinned further from the binary alone.)

## Part 3 — deeper gdb on attached helpers: SKIPPED, and why
The held pool (`/tmp/w232_cands.json`) has exactly 8 candidates on hot-TU
attached helpers (all vpfs.cpp: SetFileTime, GetFileAttributesA,
SetFileAttributesA, DeleteFileA, GetOverlappedResult, GetFileTime,
MoveFileA, + fs_DeleteFileW already done wave 246). Bodies now read
clean — each is a dispatcher calling exactly its API's `fs_*`/`VPFS_*`
backends with correct error codes (3/2/5/0xb7). BUT every candidate name
is already in use on the board (checker-lane spellings `eON_*`), so the
wave-232 rule keeps them held. gdb can strengthen membership evidence but
cannot free a name — so the conditional ("only if it yields evidence-grade
membership → renames") resolves to NO for every attached helper. Skipped
by evidence, not by convenience.

## Artifacts
- `tools/w258_bodies.py`, `recovered/` (8 hot files with bodies),
  `/tmp/w258_bodies.json` cache.
