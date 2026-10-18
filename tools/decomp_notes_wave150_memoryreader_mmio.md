# Wave 150 — eONMemoryReader mmio internals

Scoreboard: 3,334 / 9,221.

## Named

5 eONMemoryReader methods backing mmio Open/Read/Seek/Descend/Close.

## LEAVE

- `FUN_0418d8d0` — reads 8-byte header + file size; not confidently mmioGetInfo/SetInfo.

## Next

mmioWrite if distinct; waveOut*; GDI Ellipse/SelectPalette/StretchBlt.
