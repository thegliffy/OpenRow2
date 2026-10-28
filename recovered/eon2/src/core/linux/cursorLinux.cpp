// Recovered source: eon2/src/core/linux/cursorLinux.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_CursorLinux::CreateFromARGBData @0x04015720 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: cursorLinux */

undefined4
eON_CursorLinux__CreateFromARGBData
          (int *param_1,byte *param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
          undefined4 param_7)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  float fVar10;
  int local_28;
  byte *local_24;
  int local_20;
  
  FUN_0400e440(param_1);
  (**(code **)(*param_1 + 0x1c))(param_1,1);
  if ((param_4 & 7) != 0) {
    FUN_0400a810("width % 8 == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x8b,
                 "virtual bool eON_CursorLinux::CreateFromARGBData(const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  iVar5 = SDL_CreateRGBSurface(0,param_4,param_5,0x20,0xff0000,0xff00,0xff,0xff000000);
  if (iVar5 == 0) {
    FUN_0400a810("surface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x94,
                 "virtual bool eON_CursorLinux::CreateFromARGBData(const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  iVar6 = SDL_LockSurface(iVar5);
  if (iVar6 != 0) {
    FUN_0400a810("SDL_LockSurface( surface ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x96,
                 "virtual bool eON_CursorLinux::CreateFromARGBData(const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  fVar4 = _DAT_042dc5a0;
  fVar3 = DAT_042dbf34;
  local_28 = *(int *)(iVar5 + 0x14);
  if (param_5 != 0) {
    local_20 = 0;
    local_24 = param_2;
    do {
      if (param_4 != 0) {
        uVar8 = 0;
        iVar6 = local_28 + 4;
        pbVar9 = local_24;
        do {
          while (pbVar9[3] == 0) {
            uVar8 = uVar8 + 1;
            *(undefined1 *)(iVar6 + -4) = 0;
            pbVar9 = pbVar9 + 4;
            *(undefined1 *)(iVar6 + -3) = 0;
            *(undefined1 *)(iVar6 + -2) = 0;
            *(undefined1 *)(iVar6 + -1) = 0;
            iVar6 = iVar6 + 4;
            if (uVar8 == param_4) goto LAB_040158d6;
          }
          uVar8 = uVar8 + 1;
          fVar10 = (float)pbVar9[3] / fVar4;
          *(char *)(iVar6 + -4) = (char)(int)((fVar3 * 0.0 + (float)pbVar9[2]) * fVar10);
          *(char *)(iVar6 + -3) = (char)(int)((fVar3 * 0.0 + (float)pbVar9[1]) * fVar10);
          *(char *)(iVar6 + -2) = (char)(int)((fVar3 * 0.0 + (float)*pbVar9) * fVar10);
          pbVar1 = pbVar9 + 3;
          pbVar9 = pbVar9 + 4;
          *(byte *)(iVar6 + -1) = *pbVar1;
          iVar6 = iVar6 + 4;
        } while (uVar8 != param_4);
LAB_040158d6:
        local_28 = local_28 + param_4 * 4;
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + param_3;
    } while (local_20 != param_5);
  }
  SDL_UnlockSurface(iVar5);
  puVar2 = (undefined4 *)param_1[0x10];
  uVar7 = SDL_CreateColorCursor(iVar5,param_6,param_7);
  *puVar2 = uVar7;
  SDL_FreeSurface(iVar5);
  return CONCAT31((int3)((uint)param_1[0x10] >> 8),*(int *)param_1[0x10] != 0);
}

// --- eON_CursorLinux::CreateFromBitPlanes @0x04015140 ---
/* source: cursorLinux */

undefined4
eON_CursorLinux__CreateFromBitPlanes
          (int *param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
          undefined4 param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int local_2c;
  uint local_28;
  int local_24;
  
  FUN_0400e440(param_1);
  (**(code **)(*param_1 + 0x1c))(param_1,1);
  if ((param_4 & 7) != 0) {
    FUN_0400a810("width % 8 == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x135,
                 "virtual bool eON_CursorLinux::CreateFromBitPlanes(const void*, const void*, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  iVar3 = SDL_CreateRGBSurface(0,param_4,param_5,0x20,0xff0000,0xff00,0xff,0xff000000);
  if (iVar3 == 0) {
    FUN_0400a810("surface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x139,
                 "virtual bool eON_CursorLinux::CreateFromBitPlanes(const void*, const void*, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  iVar4 = SDL_LockSurface(iVar3);
  if (iVar4 != 0) {
    FUN_0400a810("SDL_LockSurface( surface ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0x13b,
                 "virtual bool eON_CursorLinux::CreateFromBitPlanes(const void*, const void*, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  local_2c = *(int *)(iVar3 + 0x14);
  if (param_5 != 0) {
    local_28 = 0;
    local_24 = 0;
    do {
      if (param_4 != 0) {
        uVar7 = 0;
        iVar4 = local_2c + 4;
        do {
          while( true ) {
            uVar9 = uVar7 >> 3;
            uVar6 = ~uVar7;
            if ((*(byte *)(param_2 + uVar9 + (local_28 >> 3)) >> (uVar6 & 7) & 1) != 0) break;
            uVar7 = uVar7 + 1;
            bVar1 = *(byte *)(uVar9 + param_3 + local_24 * 4);
            *(undefined1 *)(iVar4 + -1) = 0xff;
            cVar8 = -((byte)((int)(uint)bVar1 >> (sbyte)(uVar6 & 7)) & 1);
            *(char *)(iVar4 + -4) = cVar8;
            *(char *)(iVar4 + -3) = cVar8;
            *(char *)(iVar4 + -2) = cVar8;
            iVar4 = iVar4 + 4;
            if (uVar7 == param_4) goto LAB_0401527e;
          }
          uVar7 = uVar7 + 1;
          *(undefined1 *)(iVar4 + -4) = 0;
          *(undefined1 *)(iVar4 + -3) = 0;
          *(undefined1 *)(iVar4 + -2) = 0;
          *(undefined1 *)(iVar4 + -1) = 0;
          iVar4 = iVar4 + 4;
        } while (uVar7 != param_4);
LAB_0401527e:
        local_2c = local_2c + param_4 * 4;
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + param_4;
    } while (local_24 != param_5);
  }
  SDL_UnlockSurface(iVar3);
  puVar2 = (undefined4 *)param_1[0x10];
  uVar5 = SDL_CreateColorCursor(iVar3,param_6,param_7);
  *puVar2 = uVar5;
  SDL_FreeSurface(iVar3);
  return CONCAT31((int3)((uint)*(int *)param_1[0x10] >> 8),*(int *)param_1[0x10] != 0);
}

// --- eON_CursorLinux::CreateFromHIcon @0x04015370 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: cursorLinux */

bool eON_CursorLinux__CreateFromHIcon(int *param_1,short *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  int local_24;
  byte local_20;
  
  FUN_0400e440(param_1);
  (**(code **)(*param_1 + 0x1c))(param_1,1);
  uVar2 = param_2[2];
  if ((uVar2 & 7) != 0) {
    FUN_0400a810("hdr->Width % 8 == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0xd4,"virtual int32_t eON_CursorLinux::CreateFromHIcon(HICON)");
    uVar2 = param_2[2];
  }
  iVar6 = SDL_CreateRGBSurface(0,uVar2,param_2[3],0x20,0xff0000,0xff00,0xff,0xff000000);
  if (iVar6 == 0) {
    FUN_0400a810("surface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0xd8,"virtual int32_t eON_CursorLinux::CreateFromHIcon(HICON)");
  }
  iVar7 = SDL_LockSurface(iVar6);
  if (iVar7 != 0) {
    FUN_0400a810("SDL_LockSurface( surface ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",
                 0xda,"virtual int32_t eON_CursorLinux::CreateFromHIcon(HICON)");
  }
  fVar5 = _DAT_042dc5a0;
  fVar4 = DAT_042dbf34;
  uVar12 = (uint)(ushort)param_2[2];
  uVar8 = (uint)(ushort)param_2[3];
  iVar14 = ((int)(uVar12 + 0xf) >> 4) * 2 * uVar8;
  pcVar9 = *(char **)(iVar6 + 0x14);
  iVar7 = iVar14 + 0xc;
joined_r0x04015441:
  do {
    do {
      uVar8 = uVar8 - 1;
      if (uVar8 == 0xffffffff) {
        SDL_UnlockSurface(iVar6);
        puVar3 = (undefined4 *)param_1[0x10];
        uVar10 = SDL_CreateColorCursor(iVar6,(int)*param_2,(int)param_2[1]);
        *puVar3 = uVar10;
        SDL_FreeSurface(iVar6);
        param_1[0xd] = (int)param_2;
        return *(int *)param_1[0x10] != 0;
      }
      uVar15 = 0;
      local_24 = 0;
    } while (uVar12 == 0);
    do {
      while( true ) {
        iVar13 = uVar12 * uVar8;
        uVar12 = 7 - (uVar15 & 7);
        if (iVar13 < 0) {
          iVar13 = iVar13 + 7;
        }
        if ((*(byte *)((int)param_2 + (iVar13 >> 3) + ((int)uVar15 >> 3) + 0xc) >> (uVar12 & 0x1f) &
            1) == 0) break;
        *pcVar9 = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + 4;
LAB_0401547a:
        uVar12 = (uint)(ushort)param_2[2];
        uVar15 = uVar15 + 1;
        local_24 = local_24 + 3;
        if ((int)uVar12 <= (int)uVar15) goto joined_r0x04015441;
      }
      cVar11 = *(char *)((int)param_2 + 0xb);
      if (cVar11 == '\x18') {
        iVar13 = (ushort)param_2[4] * uVar8 + local_24;
        *pcVar9 = *(char *)((int)param_2 + iVar13 + iVar7);
        pcVar9[1] = *(char *)((int)param_2 + iVar13 + iVar14 + 0xd);
        pcVar9[2] = *(char *)((int)param_2 + iVar13 + iVar14 + 0xe);
        pcVar9 = pcVar9 + 3;
      }
      else if (cVar11 == ' ') {
        iVar13 = (ushort)param_2[4] * uVar8 + uVar15 * 4;
        pbVar1 = (byte *)((int)param_2 + iVar13 + iVar14 + 0xf);
        fVar16 = (float)*pbVar1 / fVar5;
        *pcVar9 = (char)(int)((fVar4 * 0.0 + (float)*(byte *)((int)param_2 + iVar13 + iVar7)) *
                             fVar16);
        pcVar9[1] = (char)(int)((fVar4 * 0.0 +
                                (float)*(byte *)((int)param_2 + iVar13 + iVar14 + 0xd)) * fVar16);
        pcVar9[2] = (char)(int)((fVar4 * 0.0 +
                                (float)*(byte *)((int)param_2 + iVar13 + iVar14 + 0xe)) * fVar16);
        pcVar9[3] = *pbVar1;
        pcVar9 = pcVar9 + 4;
      }
      else if (cVar11 == '\x01') {
        local_20 = (byte)uVar12;
        cVar11 = -((byte)((int)(uint)*(byte *)((int)param_2 +
                                              (ushort)param_2[4] * uVar8 +
                                              ((int)uVar15 >> 3) + iVar7) >> (local_20 & 0x1f)) & 1)
        ;
        *pcVar9 = cVar11;
        pcVar9[1] = cVar11;
        pcVar9[2] = cVar11;
        pcVar9 = pcVar9 + 3;
      }
      else {
        *pcVar9 = -1;
        pcVar9[1] = -1;
        pcVar9[2] = -1;
        pcVar9 = pcVar9 + 3;
      }
      if (*(char *)((int)param_2 + 0xb) == ' ') goto LAB_0401547a;
      local_24 = local_24 + 3;
      *pcVar9 = -1;
      uVar15 = uVar15 + 1;
      uVar12 = (uint)(ushort)param_2[2];
      pcVar9 = pcVar9 + 1;
    } while ((int)uVar15 < (int)uVar12);
  } while( true );
}

// --- eON_CursorLinux::LoadCursorImageFromOpenFile @0x04015ba0 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: cursorLinux */

undefined4
eON_CursorLinux__LoadCursorImageFromOpenFile
          (int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  ushort uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  byte *pbVar25;
  float fVar26;
  uint auStackY_10c [15];
  undefined4 uStack_c0;
  uint local_bc;
  uint local_7c;
  float local_78;
  float local_74;
  byte *local_70;
  int local_6c;
  uint local_60;
  uint local_5c;
  uint local_58;
  byte *local_54;
  uint local_50;
  int local_48;
  byte *local_40;
  byte *local_3c;
  void *local_38;
  byte *local_34;
  uint local_30;
  short local_26;
  short local_24;
  ushort local_22;
  int local_20;
  
  iVar7 = FUN_04132110();
  local_bc = param_2;
  uStack_c0 = 0x4015bfb;
  iVar8 = eON_ReadFile();
  puVar23 = (uint *)&stack0xffffff30;
  if (iVar8 == 0) {
    return 0;
  }
  if (local_20 != 6) {
    return 0;
  }
  if (local_26 != 0) {
    return 0;
  }
  if (local_24 != 2) {
    return 0;
  }
  if (0xff < (ushort)(local_22 - 1)) {
    return 0;
  }
  uVar24 = (uint)local_22;
  puVar9 = calloc(1,uVar24 << 2);
  iVar8 = 0;
  do {
    pvVar10 = operator_new(0x10);
    puVar9[iVar8] = pvVar10;
    cVar6 = FUN_0400ee20();
    if (cVar6 == '\0') {
      uVar20 = 0;
      do {
        uVar24 = (uint)uVar20;
        uVar20 = uVar20 + 1;
        operator_delete((void *)puVar9[uVar24]);
      } while (uVar20 <= (ushort)iVar8);
      goto LAB_040160de;
    }
    iVar8 = iVar8 + 1;
  } while ((ushort)iVar8 < local_22);
  iVar8 = 0;
  piVar11 = calloc(1,uVar24 << 2);
  puVar5 = (uint *)&stack0xffffff30;
  while( true ) {
    puVar22 = puVar5;
    *puVar22 = 0x34;
    puVar22[-1] = 0x4015cc0;
    pvVar10 = operator_new(*puVar22);
    *(undefined4 *)((int)pvVar10 + 0x28) = 0;
    *(undefined4 *)((int)pvVar10 + 0x2c) = 0;
    *(undefined4 *)((int)pvVar10 + 0x30) = 0;
    piVar11[iVar8] = (int)pvVar10;
    puVar22[3] = 0;
    puVar22[2] = 0;
    iVar13 = *(int *)(puVar9[iVar8] + 0xc);
    *puVar22 = param_2;
    puVar22[1] = iVar13 + iVar7;
    puVar22[-1] = 0x4015d05;
    FUN_04132110();
    puVar23 = puVar22 + -4;
    puVar22[-3] = param_2;
    puVar22[-4] = (uint)pvVar10;
    puVar22[-5] = 0x4015d14;
    cVar6 = eON_Cursor__CursorData__FillInFromFile();
    fVar3 = DAT_042dbf34;
    if (cVar6 == '\0') break;
    iVar8 = iVar8 + 1;
    puVar5 = puVar22 + -4;
    if (local_22 <= (ushort)iVar8) {
      pbVar19 = (byte *)*puVar9;
      local_3c = (byte *)*piVar11;
      local_7c = (uint)*pbVar19;
      uVar21 = (uint)pbVar19[1];
      pvVar10 = *(void **)((int)local_3c + 0x30);
      local_34 = *(byte **)((int)local_3c + 0x2c);
      local_74 = (float)*(ushort *)(pbVar19 + 4) + DAT_042dbf34 * 0.0;
      local_78 = (float)*(ushort *)(pbVar19 + 6) + DAT_042dbf34 * 0.0;
      uVar14 = (int)local_7c >> 3;
      local_5c = uVar21;
      local_30 = local_7c;
      local_70 = local_34;
      local_60 = uVar14;
      local_38 = pvVar10;
      if (((param_3 != local_7c) && (param_3 != 0)) || ((param_4 != uVar21 && (param_4 != 0)))) {
        if (*(ushort *)((int)local_3c + 0xe) == 0x20) {
          local_30 = param_3;
          if (param_3 == 0) {
            local_30 = local_7c;
          }
          local_5c = param_4;
          if (param_4 == 0) {
            local_5c = uVar21;
          }
          if ((int)local_7c % (int)local_30 != 0) {
            puVar22[-1] = (uint)
                          "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
            ;
            puVar22[-2] = 0x1af;
            puVar22[-3] = (uint)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
            ;
            puVar22[-4] = (uint)"cursorWidth % width == 0";
            puVar22[-5] = 0x4016948;
            FUN_0400a810();
          }
          if ((int)uVar21 % (int)local_5c != 0) {
            puVar22[-1] = (uint)
                          "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
            ;
            puVar22[-2] = 0x1b0;
            puVar22[-3] = (uint)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
            ;
            puVar22[-4] = (uint)"cursorHeight % height == 0";
            puVar22[-5] = 0x401690f;
            FUN_0400a810();
          }
          iVar7 = (int)local_7c / (int)local_30;
          iVar8 = (int)uVar21 / (int)local_5c;
          local_74 = local_74 / (float)iVar7;
          local_78 = local_78 / (float)iVar8;
          puVar22[-4] = local_30 * local_5c * 4;
          puVar22[-5] = 0x4016372;
          local_70 = malloc(puVar22[-4]);
          if (0 < (int)local_5c) {
            local_38 = (void *)0x0;
            pbVar19 = local_70;
            do {
              if (0 < (int)local_30) {
                uVar21 = 0;
                pbVar25 = local_34;
                do {
                  uVar12 = *(undefined4 *)pbVar25;
                  pbVar25 = pbVar25 + iVar7 * 4;
                  *(undefined4 *)(pbVar19 + uVar21 * 4) = uVar12;
                  uVar21 = uVar21 + 1;
                } while (uVar21 != local_30);
              }
              local_38 = (void *)((int)local_38 + 1);
              pbVar19 = pbVar19 + local_30 * 4;
              local_34 = local_34 + local_7c * iVar8 * 4;
            } while (local_38 != (void *)local_5c);
          }
          local_7c = local_30 & 7;
          if (local_7c != 0) {
            puVar22[-1] = (uint)
                          "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
            ;
            puVar22[-2] = 0x1be;
            puVar22[-3] = (uint)
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
            ;
            puVar22[-4] = (uint)"width % 8 == 0";
            puVar22[-5] = 0x40168d6;
            FUN_0400a810();
          }
          puVar22[-4] = 1;
          local_60 = local_30 + 7;
          if (-1 < (int)local_30) {
            local_60 = local_30;
          }
          local_60 = (int)local_60 >> 3;
          puVar22[-3] = local_5c * local_60;
          puVar22[-5] = 0x401642f;
          local_38 = calloc(puVar22[-4],puVar22[-3]);
          if (0 < (int)local_5c) {
            local_48 = 0;
            local_50 = 0;
            local_58 = 0;
            do {
              if (0 < (int)local_30) {
                iVar13 = 0;
                uVar21 = 0;
                do {
                  iVar17 = iVar13 + 7;
                  if (-1 < iVar13) {
                    iVar17 = iVar13;
                  }
                  if ((*(byte *)((int)pvVar10 + (iVar17 >> 3) + local_50) >>
                       (7U - iVar13 % 8 & 0x1f) & 1) != 0) {
                    uVar15 = uVar21 + 7;
                    if (-1 < (int)uVar21) {
                      uVar15 = uVar21;
                    }
                    pbVar19 = (byte *)((int)local_38 + ((int)uVar15 >> 3) + local_48);
                    *pbVar19 = *pbVar19 | (byte)(1 << (7U - (char)((int)uVar21 % 8) & 0x1f));
                  }
                  uVar21 = uVar21 + 1;
                  iVar13 = iVar13 + iVar7;
                } while (uVar21 != local_30);
              }
              local_58 = local_58 + 1;
              local_50 = local_50 + uVar14 * iVar8;
              local_48 = local_48 + local_60;
            } while (local_58 != local_5c);
          }
        }
        else {
          puVar22[-2] = (uint)*(ushort *)((int)local_3c + 0xe);
          puVar22[-3] = (uint)"Cursor data rescaling code needed for %d-bit cursors!";
          puVar22[-4] = 5;
          puVar22[-5] = 0x401653d;
          FUN_0402cd10();
          puVar22[-1] = (uint)
                        "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
          ;
          puVar22[-2] = 0x1cf;
          puVar22[-3] = (uint)
                        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
          ;
          puVar22[-4] = (uint)"false";
          puVar22[-5] = 0x4016561;
          FUN_0400a810();
          local_7c = local_7c & 7;
        }
      }
      else {
        local_7c = local_7c & 7;
      }
      if (local_7c != 0) {
        puVar22[-1] = (uint)
                      "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
        ;
        puVar22[-2] = 0x1d4;
        puVar22[-3] = (uint)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
        ;
        puVar22[-4] = (uint)"width % 8 == 0";
        puVar22[-5] = 0x40165be;
        FUN_0400a810();
      }
      puVar22[3] = 0xff000000;
      puVar22[2] = 0xff;
      puVar22[1] = 0xff00;
      *puVar22 = 0xff0000;
      puVar22[-1] = 0x20;
      puVar22[-2] = local_5c;
      puVar22[-3] = local_30;
      puVar22[-4] = 0;
      puVar22[-5] = 0x4015e40;
      iVar7 = SDL_CreateRGBSurface();
      if (iVar7 == 0) {
        puVar22[-1] = (uint)
                      "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
        ;
        puVar22[-2] = 0x1dd;
        puVar22[-3] = (uint)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
        ;
        puVar22[-4] = (uint)"surface";
        puVar22[-5] = 0x4016979;
        FUN_0400a810();
      }
      puVar22[-4] = iVar7;
      puVar22[-5] = 0x4015e63;
      iVar8 = SDL_LockSurface();
      if (iVar8 != 0) {
        puVar22[-1] = (uint)
                      "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
        ;
        puVar22[-2] = 0x1df;
        puVar22[-3] = (uint)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp"
        ;
        puVar22[-4] = (uint)"SDL_LockSurface( surface ) == 0";
        puVar22[-5] = 0x40165ef;
        FUN_0400a810();
      }
      iVar8 = *(int *)(iVar7 + 0x14);
      *puVar22 = (uint)local_70;
      uVar20 = *(ushort *)((int)local_3c + 0xe);
      puVar22[-3] = local_5c;
      puVar22[-2] = 1;
      puVar22[-1] = (uint)uVar20;
      puVar22[-4] = local_30;
      puVar22[-5] = 0x4015ead;
      uVar12 = eON_CreateBitmap();
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      puVar22[-8] = local_5c;
      puVar22[-6] = 1;
      puVar22[-7] = 1;
      puVar22[-9] = local_30;
      puVar22[-5] = (uint)local_38;
      puVar22[-10] = 0x4015ee2;
      uVar12 = eON_CreateBitmap();
      uVar20 = *(ushort *)((int)local_3c + 0xe);
      *(undefined4 *)(param_1 + 0x30) = uVar12;
      fVar4 = _DAT_042dc5a0;
      iVar13 = uVar20 * local_30;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 7;
      }
      for (uVar21 = iVar13 >> 3; (uVar21 & 3) != 0; uVar21 = uVar21 + 1) {
      }
      for (; (local_60 & 3) != 0; local_60 = local_60 + 1) {
      }
      local_54 = (byte *)(local_30 * 4 * local_5c + iVar8);
      local_40 = local_54;
      if (uVar20 == 1) {
        if (0 < (int)local_5c) {
          local_54 = (byte *)0x0;
          iVar8 = 0;
          local_50 = 0;
          do {
            local_40 = local_40 + local_30 * -4;
            if (0 < (int)local_30) {
              uVar14 = 0;
              pbVar19 = local_40;
              do {
                uVar15 = uVar14 + 7;
                if (-1 < (int)uVar14) {
                  uVar15 = uVar14;
                }
                bVar16 = 7 - (char)((int)uVar14 % 8);
                bVar2 = *(byte *)((int)local_38 + iVar8 + ((int)uVar15 >> 3));
                pbVar25 = (byte *)((-((int)(uint)local_70[((int)uVar15 >> 3) + (int)local_54] >>
                                      (bVar16 & 0x1f) & 1U) & 4) + *(int *)((int)local_3c + 0x28));
                *pbVar19 = pbVar25[2];
                pbVar19[1] = pbVar25[1];
                pbVar19[2] = *pbVar25;
                uVar14 = uVar14 + 1;
                pbVar19[3] = -(((int)(uint)bVar2 >> (bVar16 & 0x1f) & 1U) == 0);
                pbVar19 = pbVar19 + 4;
              } while (uVar14 != local_30);
            }
            local_50 = local_50 + 1;
            iVar8 = iVar8 + local_60;
            local_54 = (byte *)((int)local_54 + uVar21);
          } while (local_50 != local_5c);
        }
      }
      else if (uVar20 == 8) {
        if (0 < (int)local_5c) {
          local_54 = (byte *)0x0;
          local_50 = 0;
          pbVar19 = local_70;
          do {
            local_40 = local_40 + local_30 * -4;
            if (0 < (int)local_30) {
              uVar14 = 0;
              pbVar25 = local_40;
              do {
                uVar15 = uVar14 + 7;
                if (-1 < (int)uVar14) {
                  uVar15 = uVar14;
                }
                bVar2 = *(byte *)((int)local_38 + ((int)uVar15 >> 3) + (int)local_54);
                iVar8 = (int)uVar14 % 8;
                pbVar18 = (byte *)((uint)pbVar19[uVar14] * 4 + *(int *)((int)local_3c + 0x28));
                *pbVar25 = pbVar18[2];
                pbVar25[1] = pbVar18[1];
                pbVar25[2] = *pbVar18;
                uVar14 = uVar14 + 1;
                pbVar25[3] = -(((int)(uint)bVar2 >> (7U - (char)iVar8 & 0x1f) & 1U) == 0);
                pbVar25 = pbVar25 + 4;
              } while (uVar14 != local_30);
            }
            local_50 = local_50 + 1;
            pbVar19 = pbVar19 + uVar21;
            local_54 = (byte *)((int)local_54 + local_60);
          } while (local_50 != local_5c);
        }
      }
      else if (uVar20 == 0x18) {
        if (0 < (int)local_5c) {
          local_6c = 0;
          local_50 = 0;
          local_54 = local_70;
          do {
            local_40 = local_40 + local_30 * -4;
            if (0 < (int)local_30) {
              uVar14 = 0;
              pbVar19 = local_40;
              pbVar25 = local_54;
              do {
                uVar15 = uVar14 + 7;
                if (-1 < (int)uVar14) {
                  uVar15 = uVar14;
                }
                bVar2 = *(byte *)((int)local_38 + ((int)uVar15 >> 3) + local_6c);
                iVar8 = (int)uVar14 % 8;
                *pbVar19 = pbVar25[2];
                pbVar19[1] = pbVar25[1];
                pbVar19[2] = *pbVar25;
                uVar14 = uVar14 + 1;
                pbVar19[3] = -(((int)(uint)bVar2 >> (7U - (char)iVar8 & 0x1f) & 1U) == 0);
                pbVar25 = pbVar25 + 3;
                pbVar19 = pbVar19 + 4;
              } while (uVar14 != local_30);
            }
            local_50 = local_50 + 1;
            local_54 = local_54 + uVar21;
            local_6c = local_6c + local_60;
          } while (local_50 != local_5c);
        }
      }
      else if (uVar20 == 0x20) {
        if (0 < (int)local_5c) {
          local_50 = 0;
          local_3c = local_70;
          local_40 = (byte *)0x0;
          local_54 = local_54 + local_30 * -4 + 4;
          do {
            if (0 < (int)local_30) {
              uVar14 = 0;
              pbVar19 = local_54;
              pbVar25 = local_3c;
              do {
                uVar15 = uVar14 + 7;
                if (-1 < (int)uVar14) {
                  uVar15 = uVar14;
                }
                if (((*(byte *)((int)local_38 + ((int)uVar15 >> 3) + local_50) >>
                      (7U - (int)uVar14 % 8 & 0x1f) & 1) == 0) && (bVar2 = pbVar25[3], bVar2 != 0))
                {
                  fVar26 = (float)bVar2 / fVar4;
                  pbVar19[-4] = (byte)(int)((fVar3 * 0.0 + (float)pbVar25[2]) * fVar26);
                  pbVar19[-3] = (byte)(int)((fVar3 * 0.0 + (float)pbVar25[1]) * fVar26);
                  bVar16 = *pbVar25;
                  pbVar19[-1] = bVar2;
                  pbVar19[-2] = (byte)(int)((fVar3 * 0.0 + (float)bVar16) * fVar26);
                }
                else {
                  pbVar19[-4] = 0;
                  pbVar19[-3] = 0;
                  pbVar19[-2] = 0;
                  pbVar19[-1] = 0;
                }
                uVar14 = uVar14 + 1;
                pbVar25 = pbVar25 + 4;
                pbVar19 = pbVar19 + 4;
              } while (uVar14 != local_30);
            }
            local_40 = (byte *)((int)local_40 + 1);
            local_3c = local_3c + uVar21;
            local_54 = local_54 + local_30 * -4;
            local_50 = local_50 + local_60;
          } while (local_40 != (byte *)local_5c);
          local_3c = (byte *)*piVar11;
        }
      }
      else {
        puVar22[-0xb] =
             (uint)
             "virtual bool eON_CursorLinux::LoadCursorImageFromOpenFile(HANDLE, int32_t, int32_t, uint32_t)"
        ;
        puVar22[-0xc] = 0x24a;
        puVar22[-0xd] =
             (uint)"/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp";
        puVar22[-0xe] = (uint)"false";
        puVar22[-0xf] = 0x40167d7;
        FUN_0400a810();
      }
      puVar22[-0xe] = iVar7;
      puVar22[-0xf] = 0x401612b;
      SDL_UnlockSurface();
      iVar8 = *(int *)(param_1 + 0x40);
      puVar22[-0xc] = (int)local_78;
      puVar22[-0xd] = (int)local_74;
      puVar22[-0xe] = iVar7;
      puVar22[-0xf] = 0x4016154;
      uVar12 = SDL_CreateColorCursor();
      *(undefined4 *)(param_5 * 4 + iVar8) = uVar12;
      puVar22[-0xe] = iVar7;
      puVar22[-0xf] = 0x4016161;
      SDL_FreeSurface();
      if (*(byte **)((int)local_3c + 0x2c) != local_70) {
        puVar22[-0xe] = (uint)local_70;
        puVar22[-0xf] = 0x4016174;
        free((void *)puVar22[-0xe]);
      }
      if (*(void **)((int)local_3c + 0x30) != local_38) {
        puVar22[-0xe] = (uint)local_38;
        puVar22[-0xf] = 0x4016187;
        free((void *)puVar22[-0xe]);
      }
      uVar21 = 0;
      do {
        iVar7 = piVar11[uVar21];
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x28) != 0) {
            puVar22[-0xe] = *(int *)(iVar7 + 0x28);
            puVar22[-0xf] = 0x40161a9;
            operator_delete__((void *)puVar22[-0xe]);
            *(undefined4 *)(iVar7 + 0x28) = 0;
          }
          if (*(int *)(iVar7 + 0x2c) != 0) {
            puVar22[-0xe] = *(int *)(iVar7 + 0x2c);
            puVar22[-0xf] = 0x40161bf;
            operator_delete__((void *)puVar22[-0xe]);
            *(undefined4 *)(iVar7 + 0x2c) = 0;
          }
          if (*(int *)(iVar7 + 0x30) != 0) {
            puVar22[-0xe] = *(int *)(iVar7 + 0x30);
            puVar22[-0xf] = 0x40161d5;
            operator_delete__((void *)puVar22[-0xe]);
            *(undefined4 *)(iVar7 + 0x30) = 0;
          }
          puVar22[-0xe] = iVar7;
          puVar22[-0xf] = 0x40161e4;
          operator_delete((void *)puVar22[-0xe]);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar24);
      uVar21 = 0;
      puVar22[-0xe] = (uint)piVar11;
      puVar22[-0xf] = 0x40161f8;
      free((void *)puVar22[-0xe]);
      do {
        puVar1 = puVar9 + uVar21;
        uVar21 = uVar21 + 1;
        puVar22[-0xe] = *puVar1;
        puVar22[-0xf] = 0x401620e;
        operator_delete((void *)puVar22[-0xe]);
      } while (uVar21 < uVar24);
      puVar22[-0xe] = (uint)puVar9;
      puVar22[-0xf] = 0x401621d;
      free((void *)puVar22[-0xe]);
      return 1;
    }
  }
  uVar20 = 0;
  do {
    iVar7 = piVar11[uVar20];
    if (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x28) != 0) {
        puVar22[-4] = *(int *)(iVar7 + 0x28);
        puVar22[-5] = 0x4016251;
        operator_delete__((void *)puVar22[-4]);
        *(undefined4 *)(iVar7 + 0x28) = 0;
      }
      if (*(int *)(iVar7 + 0x2c) != 0) {
        puVar22[-4] = *(int *)(iVar7 + 0x2c);
        puVar22[-5] = 0x4016267;
        operator_delete__((void *)puVar22[-4]);
        *(undefined4 *)(iVar7 + 0x2c) = 0;
      }
      if (*(int *)(iVar7 + 0x30) != 0) {
        puVar22[-4] = *(int *)(iVar7 + 0x30);
        puVar22[-5] = 0x401627d;
        operator_delete__((void *)puVar22[-4]);
        *(undefined4 *)(iVar7 + 0x30) = 0;
      }
      puVar22[-4] = iVar7;
      puVar22[-5] = 0x401628c;
      operator_delete((void *)puVar22[-4]);
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 <= (ushort)iVar8);
  iVar7 = 0;
  puVar22[-4] = (uint)piVar11;
  puVar22[-5] = 0x40162a2;
  free((void *)puVar22[-4]);
  do {
    puVar1 = puVar9 + iVar7;
    iVar7 = iVar7 + 1;
    puVar22[-4] = *puVar1;
    puVar22[-5] = 0x40162be;
    operator_delete((void *)puVar22[-4]);
  } while ((ushort)iVar7 < local_22);
LAB_040160de:
  *puVar23 = (uint)puVar9;
  puVar23[-1] = 0x40160e9;
  free((void *)*puVar23);
  return 0;
}

// --- eON_CursorLinux::SetStandardCursor @0x04015a50 ---
/* source: cursorLinux */

void eON_CursorLinux__SetStandardCursor(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    SDL_SetCursor();
    return;
  }
  FUN_0400a810("StandardCursor",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp",0x49
               ,"virtual void eON_CursorLinux::SetStandardCursor()");
  SDL_SetCursor();
  return;
}

