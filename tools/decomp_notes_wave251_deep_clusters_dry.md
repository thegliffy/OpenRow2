# Wave 251 — deep-cluster reconnaissance: dry (policy decision point)

Targeted the big unnamed clusters (alloc 1,006 / memory 630 / string 414 /
threads 381). Findings:

1. **Clusters are game code.** Subsystem anchors are functions calling only
   canonical callees (malloc/memcpy/snprintf/pthread_*) — those callees are
   dynamic-libc PLT entries (glibc NOT statically linked — proven again by
   wave-247 gdb backtrace through /lib/i386-linux-gnu/libc.so.6). No
   statically-linked allocator/string libs to join.
2. **No new static library sources.** Binary fingerprints: libjpeg 0, FreeImage
   0, libtiff 0, lua 0, SQLite 0, curl 0; FreeType = dynamic (libfreetype.so.6);
   'pcre/ogg' hits were substring noise. Static-in-binary libs remain exactly
   the pinned clones: zlib ×2, libpng, tinyxml (145 named — fully consumed),
   gcc/libstdc++, game-patched GLEW.
3. **libsupc++ canonical shape match: dry.** `__cxa_throw` canonical body must
   call `__cxa_begin_catch` on its cold path — ZERO corpus bodies call it (and
   zero call the other taken ABI names from unnamed slots). The checker had
   named everything nameable; the binary's C++ runtime slice doesn't match the
   pinned 4.3.4 source shapes (same conclusion as wave 233's gcc join).
4. **Name-availability audit** for remaining canonical ABI names
   (`__cxa_throw`, `__cxa_finalize`, `__cxa_vec_new`, `__cxa_deleted_virtual`,
   `__cxa_call_terminate`, `_ZSt17__throw_bad_allocv`): free, but no
   body-evidenced target — naming them would be fabrication.

## State
Board 5,197 / 9,221 (56.4%). Mechanical + evidence-sourced naming EXHAUSTED.
Remaining ~4,024 unnamed functions are game/eon2 code whose only naming path is
DESCRIPTIVE naming (policy decision — current rules require body/source/assert/
runtime-grounded names; descriptive labels like `assert_reporter` for
`0400a810`, `exit_after_cleanup` for `0400d2e0` are body-supported but not
game-sourced).

## Held pool recap (waves 248–251, body-read, would need descriptive naming approval)
`0400a810` (assert implementation — format string + abort), `0400d2e0`
(cleanup+exit), plus ~35 listed in waves 248–250 notes.

## POLICY (user decision 2026-10-27)
Descriptive (analyst-chosen) naming was proposed at the wave-251 decision point and DECLINED.
Naming stays evidence-only: body/source/assert/runtime/game-table grounded. Board parked at
5,197 / 9,221. Future waves must not batch-rename on body semantics alone.
