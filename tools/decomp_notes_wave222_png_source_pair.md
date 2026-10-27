# Wave 222 — libpng matcher re-scan: two verbatim source matches

Re-ran the per-function source-set join (single-owner seed strings on unnamed
functions x vendor/libpng both matcher tags) after Wave 221's close.
100 single-owner strings scanned; 12 raw line-level hits; verified down to 2
that pass containment on both v1.6.0 and v1.6.40; the rest are
substring/identifier artifacts (the digit-table line, comments, K&R noise).

## Applied (via gateway rename, read-back verified)

- **042a5350 -> png_user_version_check.** Body verbatim png.c (both tags):
  NULL-arg check, version char loop with dot count (the first/third-digit
  fast path), flags |= 0x20000 (PNG_FLAG_LIBRARY_MISMATCH confirmed in
  pngpriv.h), m[128] built by the 4-call png_safecat chain with both seed
  strings, then png_warning. The binary's own version literal is "1.6.16"
  (decompiler shows '1' + ".6.16" split) — between the two matcher tags,
  source unchanged in that range. Single caller FUN_042a54a0 is the
  create-read/write path (setjmp + png_malloc_warn(struct) right after the
  call) — matches the source call site shape.

- **042c12c0 -> png_deflate_claim.** Body verbatim pngwutil.c (both tags):
  zowner-field test, msg[64] chunk-4CC byte-split, ':' ' ' writes,
  safecat at position 10 " using zstream", png_warning, then the
  zowner==IDAT -> "in use by IDAT" -> return Z_STREAM_ERROR(-2) path with
  the steal-to-zero fallthrough, then the zlib field loads and the
  windowBits halving loop for data_size < 0x4001. Both seed strings
  physically inline in the body. Binary callers {png_text_compress,
  png_compress_IDAT} both already named.

## Rejected

- 042a9940 ("3456789"): the seed string is the digit-table line matched as a
  substring of "0123456789ABCDEF" — the function body is an engine
  format-escape processor (mid-string pointer), not verbatim libpng. Hold.
- All zlib/gcc cross-joins: no single-owner string on an unnamed function
  lands inside a source function body this era. libstdc++ lane closed at
  wave 221; zlib stays dead per wave 214.

## Ops

Seeds re-synced from live map (functions.csv 6 rows, string_refs.csv 6 rows —
this wave's 4 plus 2 lag rows). vtable align 0 proposals; PLT map regenerated
(/tmp/plt222.txt). Queue 0 after this wave — assert lane stays dry.

## Next

Per-function hand reads on the big unnamed clusters (eON_ShaderData
varying-usage family, GLSL producers) are the only lanes left; the assert
matcher and both vendor joins are dry.
