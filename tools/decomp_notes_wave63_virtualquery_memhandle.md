# Wave 63 — VirtualQuery / MemoryHandleManager_Destroy

Scoreboard after apply: **2,779 / 9,221**.

## Renames (3)

| Addr | Name | Lock |
|------|------|------|
| 0413eff0 | eON_VirtualQuery | MEMORY_BASIC_INFORMATION size 0x1c |
| 0413f350 | eON_VirtualQueryEx | current-process-only wrapper → VirtualQuery (was mislabeled VirtualFreeEx twin in wave 60; shared reject string) |
| 0413f440 | MemoryHandleManager_Destroy | mutex destruction failed |

Leave: identical SetClassLongPtrA log stubs (4×); GetDlgItem shared cluster.

Batch: `tools/names_batch54.tsv`
