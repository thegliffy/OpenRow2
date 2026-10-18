# Wave 100 — DirectInput device destructors + GamepadMapping platform parse

Scoreboard: 3,044 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 040f4250 | DirectInputGamepadDeviceImp::~DirectInputGamepadDeviceImp | dtor + gamepad unacquired log |
| 040f5c60 | DirectInputKeyboardDeviceImp::~DirectInputKeyboardDeviceImp | dtor + keyboard unacquired log |
| 040f8620 | DirectInputMouseDeviceImp::~DirectInputMouseDeviceImp | dtor + mouse unacquired log |
| 0400ff80 | GamepadMapping_ParsePlatformBinding | platform≠Linux warning + ApplyControlBinding |

## Also

Wave 99 scoreboard corrected to **3,040** (BitBlt was rename of already-named `gdi32_`).

## LEAVE

| Addr | Why |
|------|-----|
| 0413df00 | shares Win32ToPosixProtectFlags with VirtualAllocEx/VirtualProtect/vmm_Commit |
| checkPathExists / IdentifyInstruction | shared assert twins |
| VPFS_Read 45da0/49e60 | shared Invalid handle assert |

## Next

Continue unique body/assert locks outside shared twins.
