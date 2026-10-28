// Recovered source: eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DQuery9Imp::TestQuery @0x040a5b60 ---
/* source: direct3dquery9imp */

void Direct3DQuery9Imp__TestQuery(int param_1)

{
  int iVar1;
  int local_14;
  undefined4 local_10 [2];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 8) {
    if (iVar1 == 9) {
      if (*(int *)(param_1 + 0x44) == 0) {
        FUN_0400a810("mQuery",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                     ,0x125,"void Direct3DQuery9Imp::TestQuery()");
      }
      local_14 = -1;
      (*DAT_0451ed08)(*(undefined4 *)(param_1 + 0x44),0x8867,&local_14);
      if (local_14 == 0) {
        return;
      }
      (*DAT_0451ed04)(*(undefined4 *)(param_1 + 0x44),0x8866,local_10);
      *(undefined4 *)(param_1 + 0x48) = local_10[0];
      FUN_0409d570(*(int *)(param_1 + 0x1c) + 0x40,*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x44) = 0;
      return;
    }
    if (iVar1 != 5) {
      FUN_0402cd10(10,"Query type %u wanted in TestQuery()!",iVar1);
      return;
    }
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                 ,0x11a,"void Direct3DQuery9Imp::TestQuery()");
  }
  if ((*(char *)(param_1 + 0x38) == '\0') &&
     ((*(int *)(param_1 + 0x30) != 0 || (*(int *)(param_1 + 0x34) != 0)))) {
    Direct3DDevice9Imp__Fence_IsFinalized(*(int *)(param_1 + 0x1c) + 0x40,param_1 + 0x2c);
    return;
  }
  return;
}

// --- d3dstructs_040a4ea0 @0x040a4ea0 ---
/* source: d3dstructs, direct3dquery9imp */

void d3dstructs_040a4ea0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[7];
  *param_1 = &PTR_d3dstructs_040a4ea0_042f7a08;
  if (iVar1 != 0) {
    if ((param_1[0xc] != 0) || (param_1[0xd] != 0)) {
                    /* try { // try from 040a4ecf to 040a4f22 has its CatchHandler @ 040a4fae */
      FUN_0409d0d0(iVar1 + 0x40,param_1 + 0xb);
      if ((param_1[0xc] != 0) || (param_1[0xd] != 0)) {
        FUN_0400a810("!( FenceARB || FenceAPPLE )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                     ,0x20,"void eONFence::Clear(Direct3DDevice9Imp*)");
      }
      iVar1 = param_1[7];
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    FUN_040ba490(iVar1 + 0x40,param_1[3],param_1[0x11]);
  }
  if ((param_1[0xc] == 0) && (param_1[0xd] == 0)) {
    FUN_04030320();
    return;
  }
                    /* try { // try from 040a4f49 to 040a4f4d has its CatchHandler @ 040a4f98 */
  FUN_0400a810("!FenceARB && !FenceAPPLE",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h",
               299,"eONFence::~eONFence()");
  FUN_04030320();
  return;
}

// --- direct3dquery9imp_040a5890 @0x040a5890 ---
/* source: direct3dquery9imp */

void direct3dquery9imp_040a5890(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) || (*(int *)(param_1 + 8) != 0)) {
    FUN_0409d0d0(param_2,param_1);
    if ((*(int *)(param_1 + 4) != 0) || (*(int *)(param_1 + 8) != 0)) {
      FUN_0400a810("!( FenceARB || FenceAPPLE )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                   ,0x20,"void eONFence::Clear(Direct3DDevice9Imp*)");
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}

// --- direct3dquery9imp_040a5cc0 @0x040a5cc0 ---
/* source: direct3dquery9imp */

void direct3dquery9imp_040a5cc0(int param_1)

{
  undefined4 local_10 [2];
  
  if (*(int *)(param_1 + 0x20) == 8) {
    if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
      FUN_0409d0d0(*(int *)(param_1 + 0x1c) + 0x40,param_1 + 0x2c);
      if ((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x34) != 0)) {
        FUN_0400a810("!( FenceARB || FenceAPPLE )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                     ,0x20,"void eONFence::Clear(Direct3DDevice9Imp*)");
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x20) == 9) && (*(int *)(param_1 + 0x44) != 0)) {
    local_10[0] = *(undefined4 *)(param_1 + 0x44);
    (*DAT_0451ed24)(1,local_10);
    *(undefined4 *)(param_1 + 0x44) = 0;
    return;
  }
  return;
}

// --- attached helper FUN_000a1610 @0x040a1610 (call-graph exclusive to this TU) ---
void FUN_040a1610(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042f7088;
  d3dstructs_040a4ea0();
  return;
}

// --- attached helper FUN_000a2b00 @0x040a2b00 (call-graph exclusive to this TU) ---
void FUN_040a2b00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042f7088;
  d3dstructs_040a4ea0(param_1 + 1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_000a4ff0 @0x040a4ff0 (call-graph exclusive to this TU) ---
void FUN_040a4ff0(void *param_1)

{
  d3dstructs_040a4ea0(param_1);
  operator_delete(param_1);
  return;
}

