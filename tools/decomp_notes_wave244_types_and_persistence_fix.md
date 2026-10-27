# Wave 244 — apply concrete types/protos via MCP (+ critical persistence fix)

Goal: apply return types and verbatim pinned-source prototypes (zlib v1.2.3.4)
to the 20 zlib-lane functions (two copies: 04007xxx, 04526xxx). Struct instances
(z_stream, deflate_state) could NOT be applied: this Ghidra exposes no C-source
parser on the PyGhidra/JPype classpath (jar search empty; the GUI parser is an
OSGi island), composite types cannot be constructed (package-private impls), and
`Function.addParameter` requires a `Variable` instance with no public constructor.

What was applied per function (20 entries, `tools/w244_apply_types.sh`):
- `set_return_type` via new MCP tool: `/int` for deflate/inflate/init/end/reset,
  `/ulong` for crc32/adler32 (uLong == unsigned long == 32-bit on i386).
- Entry comment = verbatim `zlib.h` declaration from pinned tag v1.2.3.4 (K&R
  `OF(())` style preserved).

## CRITICAL — PyGhidra never persisted; all wave renames had lived in RAM only

The server rebuild (to register the new tool) wiped ~2,950 renames: PyGhidra does
not auto-flush the DB and `Project.save()` is a NO-OP on non-versioned project
files. Every wave since Oct 16 renamed via the server and "saved" into the void;
the first container restart lost everything not in seeds.

Fix (all in `mcp/server.py`):
- `save()` now calls `DomainFile.save(TaskMonitor.DUMMY)` — the only path that
  actually writes (verified by grepping wave names in `OpenRow2.rep/`).
- New `bulk_reseed(csv_path)` tool re-applies every name from the canonical seed
  CSV in one pass: **2,950 renames re-applied, board restored to exactly
  5,195 / 4,026 / 9,221**, verified on disk AND live.
- `flush()` probe tool retained.

Seeds CSV survived intact (committed continuously through the waves) — that is
what made this a recovery instead of a catastrophe. Lesson: after ANY server
write, prove persistence on disk (grep the .rep), not just tool-level ok.
