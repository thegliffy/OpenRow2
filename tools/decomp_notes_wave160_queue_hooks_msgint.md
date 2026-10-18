# Wave 160 — GetQueueStatus + hooks + msg-queue internals

Scoreboard: 3,394 / 9,221.

## Named

4 user32 APIs (GetQueueStatus, GetKeyNameTextW, CallNextHookEx, UnhookWindowsHookEx) plus 5 SendMessage/DestroyWindow/thread queue internals.

## Left

RegisterWindowMessage rb-tree STL helpers (76bf0/76cd0/76e10); thin WaitMessage/GetDoubleClickTime/SetLastError export stubs; 74450 msg-wait (no callers); GDI Ellipse/SelectPalette/StretchBlt; waveOut*; Get/SetFocus/Capture.

## Next

Focus/Capture/InvalidateRect body locks; waveOut*; GDI Ellipse cluster.
