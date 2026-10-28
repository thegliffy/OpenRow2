# Wave 257 — runtime probe: named-anchor live activity across startup TUs

Status: COMPLETE. Board: 5,197 / 9,221 (held — runtime validation only, zero renames).

## Method
gdb live session (`tools/gdb_probe257.py`, game booted under DISPLAY=:77/llvmpipe,
~6 min live run, harness `tools/w257_stop.sh`): 159 no-stop breakpoints —
60 anchors (named members of the startup-active skeleton TUs) + 99 attached
helpers. Same non-invasive harness as wave 247; backtraces printed on hit 1.
Probe log archived at `agent/w257_probe.log`.

## Results
**27 / 60 named anchors executed live** — every one consistent with its
checker/wave name; zero contradictions. Active TUs and top hit paths:

| hits | name | TU |
|---|---|---|
| 540,381 | SignalObject | synchronisationPrimitives.cpp |
| 106,594 | SignalledFor | synchronisationPrimitives.cpp |
| 15,569 | TiXmlBase::StringEqual | tinyxmlparser.cpp |
| 658 | Synchronisation_CloseHandle | synchronisationPrimitives.cpp |
| 587 | vmm_CommitRegion | mem_vm.cpp |
| 504 | eON_VirtualAllocEx | mem_vm.cpp |
| 157 | eON_VirtualFreeEx | mem_vm.cpp |
| 157 | custom_munmap | mem_vm.cpp |
| 124 | TiXmlBase::ReadName | tinyxmlparser.cpp |
| 123 | GetPagesProtection | mem_vm.cpp |
| 113 | vmm_DeleteReservedRegion | mem_vm.cpp |
| 64 | TiXmlBase::ReadText / TiXmlAttributeSet::Add | tinyxmlparser.cpp / tinyxml.cpp |
| 51 / 48 | getProcessVMInfo / Win32ToInternalProtectFlags | mem_vm.cpp |
| 29 | Direct3DDevice9Imp::CreateDepthStencilSurface | direct3ddevice9imp.cpp |
| 11 | Synchronisation_AddedMessageToThread | synchronisationPrimitives.cpp |
| 2 | eON_WSAStartup | winsock.cpp |
| 1 | VPFS_Config_Prepare / VPFSDB_Init / TiXmlDocument::LoadFile / Parse / Print / Direct3DDevice9::Initialize / eON_bind / OpenObjectByName / OverlappedIOThreadFunction | (startup paths) |

Notable validations:
- The real game boots by parsing XML through TiXmlDocument::LoadFile → Parse →
  Print with TiXmlBase::StringEqual hot (15,569) — the checker single-source-file
  attribution rule for tinyxml names is exercised by real execution.
- mem_vm pair eON_VirtualAllocEx (504) / eON_VirtualFreeEx (157) live, balanced
  with vmm_CommitRegion (587) — wave-253 twin consistency confirmed at runtime.
- winsock eON_WSAStartup fires at startup; eON_bind fires — network stack alive.
- synchronisationPrimitives is by far the hottest recovered TU — sync objects
  hammered during startup/load (SignalObject 540k).

**Attached helpers:** 21 / 40 executed live; their immediate callers were
unnamed FUN_ frames (the static attach tier calling each other), so runtime
could not confirm TU membership for them. Attach remains static call-graph
evidence only; no renames per the evidence-only policy.

## Artifacts
- `tools/gdb_probe257.py` — probe harness (159 bps).
- `tools/w257_stop.sh` — timed stop.
- `agent/w257_probe.log` — full probe log (HIT lines + hit-1 backtraces).
