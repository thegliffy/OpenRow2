// Recovered source: eon2/src/dlls/win32/kernel32/processor.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_RaiseException @0x04144f10 ---
/* source: processor */

void eON_RaiseException(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *__src;
  size_t sVar3;
  uint uVar4;
  char *__s;
  char local_170 [256];
  int local_70;
  uint local_6c;
  undefined4 local_68;
  code *local_64;
  uint local_60;
  undefined1 local_5c [68];
  undefined4 *local_18;
  
  __src = param_4;
  uVar2 = param_3;
  uVar4 = param_2;
  iVar1 = param_1;
  local_18 = &param_1;
  if (param_1 == 0x406d1388) {
    if ((param_4 == (int *)0x0) || ((param_3 & 0x3fffffff) != 4)) {
      FUN_0402cd10(5,
                   "Unknown MSVC exception triggered by the game (lpArguments %p, nNumberOfArguments %u, dwExceptionFlags %#x) - ignoring it."
                   ,param_4,param_3,param_2);
    }
    else if (*param_4 == 0x1000) {
      FUN_0402cd10(5,"MSVC THREADNAME_INFO - thread %#x name \'%s\', flags %#x",param_4[2],
                   param_4[1],param_4[3]);
      if (__src[2] == -1) {
        __s = (char *)__src[1];
        sVar3 = strlen(__s);
        if (0xef < sVar3) {
          FUN_0400a810("strlen(tn->szName) < 240",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/processor.cpp"
                       ,0x93,"void eON_RaiseException(DWORD, DWORD, DWORD, const ULONG_PTR*)");
          __s = (char *)__src[1];
        }
        sprintf(local_170,"G.%s",__s);
        eON_SetThreadName(local_170);
      }
    }
    else {
      FUN_0402cd10(5,"MSVC THREADNAME_INFO - dwType unknown value %#x! Ignoring it.",*param_4);
    }
  }
  else {
    FUN_0402cd10(5,"RaiseException() called!");
    if (iVar1 == -0x1f928c9d) {
      FUN_0402cd10(5,"\texception is C++ exception.");
      if (__src[2] == 0) {
        FUN_0402cd10(5,"\tthrown object is NULL");
      }
      else {
        FUN_0402cd10(5,"\tthe class of thrown object seems to be \'%s\'",
                     *(int *)(*(int *)(*(int *)(__src[2] + 0xc) + 4) + 4) + 8);
      }
    }
    local_6c = uVar4 & 1;
    local_68 = 0;
    local_64 = eON_RaiseException;
    local_70 = iVar1;
    if ((__src == (int *)0x0) || (uVar2 == 0)) {
      local_60 = 0;
    }
    else {
      uVar4 = 0xf;
      if (uVar2 < 0x10) {
        uVar4 = uVar2;
      }
      memcpy(local_5c,__src,uVar4 * 4);
      local_60 = uVar4;
    }
    eON_RtlRaiseException(&local_70);
  }
  return;
}

// --- seh_RaiseException @0x041451e0 ---
/* source: processor */

int seh_RaiseException(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    if (*param_1 == -0x7ffffffd) {
      FUN_04144de0(param_2);
    }
    iVar1 = FUN_04159b30(param_1,param_2);
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = Exception_DispatchHandlers(param_1,param_2);
      if (iVar2 == -0x3ffffebc) goto LAB_04145230;
    }
    return iVar2;
  }
LAB_04145230:
  if ((param_1[1] & 8U) == 0) {
    if (*param_1 == -0x3fffffdb) {
      FUN_0402cd10(0xf,"Process attempted to continue execution after noncontinuable exception.\n");
    }
    else {
      FUN_0402cd10(0xf,"Unhandled exception code %x flags %x addr %p\n",*param_1,param_1[1],
                   param_1[3]);
    }
  }
  else {
    FUN_0402cd10(0xf,"Exception frame is not in stack limits => unable to dispatch exception.\n");
  }
  FUN_0400a810("false",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/processor.cpp"
               ,0x55,"NTSTATUS seh_RaiseException(EXCEPTION_RECORD*, CONTEXT*, WINBOOL)");
  return 0;
}

// --- attached helper FUN_001446f0 @0x041446f0 (call-graph exclusive to this TU) ---
void FUN_041446f0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xb8);
  iVar1 = seh_RaiseException(param_1,param_2,1);
  if (iVar1 != 0) {
    FUN_041451a0(param_1,iVar1);
  }
  return;
}

