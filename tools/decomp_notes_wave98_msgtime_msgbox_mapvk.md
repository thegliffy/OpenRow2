# Wave 98 — GetMessageTime + MessageBoxA + MapVirtualKey(Ex) + GetKeyboardLayout

Scoreboard: 3,035 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 04171e50 | eON_GetMessageTime | `DAT_0451be60` = `timeGetTime` at post |
| 041777a0 | eON_MessageBoxA | MB_ low-nibble switch → button sets |
| 04175b30 | eON_MapVirtualKey | 256-entry VK/scancode/char tables |
| 04175c20 | eON_MapVirtualKeyEx | forwards to MapVirtualKey with HKL |
| 04175c50 | eON_GetKeyboardLayout | returns HKL `0x00010800` |

## LEAVE

| Addr | Why |
|------|-----|
| 04172190 / 04172240 | identical PostThreadMessage A/W twins (ERROR_INVALID_THREAD_ID) |
| 04175bc0 / 04175bf0 | identical MapVirtualKey A/W thin twins |
| 041762a0 | 3-entry HKL index — not clear Layout vs LayoutList |
| 0417f070 / 0417f0d0 | IsCharUpper/LowerA ctype bits ambiguous |

## Next

GetMessagePos; unique PostQuit/WaitMessage; GDI leftovers.
