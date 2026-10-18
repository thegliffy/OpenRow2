# Wave 85 — CoTaskMem* + display/resource A/W + winpe/MSAA crumbs

Scoreboard after apply: **2,955 / 9,221**.

## Renames (18)

- `eON_CoInitialize` / `eON_OleRun` / `eON_CoTaskMemFree` / `eON_CoTaskMemSize` / `eON_CoTaskMemRealloc`
- `winpe_LoadFromFile` (unique message lock)
- `GetMultisamplingOptionForLevel` (unique message lock)
- `EnumDisplaySettingsW` / `ChangeDisplaySettingsExW` / `ChangeDisplaySettingsA` / `ChangeDisplaySettingsW`
- `FindResourceExA` / `FindResourceA` / `FindResourceW`
- `EnumResourceNamesA` / `EnumResourceNamesW`
- `eON_GetComputerNameA` / `eON_GetComputerNameW` (Ex with `ComputerNameNetBIOS`)

LEAVE: thin forwarders `0416f970`/`0416f9b0` (call already-named Settings A/W). Shared XAudio `+4` vtable thunks. Return-0 resource stubs.

Batch: `tools/names_batch76.tsv`
