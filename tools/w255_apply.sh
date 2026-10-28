#!/bin/bash
# Wave 255: apply "recovered source file: <path>" EOL comments via MCP set_comment
cd /home/gliffy/OpenRow2
ok=0; fail=0
while IFS=$'\t' read -r addr rel; do
  [ -z "$addr" ] && continue
  out=$(/home/gliffy/.hermes/bin/mcp-use openrow2 set_comment "target=$addr" "comment=recovered source file: $rel" 2>&1)
  if echo "$out" | grep -q '"ok": true\|"ok":true'; then
    ok=$((ok+1))
  else
    fail=$((fail+1)); echo "FAIL $addr $rel :: $out" >> /tmp/w255_fail.log
  fi
  n=$((ok+fail))
  if [ $((n % 50)) -eq 0 ]; then echo "checkpoint: $n done (ok=$ok fail=$fail)"; fi
done < /tmp/w255_targets.tsv
echo "DONE: ok=$ok fail=$fail"
