// Recovered source: eon2/src/dlls/directx/dinput8/directinput8imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DirectInputImp::ConfigureDevices @0x040f1480 ---
/* source: directinput8imp */

undefined4 DirectInputImp__ConfigureDevices(int param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_0400a810("!mEmulateDirectInput7",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinput8imp.cpp"
                 ,0x1b9,
                 "virtual HRESULT DirectInputImp::ConfigureDevices(LPDICONFIGUREDEVICESCALLBACK, LPVOID, DWORD, LPVOID)"
                );
  }
  return 0;
}

// --- DirectInputImp::CreateDeviceEx @0x040f1440 ---
/* source: directinput8imp */

undefined4 DirectInputImp__CreateDeviceEx(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_0400a810("mEmulateDirectInput7",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinput8imp.cpp"
                 ,0x1c1,
                 "virtual HRESULT DirectInputImp::CreateDeviceEx(REFGUID, EON_REFIID, void**, LPUNKNOWN)"
                );
  }
  return 0;
}

// --- DirectInputImp::EnumDevicesBySemantics @0x040f14c0 ---
/* source: directinput8imp */

undefined4 DirectInputImp__EnumDevicesBySemantics(int param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_0400a810("!mEmulateDirectInput7",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinput8imp.cpp"
                 ,0x1b1,
                 "virtual HRESULT DirectInputImp::EnumDevicesBySemantics(LPCVOID, LPVOID, LPVOID, LPVOID, DWORD)"
                );
  }
  return 0;
}

