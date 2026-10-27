#!/bin/bash
cd /home/gliffy/OpenRow2
MU=/home/gliffy/.hermes/bin/mcp-use
for t in 041712a0 04184870 041811b0; do
  echo "===== $t ====="
  $MU openrow2 decompile "target=$t" 2>&1 | head -30
done
