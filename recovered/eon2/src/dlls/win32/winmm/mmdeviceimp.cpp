// Recovered source: eon2/src/dlls/win32/winmm/mmdeviceimp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MMDeviceImp::MMDeviceImp @0x0418d2d0 ---
/* source: mmdeviceimp */

void MMDeviceImp__MMDeviceImp(undefined4 *param_1,int param_2,undefined1 param_3)

{
  IUnknownImp__IUnknownImp(param_1,param_1 + 4);
  *param_1 = &PTR_FUN_0434c9e8;
  param_1[4] = &PTR_FUN_04410b80;
  param_1[5] = param_1;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = param_3;
  param_1[1] = "MMDeviceImp";
  if (param_2 != 0) {
    return;
  }
                    /* try { // try from 0418d34f to 0418d353 has its CatchHandler @ 0418d361 */
  FUN_0400a810("deviceId",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/mmdeviceimp.cpp"
               ,0x30,"MMDeviceImp::MMDeviceImp(eON_AudioDevice, bool)");
  return;
}

