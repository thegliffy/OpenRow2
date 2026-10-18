# Wave 200 — GetExitCodeThread + TLS + ThreadMap helpers

Scoreboard: 3,636 / 9,221.

## Named / Fixed

GetExitCodeThread (real STILL_ACTIVE impl; prior stub renamed); Thread_AttachMsgState / IsTerminated / GetHandleId;
ThreadMap InsertNode/FindInsertPos/MutexDestroy/BoostSiblingPriorities/AllSiblingsIdle; HasTEB;
TlsAlloc/Free/GetValue/SetValue; SystemTimeToFileTime; FileTimeToSystemTime.

## LEAVE

ThreadMap InsertNode/FindInsertPos near-identical twins at 0415af30 / 0415a8e0.

## Next

GetCapture; SetMessageExtraInfo; DialogBoxParamW; Ellipse; mixer/waveOut; InSendMessage/GetMessagePos.
