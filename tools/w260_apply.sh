#!/bin/bash
# Wave 260: apply documented-API return types + signature comments via MCP.
# Input: /tmp/w260_targets.tsv (entry, name, rettype, proto)
ok=0; fail=0
while IFS=$'\t' read -r addr nm rt proto; do
  [ -z "$addr" ] && continue
  out=$(/home/gliffy/.hermes/bin/mcp-use openrow2 set_return_type "target=$addr" "typename=$rt" 2>&1)
  if ! echo "$out" | grep -q '"ok": true'; then
    echo "RT-FAIL $addr $nm :: $out" >> /tmp/w260_fail.log; fail=$((fail+1)); continue
  fi
  out=$(/home/gliffy/.hermes/bin/mcp-use openrow2 set_comment "target=$addr" "comment=documented signature: $proto" 2>&1)
  if echo "$out" | grep -q '"ok": true'; then ok=$((ok+1)); else
    echo "CMT-FAIL $addr $nm :: $out" >> /tmp/w260_fail.log; fail=$((fail+1))
  fi
  n=$((ok+fail))
  if [ $((n % 50)) -eq 0 ]; then echo "CHECKPOINT $n processed (ok=$ok fail=$fail)"; fi
done < /tmp/w260_targets.tsv
echo "DONE: ok=$ok fail=$fail"
