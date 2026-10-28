#!/bin/bash
# Wave 253 apply: canonical name-table spellings for cursor A-slots (body-locked), then flush + scoreboard
MU=/home/gliffy/.hermes/bin/mcp-use
$MU openrow2 rename "target=0416e8e0" "new_name=eON_LoadCursorA"
$MU openrow2 rename "target=0416ef60" "new_name=eON_LoadCursorFromFileA"
$MU openrow2 flush
$MU openrow2 scoreboard
