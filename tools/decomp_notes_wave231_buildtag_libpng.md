# Wave 231 — build-tag source match: libpng-1.6.16-signed direct join

The binary's own SPLIT literal ('1' + '.6.16') pins the shipped libpng build tag.
Prior matcher waves joined strings across the bracketing tags (v1.6.0 + v1.6.40)
because the build tag itself was unproven; with the tag pinned, this wave ran the
hand-tier join directly against `libpng-1.6.16-signed`: for every unnamed
function in the libpng zone with >=2 independent features (string literals,
numeric constants, calls into ledger-named functions), require the feature set
be a subset of EXACTLY ONE source function at the pinned tag — then hand-read
every hit line-by-line before naming.

## Applied (2)
- `042c6020 -> png_default_write_data` — verbatim line match: NULL-guard on
  png_ptr, `fwrite(data, 1, length, io_ptr)`, mismatch branch calls
  `png_error(png_ptr, "Write Error")` — literal and control flow both exact.
- `042a9e50 -> png_chunk_report` — control flow matches source exactly via the
  pinned tag's constants: `mode & 0x8000` (PNG_IS_READ_STRUCT, top bit of the
  16-bit mode field — byte read at +0xd1 & 0x80) selects the read branch
  [threshold `error < PNG_CHUNK_ERROR(2)` → png_chunk_warning, else
  png_chunk_benign_error — binary `1 < param_3` is exactly `>= 2`] and the write
  branch [threshold `error < PNG_CHUNK_WRITE_ERROR(1)` → app-warning path, else
  app-error path]. Named callees png_chunk_warning/png_chunk_benign_error are
  ledger anchors; the two unnamed write-branch callees (FUN_042a9df0 = the
  app-error path, FUN_042a9e20 = the app-warning path) are pinned as behavior
  matches — call structure alone, left unnamed per rule.

## Rejected on body read (2)
- `042c5000` and `042c5040` both joined `png_fixed_inches_from_microns` (500,
  0x7f constants) — two-to-one mapping and each body contains an extra leading
  call absent from the source (fork addition). Dropped.

## Join population
274 unused-name source functions at the pinned tag x 381 unnamed zone functions;
feature-subset join unique-owner hits: 4 (2 applied, 2 rejected above).

## State after wave
Board 5,178 / 9,221 (56.2%). Queue 0. Vtable align 0 proposals. Seeds
re-synced (`agent/live_functions231.json`).
