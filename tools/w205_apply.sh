#!/bin/bash
# Wave 205 final: last two pending pool-chain renames (body-confirmed)
cd /home/gliffy/OpenRow2
MU=/home/gliffy/.hermes/bin/mcp-use
$MU openrow2 rename "target=04184870" "new_name=eON_IsWindowEnabled"
$MU openrow2 rename "target=041811b0" "new_name=eON_IsWindowVisible"
$MU openrow2 rename "target=041712a0" "new_name=eON_GetMessageExtraInfo"
$MU openrow2 flush
$MU openrow2 scoreboard
