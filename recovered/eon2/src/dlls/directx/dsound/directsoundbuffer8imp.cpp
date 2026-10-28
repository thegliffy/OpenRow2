// Recovered source: eon2/src/dlls/directx/dsound/directsoundbuffer8imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DirectSoundBuffer8Imp::Lock @0x040fe400 ---
/* source: directsoundbuffer8imp */

undefined4
directsoundbuffer8imp_040fe400
          (int param_1,uint param_2,uint param_3,int *param_4,uint *param_5,int *param_6,
          int *param_7,uint param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_8;
  uVar6 = param_3;
  if ((param_5 == (uint *)0x0) || (param_4 == (int *)0x0)) {
    uVar3 = 0x80070057;
  }
  else {
    uVar2 = FUN_040f9db0(*(undefined4 *)(param_1 + 0x18));
    if (((uVar5 & 2) != 0) &&
       (cVar1 = FUN_040fa0c0(*(undefined4 *)(param_1 + 0x14)), uVar6 = uVar2, cVar1 != '\0')) {
      return 0x88780032;
    }
    uVar3 = 0x80070057;
    if (uVar6 != 0) {
      uVar5 = uVar5 & 1;
      if (uVar5 != 0) {
        FUN_040fa0f0(*(undefined4 *)(param_1 + 0x14),0,&param_2);
      }
      if (param_2 < uVar2) {
        iVar4 = FUN_040f9950(*(undefined4 *)(param_1 + 0x18));
        if (iVar4 == 0) {
          uVar3 = 0x8007000e;
        }
        else if (uVar2 < uVar6 + param_2) {
          *param_4 = iVar4 + param_2;
          *param_5 = uVar2 - param_2;
          if (param_6 != (int *)0x0) {
            *param_6 = iVar4;
          }
          uVar3 = 0;
          if (param_7 != (int *)0x0) {
            if (param_6 == (int *)0x0) {
              *param_7 = 0;
            }
            else {
              *param_7 = uVar6 - (uVar2 - param_2);
            }
          }
        }
        else {
          *param_4 = param_2 + iVar4;
          *param_5 = uVar6;
          if (param_6 != (int *)0x0) {
            *param_6 = 0;
          }
          uVar3 = 0;
          if (param_7 != (int *)0x0) {
            *param_7 = 0;
            return uVar3;
          }
        }
      }
      else {
        uVar3 = 0x80070057;
        if (uVar5 != 0) {
          FUN_0400a810("!( dwFlags & 0x00000001 )",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/directsoundbuffer8imp.cpp"
                       ,0x10d,
                       "virtual HRESULT DirectSoundBuffer8Imp::Lock(DWORD, DWORD, void**, LPDWORD, void**, LPDWORD, DWORD)"
                      );
          return 0x80070057;
        }
      }
    }
  }
  return uVar3;
}

