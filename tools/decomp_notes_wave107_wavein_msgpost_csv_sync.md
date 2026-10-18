# Wave 107 — WaveInDevice_Start* + MsgQueue_Post (+ socket CSV sync)

Scoreboard: 3,066 / 9,221.

## Named (Ghidra)

| Addr | Name | Lock |
|------|------|------|
| 0418fc40 | WaveInDevice_Start | pair of WaveInDevice_Stop; capture OOM |
| 041901e0 | WaveInDevice_StartIfRegistered | list membership then start |
| 04171f30 | eON_MsgQueue_Post | post path for PostQuit/PostThreadMessage |

## CSV sync only (already named in Ghidra)

WSAGetOverlappedResult, ioctlsocket, listen, WSASocketA, shutdown, WSAWaitResultToString, SocketDomainToString.

## Next

More WaveIn/WASAPI; continue thin Win32.
