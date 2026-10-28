// Recovered source: eon2/src/core/vpfs/AES.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AES::AES @0x0403a940 ---
/* source: AES */

void AES__AES(void)

{
  if (DAT_04415a20 == '\0') {
    DAT_04415a20 = FUN_04030d50();
    if (DAT_04415a20 == '\0') {
      FUN_0400a810("tablesInitialized",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/AES.cpp",0x3b4,
                   "AES::AES()");
      return;
    }
  }
  return;
}

// --- AES::Decrypt @0x0403a800 ---
/* source: AES */

void AES__Decrypt(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_60;
  byte local_5c [76];
  
  if (param_4 != 0) {
    iVar1 = *param_1;
    iVar3 = iVar1 * 4;
    if (param_5 == 0) {
      do {
        FUN_04036430(param_1,param_2,param_3);
        param_2 = param_2 + iVar3;
        param_3 = param_3 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    else {
      if (param_5 != 1) {
        FUN_0400a810("false && \"Unknown mode!\"",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/AES.cpp",0x3ab,
                     "void AES::Decrypt(const uint8_t*, uint8_t*, uint32_t, AES::BlockMode)");
        return;
      }
      bzero(local_5c,0x40);
      FUN_04036430(param_1,param_2,param_3);
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          *(byte *)(param_3 + iVar2) = *(byte *)(param_3 + iVar2) ^ local_5c[iVar2];
          iVar2 = iVar2 + 1;
        } while (iVar3 != iVar2);
        param_3 = param_3 + iVar3;
      }
      local_60 = param_4 + -1;
      if (local_60 != 0) {
        do {
          param_2 = param_2 + iVar3;
          FUN_04036430(param_1,param_2,param_3);
          if (iVar3 != 0) {
            iVar2 = 0;
            do {
              *(byte *)(param_3 + iVar2) =
                   *(byte *)(param_3 + iVar2) ^ *(byte *)(param_2 + iVar1 * -4 + iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar3 != iVar2);
            param_3 = param_3 + iVar3;
          }
          local_60 = local_60 + -1;
        } while (local_60 != 0);
        return;
      }
    }
  }
  return;
}

// --- AES::Encrypt @0x040359c0 ---
/* source: AES */

void AES__Encrypt(int *param_1,int param_2,void *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  size_t sVar2;
  size_t __n;
  byte local_5c [76];
  
  if (param_4 != 0) {
    __n = *param_1 * 4;
    if (param_5 != 0) {
      if (param_5 == 1) {
        bzero(local_5c,0x40);
        do {
          if (__n != 0) {
            sVar2 = 0;
            do {
              pbVar1 = local_5c + sVar2;
              *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + sVar2);
              sVar2 = sVar2 + 1;
            } while (__n != sVar2);
            param_2 = param_2 + __n;
          }
          FUN_04031630(param_1,local_5c,param_3);
          memcpy(local_5c,param_3,__n);
          param_3 = (void *)((int)param_3 + __n);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
      FUN_0400a810("false && \"Unknown mode!\"",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/AES.cpp",0x308,
                   "void AES::Encrypt(const uint8_t*, uint8_t*, uint32_t, AES::BlockMode)");
      return;
    }
    do {
      FUN_04031630(param_1,param_2,param_3);
      param_2 = param_2 + __n;
      param_3 = (void *)((int)param_3 + __n);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// --- AES::KeyExpansion @0x040312e0 ---
/* source: AES */

void AES__KeyExpansion(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_30;
  uint3 local_20;
  
  iVar3 = param_1[1];
  if (iVar3 < 1) {
    FUN_0400a810("Nk > 0","/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/AES.cpp",
                 0x253,"void AES::KeyExpansion(const uint8_t*)");
    iVar3 = param_1[1];
  }
  iVar2 = iVar3 * 4;
  local_30 = iVar3;
  if (iVar3 < 7) {
    if (0 < iVar2) {
      iVar1 = 0;
      do {
        *(undefined1 *)((int)param_1 + iVar1 + 0xc) = *(undefined1 *)(param_2 + iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 != iVar2);
    }
    iVar2 = (param_1[2] + 1) * *param_1;
    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
      while( true ) {
        uVar4 = param_1[iVar3 + 2];
        if (iVar3 % local_30 == 0) {
          local_20 = (uint3)(uVar4 >> 8);
          uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_04411920)[uVar4 & 0xff],
                                             (&DAT_04411920)[local_20 >> 0x10]),
                                    (&DAT_04411920)[(local_20 & 0xff00) >> 8]),
                           (&DAT_04411920)[local_20 & 0xff]) ^
                  *(uint *)(&DAT_04411820 + (iVar3 / local_30) * 4);
        }
        param_1[iVar3 + 3] = uVar4 ^ param_1[(iVar3 - local_30) + 3];
        iVar3 = iVar3 + 1;
        iVar2 = (param_1[2] + 1) * *param_1;
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        local_30 = param_1[1];
      }
    }
  }
  else {
    if (0 < iVar2) {
      iVar1 = 0;
      do {
        *(undefined1 *)((int)param_1 + iVar1 + 0xc) = *(undefined1 *)(param_2 + iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 != iVar2);
    }
    iVar2 = (param_1[2] + 1) * *param_1;
    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
      while( true ) {
        uVar4 = param_1[iVar3 + 2];
        if (iVar3 % local_30 == 0) {
          local_20 = (uint3)(uVar4 >> 8);
          uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_04411920)[uVar4 & 0xff],
                                             (&DAT_04411920)[local_20 >> 0x10]),
                                    (&DAT_04411920)[(local_20 & 0xff00) >> 8]),
                           (&DAT_04411920)[local_20 & 0xff]) ^
                  *(uint *)(&DAT_04411820 + (iVar3 / local_30) * 4);
        }
        else if (iVar3 % local_30 == 4) {
          uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_04411920)[uVar4 >> 0x18],
                                             (&DAT_04411920)[uVar4 >> 0x10 & 0xff]),
                                    (&DAT_04411920)[uVar4 >> 8 & 0xff]),
                           (&DAT_04411920)[uVar4 & 0xff]);
        }
        param_1[iVar3 + 3] = uVar4 ^ param_1[(iVar3 - local_30) + 3];
        iVar3 = iVar3 + 1;
        iVar2 = (param_1[2] + 1) * *param_1;
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        local_30 = param_1[1];
      }
    }
  }
  return;
}

