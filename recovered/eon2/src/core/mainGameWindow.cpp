// Recovered source: eon2/src/core/mainGameWindow.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MainGameWindow_RegisterForFullscreenToggle @0x0402d130 ---
/* source: mainGameWindow */

void MainGameWindow_RegisterForFullscreenToggle(int param_1,char param_2)

{
  if (param_1 == 0) {
    FUN_0400a810("toggleFunc",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mainGameWindow.cpp",0x1b,
                 "void MainGameWindow_RegisterForFullscreenToggle(FullscreenToggleFunc, bool)");
  }
  if ((DAT_044116b4 != 0) && (param_1 != DAT_044116b4)) {
    FUN_0400a810("!sToggleFunction || ( sToggleFunction == toggleFunc )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mainGameWindow.cpp",0x1c,
                 "void MainGameWindow_RegisterForFullscreenToggle(FullscreenToggleFunc, bool)");
  }
  if (param_2 == '\0') {
    param_1 = 0;
  }
  DAT_044116b4 = param_1;
  return;
}

