# Wave 66 — Global*/Local* via MemoryHandleManager

Scoreboard after apply: **2,803 / 9,221**.

## Renames (16)

`DAT_04515b68` → Global*: Alloc/Free/Lock/Unlock/Flags/Size/ReAlloc/Handle.

`DAT_04515b6c` → Local*: Alloc/Free/Lock/Unlock/Size/ReAlloc/Handle/Discard (`ReAlloc(h,0,LMEM_MOVEABLE)`).

Batch: `tools/names_batch57.tsv`
