# Wave 185 — WindowLinux helpers + SendDlgItemMessage

Scoreboard: 3,494 / 9,221.

## Named

Create/SetPos/Destroy/Title thunks; WindowLinux ctor + GetFrameExtents; GetHeadWindow;
QueryIsVisible; SetFocus_SameThread; FlushPendingForegroundSendMessageA;
SendDlgItemMessageA/W; Cursor UpdateShowHide; GetClassLongFromAtom.

## LEAVE

WindowLinux dtor twins; SetWindowLong A/W/Ptr identical stubs; GetClassLong 4× identical wrappers.

## Next

GetCapture; mixerGet*/waveOut*; Ellipse; remaining thin wnd wrappers with unique bodies.
