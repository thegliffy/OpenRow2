#!/bin/bash
# Wave 253 hand-read: contested pool slots + their W/A twins for body lock
MU=/home/gliffy/.hermes/bin/mcp-use
for t in "$@"; do
  echo "===== $t ====="
  $MU openrow2 decompile "target=$t" 2>&1 | head -45
done
