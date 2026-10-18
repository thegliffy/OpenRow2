# Wave 144 — inet_*/getprotobyname / MapSocketOptname / EventSelect

Scoreboard: 3,292 / 9,221.

## Named

9 Winsock helpers: inet_ntoa/inet_addr, getprotobyname, Win→Posix SO_* map, EventSelect remove/clear + WSAEventSelect.

## LEAVE

- `FUN_04196bc0` — linked free of +0x14/+0x18/+0x1c; no callers; not proven FreeProtoent.
- `FUN_04191ed0` / `FUN_04192160` — FD bit→string builders; no string literals in decomp; LEAVE until string table lock.
- htons alone covers ntohs (single impl).

## Next

More Winsock leftovers; GDI Ellipse/SelectPalette/StretchBlt body locks; remaining TiXml non-twins.
