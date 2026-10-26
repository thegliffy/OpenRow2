# Wave 214 — zlib district probe: dead end (0 names)

Ran the v1.2.3 zlib matcher plus call-graph probes; nothing applied. Findings:

- Both zlib copies in the binary (04007xxx and 04526xxx zones) were named
  centuries ago at the API level (deflateInit2_/deflate/crc32/inflate/
  inflateInit_/inflateEnd/inflateReset/deflateReset/adler32). The 04007xxx
  copies are **thunks through PTR_ pointer tables** (e.g. `(*(code *)
  PTR_inflate_0440861c)()`) — the real zlib bodies are not reachable by
  callees/callers through them, and 04526xxx decompiles as bad-instruction
  stubs (probably misdisassembled or non-code).
- `callers` on every named anchor returns only already-named callers (the
  libpng zstream wrappers + the eON decompressor) — no unnamed statics
  hanging off them.
- The one rich seed cluster — `FUN_042a6270` with 5 unique strings
  ("bad parameters to zlib", "unexpected zlib return", "unsupported zlib
  version", "zlib IO error", "insufficient memory") — is the **engine's
  decompressor error mapper**: its switch maps zlib return codes
  (-2→bad parameters, -6→version, -3→damaged… — wait, strings differ from
  zlib's exact wording: 'damaged LZ stream', 'unexpected end of LZ stream',
  'missing LZ dictionary') — these match neither libpng nor zlib strings;
  engine-internal vocabulary, no source to line up → can't name.
- The checker-pended addresses from earlier sessions (042ad100 etc.) are no
  longer functions; the simple-API family they pointed at is fully named.

Conclusion: libpng/zlib/strdata lanes exhausted; remaining unnamed functions
need call-graph entry points from named game-side code, not string matching.

## Ops

No renames. Seeds untouched. Matcher/notes tooling: see skill
`ghidra-headless-re` references/openrow2.md.

## Next

- Game-side districts (the 4,284 unnamed): entry via Windows API thunks
  already named (GetMessage/CreatePen/etc. waves 100–114) and class-method
  assert strings — the classic lane, still the biggest.
- Possible untapped lane: the engine's own .rdata strings with
  Class::Method signatures (checker-accepted form) — audit whether seeds
  hold any single-owner ones on unnamed functions (this session found 0;
  likely all consumed).
