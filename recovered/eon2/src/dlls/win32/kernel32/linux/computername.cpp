// Recovered source: eon2/src/dlls/win32/kernel32/linux/computername.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_GetComputerNameExW @0x04139aa0 ---
/* source: computername */

undefined4 eON_GetComputerNameExW(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  void *__ptr;
  size_t local_24 [3];
  undefined4 *local_18;
  
  puVar4 = param_3;
  iVar3 = param_2;
  uVar2 = param_1;
  local_18 = &param_1;
  if (param_3 == (uint *)0x0) {
    eON_SetLastError(0x57);
    uVar7 = 0;
  }
  else {
    local_24[0] = 0;
    uVar5 = eON_GetLastError();
    iVar6 = GetComputerNameExA(uVar2,0,local_24);
    uVar7 = 0;
    if (iVar6 == 0) {
      iVar6 = eON_GetLastError();
      uVar7 = 0;
      if (iVar6 == 0xea) {
        eON_SetLastError(uVar5);
        if (local_24[0] == 0) {
          FUN_0400a810("nameLength",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/linux/computername.cpp"
                       ,0x7a,"WINBOOL eON_GetComputerNameExW(COMPUTER_NAME_FORMAT, LPWSTR, LPDWORD)"
                      );
        }
        __ptr = malloc(local_24[0]);
        iVar6 = GetComputerNameExA(uVar2,__ptr,local_24);
        if (iVar6 == 0) {
          free(__ptr);
          uVar7 = 0;
        }
        else {
          iVar6 = eON_MultiByteToWideChar(0,0,__ptr,0xffffffff,0,0);
          uVar1 = iVar6 * 2;
          if ((iVar3 == 0) || (*puVar4 < uVar1)) {
            *puVar4 = uVar1;
            free(__ptr);
            eON_SetLastError(0xea);
            uVar7 = 0;
          }
          else {
            eON_MultiByteToWideChar(0,0,__ptr,0xffffffff,iVar3,*puVar4);
            *puVar4 = uVar1 - 2;
            free(__ptr);
            uVar7 = 1;
          }
        }
      }
    }
  }
  return uVar7;
}

