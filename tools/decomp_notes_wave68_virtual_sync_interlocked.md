# Wave 68 — Virtual* wrappers + Sync Event/Mutex/Interlocked

Scoreboard after apply: **2,847 / 9,221**.

## Renames (35)

### Virtual / MemoryHandleManager (5)
- `eON_VirtualAlloc` / `eON_VirtualFree` — thin forwards to VirtualAllocEx/FreeEx with current-process handle
- `eON_VirtualLock` / `eON_VirtualUnlock` — mlock/munlock page-align wrappers
- `MemoryHandleManager_Init` — pthread recursive mutex + zero fields

### Synchronisation internals (17)
- `Synchronisation_StartWorkerThreads` — WaitTimers + OverlappedIO threads
- `Synchronisation_RegisterNamedObject` / `AllocObject` / `CreateEvent` (placeholders upgraded)
- `GetObjectInfo` / `DuplicateHandle` / `AddRefHandle` / `CommitHandleTable`
- Open*: Event, Mutex, Semaphore, WaitableTimer
- Event ops: Set / Reset / Pulse
- `ReleaseMutex` / `ReleaseSemaphore` (type codes 4 / 8)

### Win32 C-API surface (13)
- `eON_OpenEventA` / `eON_OpenMutexA`
- `eON_SetEvent` / `ResetEvent` / `PulseEvent`
- `eON_ReleaseMutex` / `eON_ReleaseSemaphore`
- Interlocked: CompareExchange(/64), Exchange, ExchangeAdd, Increment, Decrement

Batch: `tools/names_batch59.tsv`

## Leave
- Shared OpenObjectByName twins without a unique caller lock
- Return-0/1/0x4e2/0x809 stubs without ApiName logs
- Remaining d3d9device / Imp shared-assert pairs
