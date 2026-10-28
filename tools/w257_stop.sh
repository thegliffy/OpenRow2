#!/bin/bash
# wave 257: let the game run live, then stop the inferior so gdb prints STATS
sleep 330
PID=$(pgrep -x 'saintsrow2.i386' | head -1)
if [ -n "$PID" ]; then
  echo "killing game pid $PID"
  kill "$PID"
else
  echo "game not found at stop time"
fi
