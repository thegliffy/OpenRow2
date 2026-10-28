// Recovered source: eon2/src/dlls/win32/gdi32/gdi32.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- CalculateKerningPairsTable @0x04125260 ---
/* source: gdi32 */

uint CalculateKerningPairsTable(int param_1,uint param_2,void *param_3)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  void *__dest;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  void *__ptr;
  void *__ptr_00;
  uint uVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  uint uVar16;
  ushort local_54;
  int local_50;
  short local_44;
  int local_38 [3];
  ushort local_2a;
  size_t local_28;
  uint local_24 [3];
  undefined4 *local_18;
  
  __dest = param_3;
  uVar8 = param_2;
  iVar6 = param_1;
  local_18 = &param_1;
  eON_FontCache_EnsureInitialized();
  if ((__dest != (void *)0x0) && (uVar8 == 0)) {
    eON_SetLastError(0x57);
    uVar12 = 0;
  }
  else {
    uVar10 = 0;
    uVar12 = uVar10;
    if ((iVar6 != 0) &&
       (((uVar16 = iVar6 + 0x68686869, uVar16 < 0x80 &&
         (iVar6 = *(int *)(&DAT_04512ac4 + uVar16 * 0x60), iVar6 != 0)) &&
        (*(char *)(iVar6 + 3) == '\0')))) {
      uVar12 = *(uint *)(iVar6 + 0x90);
      if (uVar12 == 0xffffffff) {
        *(undefined4 *)(iVar6 + 0x90) = 0;
        uVar12 = uVar10;
        if ((*(uint *)(*(int *)(iVar6 + 100) + 8) & 0x48) == 0x48) {
          local_28 = 0;
          iVar11 = FT_Load_Sfnt_Table(*(int *)(iVar6 + 100),0x6b65726e,0,0,&local_28);
          if ((iVar11 == 0) && (__ptr = malloc(local_28), __ptr != (void *)0x0)) {
            iVar11 = FT_Load_Sfnt_Table(*(undefined4 *)(iVar6 + 100),0x6b65726e,0,__ptr,&local_28);
            if ((iVar11 == 0) && (__ptr_00 = calloc(1,0x20000), __ptr_00 != (void *)0x0)) {
              if (*(int *)(*(int *)(*(int *)(iVar6 + 100) + 0x5c) + 4) == 0x756e6963) {
                local_24[0] = 0;
                uVar14 = FT_Get_First_Char(*(int *)(iVar6 + 100),local_24);
                while (local_24[0] != 0) {
                  if ((local_24[0] < 0x10000) &&
                     (psVar2 = (short *)((int)__ptr_00 + local_24[0] * 2), *psVar2 == 0)) {
                    local_44 = (short)uVar14;
                    *psVar2 = local_44;
                  }
                  uVar14 = FT_Get_Next_Char(*(undefined4 *)(iVar6 + 100),uVar14,local_24);
                }
              }
              else {
                FUN_0402cd10(10,
                             "Trying to get a kerning pair table for a font with encoding != UNICODE. Implement it."
                            );
                iVar11 = 0;
                do {
                  *(short *)((int)__ptr_00 + iVar11 * 2) = (short)iVar11;
                  iVar11 = iVar11 + 1;
                } while (iVar11 != 0x10000);
              }
              uVar9 = *(ushort *)((int)__ptr + 2) << 8 | *(ushort *)((int)__ptr + 2) >> 8;
              if (uVar9 != 0) {
                local_54 = 0;
                local_50 = (int)__ptr + 4;
                do {
                  uVar4 = *(ushort *)(local_50 + 2);
                  local_2a = *(ushort *)(local_50 + 4) << 8 | *(ushort *)(local_50 + 4) >> 8;
                  if ((local_2a & 0x1fe0) == 0) {
                    uVar12 = (*(ushort *)(local_50 + 6) & 0xff) << 8 |
                             (uint)(*(ushort *)(local_50 + 6) >> 8);
                    iVar11 = *(int *)(iVar6 + 0x90) + uVar12;
                    if (*(void **)(iVar6 + 0x94) == (void *)0x0) {
                      pvVar13 = malloc(iVar11 * 8);
                      *(void **)(iVar6 + 0x94) = pvVar13;
                    }
                    else {
                      pvVar13 = realloc(*(void **)(iVar6 + 0x94),iVar11 * 8);
                      *(void **)(iVar6 + 0x94) = pvVar13;
                    }
                    iVar7 = *(int *)(iVar6 + 0x90);
                    *(int *)(iVar6 + 0x90) = iVar11;
                    if (uVar12 != 0) {
                      puVar15 = (undefined2 *)((int)pvVar13 + iVar7 * 8);
                      uVar3 = 0;
                      uVar10 = 0;
                      do {
                        puVar1 = (ushort *)(local_50 + 0xe + uVar10 * 6);
                        uVar5 = *puVar1;
                        uVar16 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
                        *puVar15 = *(undefined2 *)((int)__ptr_00 + uVar16 * 2);
                        uVar5 = puVar1[1];
                        uVar10 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
                        puVar15[1] = *(undefined2 *)((int)__ptr_00 + uVar10 * 2);
                        iVar11 = FT_Get_Kerning(*(undefined4 *)(iVar6 + 100),uVar16,uVar10,0,
                                                local_38);
                        if (iVar11 != 0) {
                          FUN_0400a810("!error",
                                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                                       ,0x15c7,"void CalculateKerningPairsTable(eON_GdiFont*)");
                        }
                        uVar3 = uVar3 + 1;
                        *(int *)(puVar15 + 2) = local_38[0] >> 6;
                        uVar10 = (uint)uVar3;
                        puVar15 = puVar15 + 4;
                      } while (uVar10 < uVar12);
                    }
                  }
                  local_54 = local_54 + 1;
                  local_50 = local_50 + (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
                } while (local_54 != uVar9);
              }
              free(__ptr_00);
            }
            free(__ptr);
            uVar12 = *(uint *)(iVar6 + 0x90);
          }
          else {
            uVar12 = *(uint *)(iVar6 + 0x90);
          }
        }
      }
      if (((__dest != (void *)0x0) && (uVar8 != 0)) &&
         ((uVar8 <= uVar12 || (uVar8 = uVar12, uVar12 != 0)))) {
        uVar12 = uVar8;
        memcpy(__dest,*(void **)(iVar6 + 0x94),uVar12 * 8);
      }
    }
  }
  return uVar12;
}

// --- FillBitmapRectangle @0x0411c410 ---
/* source: gdi32 */

void __regparm1
FillBitmapRectangle(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_28;
  int local_20;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_20 = 0;
  if (-1 < param_3) {
    local_20 = param_3;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (param_4 <= *(int *)(param_1 + 4)) {
    iVar4 = param_4;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (param_5 <= *(int *)(param_1 + 8)) {
    iVar1 = param_5;
  }
  if (*(short *)(param_1 + 0x12) == 0x18) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (local_20 < iVar1) {
      local_28 = local_20 * iVar6 + *(int *)(param_1 + 0x14);
      uVar7 = param_6 >> 0x10;
      do {
        uVar5 = uVar7;
        if (param_2 < iVar4) {
          puVar2 = (undefined1 *)(local_28 + param_2 * 3);
          iVar6 = param_2;
          do {
            iVar6 = iVar6 + 1;
            puVar2[1] = (char)(param_6 >> 8);
            *puVar2 = (char)param_6;
            uVar5 = uVar7 & 0xff;
            puVar2[2] = (char)uVar7;
            puVar2 = puVar2 + 3;
          } while (iVar6 < iVar4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
        local_20 = local_20 + 1;
        local_28 = local_28 + iVar6;
        uVar7 = uVar5;
      } while (local_20 < iVar1);
    }
  }
  else {
    if (*(short *)(param_1 + 0x12) != 0x20) {
      FUN_0400a810();
      return;
    }
    iVar6 = *(int *)(param_1 + 0xc);
    if (local_20 < iVar1) {
      iVar8 = local_20 * iVar6 + *(int *)(param_1 + 0x14);
      do {
        iVar3 = param_2;
        if (param_2 < iVar4) {
          do {
            *(uint *)(iVar8 + iVar3 * 4) = param_6;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
        local_20 = local_20 + 1;
        iVar8 = iVar8 + iVar6;
      } while (local_20 < iVar1);
      return;
    }
  }
  return;
}

// --- HDC_AddRef @0x0411c8b0 ---
/* source: gdi32 */

void HDC_AddRef(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 + 0x68686869;
    if (uVar1 < 0x80) goto LAB_0411c8c9;
  }
  FUN_0400a810("number < 128",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x230,"void HDC_AddRef(HDC)");
LAB_0411c8c9:
  *(int *)(&DAT_04512aa4 + uVar1 * 0x60) = *(int *)(&DAT_04512aa4 + uVar1 * 0x60) + 1;
  return;
}

// --- HDC_FreeDC @0x0411d9c0 ---
/* source: gdi32 */

undefined4 HDC_FreeDC(int param_1)

{
  uint uVar1;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_0402cd10(10,"HDC_FreeDC called with NULL hdc");
    uVar2 = 0;
  }
  else {
    uVar1 = param_1 + 0x68686869;
    if (0x80 < uVar1) {
      FUN_0402cd10(10,"HDC_FreeDC called with hdc: %p and number: %u > EON_MAX_DC",param_1,uVar1);
      return 0;
    }
    if (uVar1 == 0x80) {
      FUN_0400a810("number < 128",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x1ee,"INT HDC_FreeDC(HDC)");
    }
    uVar2 = 0;
    iVar3 = uVar1 * 0x60;
    if (*(int *)(&DAT_04512ab0 + iVar3) == 0) {
      __ptr = *(void **)(&DAT_04512afc + iVar3);
      (&DAT_04512aa8)[uVar1 * 0x18] = 0;
      while (__ptr != (void *)0x0) {
        *(undefined4 *)(&DAT_04512afc + iVar3) = *(undefined4 *)((int)__ptr + 0x3c);
        *(undefined4 *)((int)__ptr + 0x3c) = 0;
        eON_Gdi_ReleaseObjectList((int)__ptr + 4);
        free(__ptr);
        __ptr = *(void **)(&DAT_04512afc + iVar3);
      }
      eON_Gdi_ReleaseObjectList(&DAT_04512ac4 + iVar3);
      uVar2 = 1;
      if (*(int *)(&DAT_04512abc + iVar3) != 0) {
        *(undefined4 *)(&DAT_04512abc + iVar3) = 0;
        free(*(void **)(&DAT_04512ac0 + iVar3));
        *(undefined4 *)(&DAT_04512ac0 + iVar3) = 0;
        return 1;
      }
    }
  }
  return uVar2;
}

// --- HDC_GetCurrentPixelFormat @0x0411de10 ---
/* source: gdi32 */

int HDC_GetCurrentPixelFormat(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = param_1 + 0x68686869;
    if (uVar2 < 0x80) goto LAB_0411de29;
  }
  FUN_0400a810("number < 128",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x6af,"const PIXELFORMATDESCRIPTOR* HDC_GetCurrentPixelFormat(HDC)");
LAB_0411de29:
  iVar1 = uVar2 * 0x60;
  if (0 < *(int *)(&DAT_04512ab8 + iVar1)) {
    return *(int *)(&DAT_04512ac0 + iVar1) + (*(int *)(&DAT_04512ab8 + iVar1) * 5 + -5) * 8;
  }
  FUN_0400a810("context->PixelFormatID > 0",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x6b1,"const PIXELFORMATDESCRIPTOR* HDC_GetCurrentPixelFormat(HDC)");
  return *(int *)(&DAT_04512ac0 + iVar1) + (*(int *)(&DAT_04512ab8 + iVar1) * 5 + -5) * 8;
}

// --- HDC_Release @0x0411c910 ---
/* source: gdi32 */

void HDC_Release(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = param_1 + 0x68686869;
    if (uVar2 < 0x80) goto LAB_0411c92a;
  }
  FUN_0400a810("number < 128",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x23b,"INT HDC_Release(HDC)");
LAB_0411c92a:
  iVar1 = *(int *)(&DAT_04512aa4 + uVar2 * 0x60);
  if (iVar1 == 0) {
    FUN_0402cd10(10,"RefCount on a drawing context == 0 before Release !");
    iVar1 = *(int *)(&DAT_04512aa4 + uVar2 * 0x60);
  }
  *(int *)(&DAT_04512aa4 + uVar2 * 0x60) = iVar1 + -1;
  return;
}

// --- TEXTMETRIC_ConvertWToA @0x04120610 ---
/* source: gdi32 */

undefined4 TEXTMETRIC_ConvertWToA(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  char local_14;
  undefined4 *local_10;
  
  puVar1 = param_2;
  local_10 = &param_1;
  iVar3 = eON_GetTextMetrics(param_1,&local_4c);
  uVar4 = 0;
  if (iVar3 != 0) {
    if (0xff < local_1a) {
      FUN_0400a810("tmw->tmBreakChar <= 255",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0xdc1,"void TEXTMETRIC_ConvertWToA(const TEXTMETRICW*, TEXTMETRICA*)");
    }
    if (0xff < local_1c) {
      FUN_0400a810("tmw->tmDefaultChar <= 255",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0xdc2,"void TEXTMETRIC_ConvertWToA(const TEXTMETRICW*, TEXTMETRICA*)");
    }
    *(char *)((int)puVar1 + 0x2e) = (char)local_1c;
    puVar1[8] = local_2c;
    *puVar1 = local_4c;
    *(undefined1 *)((int)puVar1 + 0x32) = local_16;
    puVar1[7] = local_30;
    *(undefined1 *)((int)puVar1 + 0x2f) = (undefined1)local_1a;
    puVar1[1] = local_48;
    *(undefined1 *)((int)puVar1 + 0x31) = local_17;
    *(undefined1 *)(puVar1 + 0xc) = local_18;
    puVar1[6] = local_34;
    puVar1[2] = local_44;
    puVar1[5] = local_38;
    *(char *)(puVar1 + 0xd) = local_14;
    *(undefined1 *)((int)puVar1 + 0x33) = local_15;
    puVar1[3] = local_40;
    puVar1[4] = local_3c;
    puVar1[9] = local_28;
    puVar1[10] = local_24;
    if (local_14 != '\x02') {
      *(char *)(puVar1 + 0xb) = (char)local_1c + -1;
      uVar2 = 0xffff;
      if (local_1e < 0xff) {
        uVar2 = local_1e;
      }
      *(char *)((int)puVar1 + 0x2d) = (char)uVar2;
      return 1;
    }
    *(undefined1 *)(puVar1 + 0xb) = 0x1e;
    uVar4 = 1;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0xff;
  }
  return uVar4;
}

// --- eON_AddFontResourceExW @0x04126980 ---
/* source: gdi32 */

undefined4 eON_AddFontResourceExW(int param_1,undefined4 param_2,undefined4 param_3)

{
  size_t __size;
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 local_90 [28];
  undefined4 uStackY_74;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_18;
  
  local_18 = &param_1;
  puVar3 = &local_50;
  pvVar2 = (void *)0x0;
  local_24 = param_2;
  local_28 = param_3;
  if (param_1 != 0) {
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0xffffffff;
    local_48 = param_1;
    local_4c = 0;
    local_50 = 0;
    __size = eON_WideCharToMultiByte();
    uStackY_74 = 0x4126a01;
    pvVar2 = malloc(__size);
    if (pvVar2 == (void *)0x0) {
      uStackY_74 = 0x4126aa4;
      FUN_0400a810();
    }
    uStackY_74 = 0x4126a3f;
    eON_WideCharToMultiByte();
    puVar3 = (undefined4 *)local_90;
  }
  *puVar3 = pvVar2;
  puVar3[2] = local_28;
  puVar3[1] = local_24;
  puVar3[-1] = 0x4126a58;
  uVar1 = eON_AddFontResourceA();
  puVar3[-3] = pvVar2;
  puVar3[-4] = 0x4126a65;
  free((void *)puVar3[-3]);
  return uVar1;
}

// --- eON_BitBlt @0x041247c0 ---
/* source: gdi32 */

undefined4
gdi32_041247c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
              int param_8,undefined *param_9)

{
  undefined1 uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_30;
  int local_28;
  
  bVar3 = true;
  uVar13 = 0xffffffff;
  if (param_1 != 0) {
    uVar13 = param_1 + 0x68686869;
    bVar3 = 0x7f < uVar13;
  }
  if (param_6 == 0) {
    return 0;
  }
  uVar4 = param_6 + 0x68686869;
  if (0x7f < uVar4) {
    return 0;
  }
  if (bVar3) {
    return 0;
  }
  if (param_1 == 0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = param_1 + 0x68686869;
    if (uVar16 < 0x80) goto LAB_0412483b;
  }
  FUN_0400a810("number < 128",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x24a,"eON_Window* HDC_GetWindowFromHDC(HDC)");
LAB_0412483b:
  if ((&DAT_04512aa8)[uVar16 * 0x18] == 0) {
    FUN_0400a810("gDrawingContexts[number].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x24b,"eON_Window* HDC_GetWindowFromHDC(HDC)");
  }
  piVar2 = (int *)(&DAT_04512ab4)[uVar16 * 0x18];
  if (((&DAT_04512aa0)[uVar4 * 0x60] != '\x03') && ((&DAT_04512aa0)[uVar4 * 0x60] != '\n')) {
    return 0;
  }
  if (((&DAT_04512aa0)[uVar13 * 0x60] != '\x03') && ((&DAT_04512aa0)[uVar13 * 0x60] != '\n')) {
    return 0;
  }
  iVar19 = (&DAT_04512ac8)[uVar4 * 0x18];
  iVar15 = (&DAT_04512ac8)[uVar13 * 0x18];
  if ((iVar15 == 0) || (iVar19 == 0)) {
    return 0;
  }
  iVar14 = *(int *)(iVar19 + 0x20);
  if (iVar14 == 0) {
    iVar14 = iVar19 + 8;
  }
  else if (*(int *)(iVar14 + 0x28) != 0) {
    return 0;
  }
  iVar19 = *(int *)(iVar15 + 0x20);
  if (iVar19 == 0) {
    iVar19 = iVar15 + 8;
  }
  else if (*(int *)(iVar19 + 0x28) != 0) {
    return 0;
  }
  if (param_9 == &DAT_00cc0020) {
    if (0 < param_8) {
      param_8 = (*(int *)(iVar14 + 8) - param_8) - param_5;
    }
    if (0 < param_3) {
      param_3 = (*(int *)(iVar19 + 8) - param_3) - param_5;
    }
    if (*(short *)(iVar14 + 0x12) == 0x18) {
      if (*(short *)(iVar19 + 0x12) == 0x18) {
        local_28 = 0;
        if (0 < param_5) {
          do {
            if (0 < param_4) {
              iVar15 = 0;
              do {
                iVar9 = param_2 + iVar15;
                iVar6 = param_7 + iVar15;
                iVar15 = iVar15 + 1;
                puVar12 = (undefined1 *)
                          ((uint)(*(ushort *)(iVar14 + 0x12) >> 3) * iVar6 +
                           (local_28 + param_8) * *(int *)(iVar14 + 0xc) + *(int *)(iVar14 + 0x14));
                puVar7 = (undefined1 *)
                         ((uint)(*(ushort *)(iVar19 + 0x12) >> 3) * iVar9 +
                          (param_3 + local_28) * *(int *)(iVar19 + 0xc) + *(int *)(iVar19 + 0x14));
                *puVar7 = *puVar12;
                puVar7[1] = puVar12[1];
                puVar7[2] = puVar12[2];
              } while (iVar15 != param_4);
            }
            local_28 = local_28 + 1;
          } while (local_28 != param_5);
        }
      }
      else {
        if (*(short *)(iVar19 + 0x12) != 0x20) {
          return 0;
        }
        local_28 = 0;
        if (0 < param_5) {
          do {
            if (0 < param_4) {
              iVar15 = 0;
              do {
                iVar6 = param_7 + iVar15;
                iVar9 = param_2 + iVar15;
                iVar15 = iVar15 + 1;
                puVar12 = (undefined1 *)
                          ((uint)(*(ushort *)(iVar14 + 0x12) >> 3) * iVar6 +
                           (local_28 + param_8) * *(int *)(iVar14 + 0xc) + *(int *)(iVar14 + 0x14));
                puVar7 = (undefined1 *)
                         ((uint)(*(ushort *)(iVar19 + 0x12) >> 3) * iVar9 +
                          (local_28 + param_3) * *(int *)(iVar19 + 0xc) + *(int *)(iVar19 + 0x14));
                *puVar7 = *puVar12;
                puVar7[1] = puVar12[1];
                uVar1 = puVar12[2];
                puVar7[3] = 0xff;
                puVar7[2] = uVar1;
              } while (iVar15 != param_4);
            }
            local_28 = local_28 + 1;
          } while (local_28 != param_5);
        }
      }
    }
    else {
      if (*(short *)(iVar14 + 0x12) != 0x20) {
        return 0;
      }
      if (*(short *)(iVar19 + 0x12) != 0x20) {
        return 0;
      }
      local_30 = 0;
      if (0 < param_5) {
        do {
          if (0 < param_4) {
            iVar15 = *(int *)(iVar14 + 0x14);
            iVar6 = *(int *)(iVar19 + 0x14);
            iVar5 = 0;
            iVar9 = param_7 << 2;
            iVar11 = param_2 << 2;
            do {
              iVar5 = iVar5 + 1;
              iVar17 = iVar15 + iVar9;
              iVar9 = iVar9 + 4;
              iVar18 = iVar6 + iVar11;
              iVar11 = iVar11 + 4;
              *(undefined4 *)(iVar18 + (local_30 + param_3) * *(int *)(iVar19 + 0xc)) =
                   *(undefined4 *)(iVar17 + (local_30 + param_8) * *(int *)(iVar14 + 0xc));
            } while (iVar5 != param_4);
          }
          local_30 = local_30 + 1;
        } while (local_30 != param_5);
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x9c))(piVar2);
      return 1;
    }
    return 1;
  }
  if (param_9 != (undefined *)0xf0f0f0ff) {
    return 0;
  }
  if (0 < param_8) {
    param_8 = (*(int *)(iVar14 + 8) - param_8) - param_5;
  }
  if (0 < param_3) {
    param_3 = (*(int *)(iVar19 + 8) - param_3) - param_5;
  }
  if (*(short *)(iVar14 + 0x12) == 0x20) {
    if (*(short *)(iVar19 + 0x12) != 0x20) {
      return 1;
    }
    local_28 = 0;
    if (0 < param_5) {
      do {
        if (0 < param_4) {
          iVar15 = 0;
          do {
            pcVar8 = (char *)((uint)(*(ushort *)(iVar14 + 0x12) >> 3) * (param_7 + iVar15) +
                              (local_28 + param_8) * *(int *)(iVar14 + 0xc) +
                             *(int *)(iVar14 + 0x14));
            pcVar10 = (char *)((uint)(*(ushort *)(iVar19 + 0x12) >> 3) * (param_2 + iVar15) +
                               (local_28 + param_3) * *(int *)(iVar19 + 0xc) +
                              *(int *)(iVar19 + 0x14));
            *pcVar10 = ('\x01' - (pcVar8[3] == -1)) * *pcVar10 + *pcVar8;
            pcVar10[1] = ('\x01' - (pcVar8[3] == -1)) * pcVar10[1] + pcVar8[1];
            pcVar10[2] = ('\x01' - (pcVar8[3] == -1)) * pcVar10[2] + pcVar8[2];
            iVar15 = iVar15 + 1;
            pcVar10[3] = pcVar8[3] + ('\x01' - (pcVar8[3] == -1)) * pcVar10[3];
          } while (iVar15 != param_4);
        }
        local_28 = local_28 + 1;
      } while (local_28 != param_5);
      return 1;
    }
    return 1;
  }
  return 1;
}

// --- eON_ChoosePixelFormat @0x0411e3c0 ---
/* source: gdi32 */

int eON_ChoosePixelFormat(int param_1,short *param_2)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined **ppuVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (((param_2 != (short *)0x0) && (param_1 != 0)) && (param_1 + 0x68686869U < 0x80)) {
    iVar7 = (param_1 + 0x68686869U) * 0x60;
    if (*(int *)(&DAT_04512abc + iVar7) == 0) {
      if (*(int *)(&DAT_04512ac0 + iVar7) != 0) {
        FUN_0400a810("dc->PixelFormats == __null",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                     ,0x133,"void MakeSurePixelFormatsInitialised(HDC_DrawingContext*)");
      }
      puVar6 = malloc(0x78);
      *(undefined4 **)(&DAT_04512ac0 + iVar7) = puVar6;
      ppuVar9 = &PTR_DAT_043186e0;
      for (iVar8 = 0x1e; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *ppuVar9;
        ppuVar9 = ppuVar9 + (uint)bVar10 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      }
      *(undefined4 *)(&DAT_04512abc + iVar7) = 3;
      sVar3 = *param_2;
    }
    else {
      sVar3 = *param_2;
    }
    if (((((sVar3 == 0x28) && (param_2[1] == 1)) &&
         (((char)param_2[4] == '\0' && ((char)param_2[0xd] == '\0')))) &&
        ((uVar4 = *(uint *)(param_2 + 2), (uVar4 & 1) != 0 || ((uVar4 & 0x40000000) != 0)))) &&
       (((uVar4 & 2) == 0 || ((int)uVar4 < 0)))) {
      if (*(byte *)((int)param_2 + 9) < 0x20) {
        FUN_0400a810("ppfd->cColorBits >= 32",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                     ,0x7a1,"INT eON_ChoosePixelFormat(HDC, const PIXELFORMATDESCRIPTOR*)");
      }
      cVar2 = (char)param_2[8];
      if (cVar2 == '\x02') {
        if (0 < *(int *)(&DAT_04512abc + iVar7)) {
          iVar5 = 0;
          iVar8 = *(int *)(&DAT_04512ac0 + iVar7);
          if (*(char *)(*(int *)(&DAT_04512ac0 + iVar7) + 0x10) == '\x02') {
            iVar5 = 0;
          }
          else {
            do {
              iVar5 = iVar5 + 1;
              if (iVar5 == *(int *)(&DAT_04512abc + iVar7)) goto LAB_0411e558;
              pcVar1 = (char *)(iVar8 + 0x38);
              iVar8 = iVar8 + 0x28;
            } while (*pcVar1 != '\x02');
          }
          return iVar5 + 1;
        }
      }
      else if (cVar2 == '\b') {
        if (0 < *(int *)(&DAT_04512abc + iVar7)) {
          iVar8 = *(int *)(&DAT_04512ac0 + iVar7);
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            if ((*(char *)(iVar8 + 9) == ' ') && (*(char *)(iVar8 + 0x10) == '\b')) {
              return iVar5;
            }
            iVar8 = iVar8 + 0x28;
          } while (iVar5 != *(int *)(&DAT_04512abc + iVar7));
        }
      }
      else if ((cVar2 == '\0') && (0 < *(int *)(&DAT_04512abc + iVar7))) {
        iVar8 = *(int *)(&DAT_04512ac0 + iVar7);
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          if ((*(char *)(iVar8 + 9) == ' ') && (*(char *)(iVar8 + 0x10) == '\0')) {
            return iVar5;
          }
          iVar8 = iVar8 + 0x28;
        } while (iVar5 != *(int *)(&DAT_04512abc + iVar7));
      }
LAB_0411e558:
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x7b9,"INT eON_ChoosePixelFormat(HDC, const PIXELFORMATDESCRIPTOR*)");
    }
  }
  return 0;
}

// --- eON_CreateDIBSection @0x04122550 ---
/* source: gdi32 */

int eON_CreateDIBSection
              (undefined4 param_1,uint *param_2,int param_3,undefined4 *param_4,int param_5,
              int param_6)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *__ptr;
  int iVar4;
  size_t __size;
  void *pvVar5;
  short sVar6;
  uint uVar7;
  int local_58;
  uint local_54;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined1 *local_18;
  
  puVar3 = param_4;
  puVar2 = param_2;
  local_18 = (undefined1 *)&param_1;
  if (param_2 == (uint *)0x0) {
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    *param_4 = 0;
    return 0;
  }
  if (*param_2 == 0xc) {
    local_4c = (uint)(ushort)param_2[1];
    local_54 = 0;
    local_48 = (uint)*(ushort *)((int)param_2 + 6);
    local_58 = 1;
    uVar1 = *(ushort *)((int)param_2 + 10);
    sVar6 = (short)param_2[2];
  }
  else {
    if (*param_2 < 0x28) {
      return 0;
    }
    local_4c = param_2[1];
    local_58 = 2;
    local_48 = param_2[2];
    local_54 = param_2[4];
    uVar1 = *(ushort *)((int)param_2 + 0xe);
    sVar6 = (short)param_2[3];
  }
  if (param_5 != 0) {
    return 0;
  }
  if (param_3 != 0) {
    return 0;
  }
  if (param_6 != 0) {
    return 0;
  }
  if (sVar6 != 1) {
    return 0;
  }
  if ((local_54 != 3) && (local_54 != 0)) {
    return 0;
  }
  if (uVar1 < 9) {
    return 0;
  }
  if (param_2[8] != 0) {
    return 0;
  }
  __ptr = malloc(0x54);
  if (__ptr == (undefined4 *)0x0) {
    return 0;
  }
  *__ptr = 0;
  __ptr[1] = local_4c;
  __ptr[2] = local_48 ^ (int)local_48 >> 0x1f;
  __ptr[2] = __ptr[2] - ((int)local_48 >> 0x1f);
  if (uVar1 == 0x18) {
    iVar4 = local_4c * 3 + 3;
    if (iVar4 < 0) {
      iVar4 = local_4c * 3 + 6;
    }
    uVar7 = iVar4 >> 2;
LAB_04122805:
    iVar4 = uVar7 << 2;
  }
  else {
    if (uVar1 < 0x19) {
      if ((ushort)(uVar1 - 0xf) < 2) {
        uVar7 = (int)(local_4c + 1) / 2;
        goto LAB_04122805;
      }
    }
    else {
      uVar7 = local_4c;
      if (uVar1 == 0x20) goto LAB_04122805;
    }
    FUN_0402cd10(5,"Unsupported bitmap bits per pixel: %d",uVar1);
    iVar4 = 0;
  }
  __ptr[3] = iVar4;
  *(undefined2 *)(__ptr + 4) = 1;
  *(ushort *)((int)__ptr + 0x12) = uVar1;
  __ptr[5] = 0;
  if (local_58 == 1) {
    __ptr[6] = 0x28;
    *(undefined2 *)(__ptr + 9) = 1;
    *(ushort *)((int)__ptr + 0x26) = uVar1;
    __ptr[0xc] = 0;
    __ptr[7] = local_4c;
    __ptr[8] = local_48;
    __ptr[0xd] = 0;
    __ptr[0xe] = 0;
    __ptr[10] = local_54;
    __ptr[0xf] = 0;
  }
  else {
    __ptr[7] = puVar2[1];
    __ptr[8] = puVar2[2];
    __ptr[9] = puVar2[3];
    __ptr[10] = puVar2[4];
    __ptr[0xb] = puVar2[5];
    __ptr[0xc] = puVar2[6];
    __ptr[0xd] = puVar2[7];
    __ptr[0xe] = puVar2[8];
    uVar7 = puVar2[9];
    __ptr[6] = 0x28;
    __ptr[0xf] = uVar7;
  }
  __size = iVar4 * __ptr[2];
  __ptr[0xb] = __size;
  if (uVar1 == 0x18) {
LAB_041228c2:
    if (local_54 == 3) {
LAB_041228e0:
      __ptr[0x10] = puVar2[10];
      __ptr[0x11] = puVar2[0xb];
      uVar7 = puVar2[0xc];
    }
    else {
      __ptr[0x10] = 0xff0000;
      uVar7 = 0xff;
      __ptr[0x11] = 0xff00;
    }
  }
  else {
    if (0x18 < uVar1) {
      if (uVar1 != 0x20) goto LAB_04122753;
      goto LAB_041228c2;
    }
    if (1 < (ushort)(uVar1 - 0xf)) goto LAB_04122753;
    if (local_54 == 3) goto LAB_041228e0;
    __ptr[0x10] = 0x7c00;
    uVar7 = 0x1f;
    __ptr[0x11] = 0x3e0;
  }
  __ptr[0x12] = uVar7;
LAB_04122753:
  __ptr[0x13] = 0;
  __ptr[0x14] = 0;
  if (__size == 0) {
    FUN_0400a810("dib->dsBmih.biSizeImage",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x46b,
                 "void* eON_CreateDIBSection(HDC, const BITMAPINFO*, UINT, void**, HANDLE, DWORD)");
    __size = __ptr[0xb];
  }
  pvVar5 = malloc(__size);
  __ptr[5] = pvVar5;
  if (pvVar5 == (void *)0x0) {
    iVar4 = 0;
    free(__ptr);
  }
  else {
    local_30 = __ptr[2];
    local_38 = 0;
    local_34 = __ptr[1];
    local_2c = 0;
    local_28 = 1;
    local_26 = 0x20;
    local_24 = 0;
    iVar4 = eON_CreateBitmapIndirect(&local_38);
    if (iVar4 == 0) {
      free((void *)__ptr[5]);
      free(__ptr);
    }
    else {
      *(undefined4 **)(iVar4 + 0x20) = __ptr;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = __ptr[5];
      }
    }
  }
  return iVar4;
}

// --- eON_CreateFontIndirectW @0x0411f380 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: gdi32 */

undefined1 * eON_CreateFontIndirectW(int *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int **ppiVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  undefined1 local_ac [8];
  undefined4 local_a4;
  int *local_a0;
  char *local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  int **local_90;
  short *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  uint local_54;
  undefined1 local_44 [4];
  int local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  undefined1 local_24 [12];
  undefined4 *local_18;
  
  piVar9 = param_1;
  bVar11 = 0;
  local_18 = &param_1;
  puVar7 = (undefined1 *)0x0;
  ppiVar8 = &local_a0;
  if (param_1 != (int *)0x0) {
    local_98 = &local_30;
    local_a0 = param_1;
    local_9c = (char *)&local_34;
    local_a4 = 0x411f3b9;
    cVar2 = eON_FontCache_GetFontInMemory();
    if (cVar2 != '\0') {
      local_78 = (short *)local_30;
      local_a4 = 0x411f3cf;
      local_a0 = (int *)eON_FontCache_EnsureInitialized();
      local_90 = &local_2c;
      local_94 = 0;
      local_9c = (char *)local_34;
      local_98 = (undefined4 *)local_78;
      local_a4 = 0x411f3f1;
      iVar3 = FT_New_Memory_Face();
      if (iVar3 == 0) {
        local_9c = (char *)0x756e6963;
        local_a0 = local_2c;
        local_a4 = 0x411f40c;
        iVar3 = FT_Select_Charmap();
        if (iVar3 == 0x26) {
          local_9c = (char *)0x73796d62;
          local_a0 = local_2c;
          local_a4 = 0x411f6e3;
          iVar3 = FT_Select_Charmap();
        }
        if (iVar3 == 0) {
          iVar3 = *piVar9;
          if (iVar3 < 1) {
            sVar4 = 0x380;
            if (iVar3 != 0) {
              local_98 = (undefined4 *)0x60;
              local_a0 = (int *)(iVar3 * -0x40);
              local_9c = (char *)0x48;
              local_a4 = 0x411f668;
              sVar4 = eON_MulDiv();
              ppiVar8 = (int **)local_ac;
            }
          }
          else {
            local_a0 = (int *)(iVar3 << 6);
            local_98 = (undefined4 *)0x60;
            local_9c = (char *)0x32;
            local_a4 = 0x411f445;
            sVar4 = eON_MulDiv();
            ppiVar8 = (int **)local_ac;
          }
          ppiVar8[2] = (int *)sVar4;
          ppiVar8[4] = (int *)0x60;
          ppiVar8[3] = (int *)0x0;
          ppiVar8[1] = (int *)0x0;
          *ppiVar8 = local_2c;
          ppiVar8[-1] = (int *)0x411f46f;
          sVar4 = FT_Set_Char_Size();
          if (sVar4 == 0) {
            local_54 = local_2c[2];
            iVar3 = local_2c[0x15];
            ppiVar8[2] = (int *)0x0;
            ppiVar8[1] = (int *)0x0;
            *ppiVar8 = local_2c;
            ppiVar8[-1] = (int *)0x411f49d;
            sVar4 = FT_Load_Glyph();
            if (sVar4 == 0) {
              *ppiVar8 = (int *)iVar3;
              ppiVar8[1] = &local_28;
              ppiVar8[-1] = (int *)0x411f4b6;
              sVar4 = FT_Get_Glyph();
              if (sVar4 == 0) {
                ppiVar8[1] = (int *)0x3;
                ppiVar8[2] = (int *)local_44;
                *ppiVar8 = (int *)local_28;
                ppiVar8[-1] = (int *)0x411f4da;
                FT_Glyph_Get_CBox();
                local_58 = local_38;
                local_5c = local_40;
                if (*(int *)(local_28 + 8) != 0x62697473) {
                  *ppiVar8 = &local_28;
                  ppiVar8[3] = (int *)0x1;
                  ppiVar8[2] = (int *)0x0;
                  ppiVar8[1] = (int *)0x0;
                  ppiVar8[-1] = (int *)0x411f512;
                  sVar4 = FT_Glyph_To_Bitmap();
                  if (sVar4 != 0) {
                    *ppiVar8 = (int *)local_28;
                    ppiVar8[-1] = (int *)0x411f808;
                    FT_Done_Glyph();
                    *ppiVar8 = local_2c;
                    ppiVar8[-1] = (int *)0x411f813;
                    FT_Done_Face();
                    ppiVar8[2] = (int *)sVar4;
                    ppiVar8[1] = (int *)"FreeType FT_Glyph_To_Bitmap() error: %d";
                    *ppiVar8 = (int *)0xf;
                    ppiVar8[-1] = (int *)0x411f82d;
                    FUN_0402cd10();
                    return (undefined1 *)0x0;
                  }
                }
                local_60 = *(undefined4 *)(local_28 + 0x18);
                *ppiVar8 = (int *)local_28;
                ppiVar8[-1] = (int *)0x411f52d;
                FT_Done_Glyph();
                if ((*(byte *)(local_2c + 2) & 8) == 0) {
                  ppiVar8[3] = (int *)"void* eON_CreateFontIndirectW(const LOGFONTW*)";
                  ppiVar8[2] = (int *)0xcfa;
                  ppiVar8[1] = (int *)
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                  ;
                  *ppiVar8 = (int *)"( fontFace->face_flags & ( 1L << 3 ) )";
                  ppiVar8[-1] = (int *)0x411f6c4;
                  FUN_0400a810();
                }
                ppiVar8[1] = (int *)0x2;
                *ppiVar8 = local_2c;
                ppiVar8[-1] = (int *)0x411f54a;
                local_78 = (short *)FT_Get_Sfnt_Table();
                if (local_78 == (short *)0x0) {
                  ppiVar8[3] = (int *)"void* eON_CreateFontIndirectW(const LOGFONTW*)";
                  ppiVar8[2] = (int *)0xcfc;
                  ppiVar8[1] = (int *)
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                  ;
                  *ppiVar8 = (int *)&PTR_DAT_042dc67e;
                  ppiVar8[-1] = (int *)0x411f7c7;
                  FUN_0400a810();
                }
                local_64 = *(undefined4 *)(local_78 + 0x2a);
                sVar1 = *local_78;
                uVar5 = *(uint *)(local_78 + 0x28);
                local_68 = *(undefined4 *)(local_78 + 0x16);
                local_6c = *(undefined4 *)(local_78 + 0x18);
                local_70 = *(undefined4 *)(local_78 + 0x1a);
                local_74 = *(undefined4 *)(local_78 + 0x1c);
                local_78 = (short *)uVar5;
                if (sVar1 == 0) {
                  ppiVar8[1] = (int *)local_24;
                  *ppiVar8 = local_2c;
                  ppiVar8[-1] = (int *)0x411f685;
                  uVar5 = FT_Get_First_Char();
                  uVar6 = (uint)local_78 | 1;
                  local_78 = (short *)((uint)local_78 | 0x80000000);
                  if (uVar5 < 0x100) {
                    local_78 = (short *)uVar6;
                  }
                }
                *ppiVar8 = (int *)0x98;
                ppiVar8[-1] = (int *)0x411f58c;
                puVar7 = malloc((size_t)*ppiVar8);
                *puVar7 = 6;
                puVar7[1] = 0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                *(undefined4 *)(puVar7 + 4) = 0;
                piVar10 = (int *)(puVar7 + 8);
                for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                *(undefined4 *)(puVar7 + 0x8c) = 0;
                *(undefined4 *)(puVar7 + 0x90) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x94) = 0;
                *(int **)(puVar7 + 100) = local_2c;
                *(undefined4 *)(puVar7 + 0x74) = local_68;
                *(uint *)(puVar7 + 0x68) = local_54 & 0x40;
                *(undefined4 *)(puVar7 + 0x7c) = local_70;
                *(int *)(puVar7 + 0x6c) = (int)((float)(local_58 - local_5c) * _DAT_04311b30);
                *(undefined4 *)(puVar7 + 0x70) = local_60;
                *(undefined4 *)(puVar7 + 0x78) = local_6c;
                *(undefined4 *)(puVar7 + 0x80) = local_74;
                *(short **)(puVar7 + 0x84) = local_78;
                *(undefined4 *)(puVar7 + 0x88) = local_64;
              }
              else {
                puVar7 = (undefined1 *)0x0;
                *ppiVar8 = local_2c;
                ppiVar8[-1] = (int *)0x411f77d;
                FT_Done_Face();
                ppiVar8[2] = (int *)sVar4;
                ppiVar8[1] = (int *)"FreeType FT_Get_Glyph() error: %d";
                *ppiVar8 = (int *)0xf;
                ppiVar8[-1] = (int *)0x411f795;
                FUN_0402cd10();
              }
            }
            else {
              *ppiVar8 = local_2c;
              ppiVar8[-1] = (int *)0x411f74b;
              FT_Done_Face();
              ppiVar8[2] = (int *)sVar4;
              puVar7 = (undefined1 *)0x0;
              ppiVar8[1] = (int *)"FreeType FT_Load_Glyph() error: %d";
              *ppiVar8 = (int *)0xf;
              ppiVar8[-1] = (int *)0x411f765;
              FUN_0402cd10();
            }
          }
          else {
            *ppiVar8 = local_2c;
            ppiVar8[-1] = (int *)0x411f718;
            FT_Done_Face();
            ppiVar8[2] = (int *)sVar4;
            puVar7 = (undefined1 *)0x0;
            ppiVar8[1] = (int *)"FreeType FT_Set_Char_Size() error: %d";
            *ppiVar8 = (int *)0xf;
            ppiVar8[-1] = (int *)0x411f732;
            FUN_0402cd10();
          }
        }
        else {
          local_a0 = local_2c;
          local_a4 = 0x411f7db;
          FT_Done_Face();
          puVar7 = (undefined1 *)0x0;
          local_9c = "FreeType FT_Select_Charmap() error: %d";
          local_a0 = (int *)0xf;
          local_a4 = 0x411f7f5;
          local_98 = (undefined4 *)iVar3;
          FUN_0402cd10();
        }
      }
      else {
        local_9c = "FreeType FT_New_Memory_Face() error: %d";
        local_a0 = (int *)0xf;
        local_a4 = 0x411f708;
        local_98 = (undefined4 *)iVar3;
        FUN_0402cd10();
      }
    }
  }
  return puVar7;
}

// --- eON_DeleteObject @0x0411d680 ---
/* source: gdi32 */

undefined4 eON_DeleteObject(undefined1 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  eON_FontCache_EnsureInitialized();
  if (param_1 == (undefined1 *)0x0) {
    FUN_0402cd10(10,
                 "eON_DeleteObject called for hGDIObj equal NULL. Make sure that object was properly initialized."
                );
    return 0;
  }
  if (param_1 + 0x68686869 < (undefined1 *)0x80) {
    uVar3 = HDC_FreeDC(param_1);
    return uVar3;
  }
  if (param_1[1] != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    param_1[2] = 1;
    return 0;
  }
  switch(*param_1) {
  default:
    FUN_0402cd10(5,"DeleteObject not written for this GDI object type! Add it.");
    return 1;
  case 1:
  case 2:
    goto switchD_0411d6f3_caseD_1;
  case 3:
  case 10:
    return 0;
  case 5:
    pvVar2 = *(void **)(param_1 + 0xc);
    break;
  case 6:
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      FUN_0400a810("font->FontFace",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x669,"WINBOOL eON_DeleteObject(HGDIOBJ)");
      iVar1 = *(int *)(param_1 + 100);
    }
    FT_Done_Face(iVar1);
    pvVar2 = *(void **)(param_1 + 0x8c);
    break;
  case 7:
    pvVar2 = *(void **)(param_1 + 0x20);
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((int)pvVar2 + 0x14) != (void *)0x0) {
        free(*(void **)((int)pvVar2 + 0x14));
        pvVar2 = *(void **)(param_1 + 0x20);
      }
      free(pvVar2);
    }
    if (*(void **)(param_1 + 0x24) != (void *)0x0) {
      free(*(void **)(param_1 + 0x24));
    }
    pvVar2 = *(void **)(param_1 + 0x1c);
    goto joined_r0x0411d775;
  case 8:
    pvVar2 = *(void **)(param_1 + 0x10);
joined_r0x0411d775:
    if (pvVar2 == (void *)0x0) goto switchD_0411d6f3_caseD_1;
    goto LAB_0411d71d;
  }
  if (pvVar2 != (void *)0x0) {
LAB_0411d71d:
    free(pvVar2);
  }
switchD_0411d6f3_caseD_1:
  free(param_1);
  return 1;
}

// --- eON_ExtTextOutW @0x04120e80 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: gdi32 */

undefined4 __regparm3
eON_ExtTextOutW(int param_1,size_t param_2,size_t param_3,uint param_4,size_t *param_5,void *param_6
               ,size_t param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  size_t sVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  void *pvVar13;
  size_t sVar14;
  int iVar15;
  size_t sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  size_t sVar21;
  int iVar22;
  char **ppcVar23;
  size_t *psVar24;
  size_t *psVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  char *local_174;
  char *local_170;
  undefined4 local_16c;
  char *local_168;
  undefined4 uStackY_15c;
  void *local_ec;
  char local_dc;
  char local_d8;
  char local_d4;
  size_t local_d0;
  size_t local_bc;
  int local_b8;
  size_t local_b4;
  void *local_b0;
  size_t local_ac;
  size_t local_a4;
  int local_94;
  int local_90;
  byte local_61;
  int local_3c;
  int local_38;
  int local_34 [4];
  
  local_b0 = param_6;
  if (param_1 == 0) {
    return 0;
  }
  uVar26 = param_1 + 0x68686869;
  if (0x7f < uVar26) {
    return 0;
  }
  iVar17 = uVar26 * 0x60;
  if (*(int *)(&DAT_04512ab0 + iVar17) != 0) {
    return 0;
  }
  if ((&DAT_04512ab4)[uVar26 * 0x18] != 0) {
    return 0;
  }
  if ((&DAT_04512aa0)[iVar17] != '\n') {
    return 0;
  }
  if (((&DAT_04512aec)[iVar17] & 1) != 0) {
    FUN_0402cd10();
  }
  iVar3 = *(int *)(&DAT_04512ac4 + iVar17);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(char *)(iVar3 + 3) != '\0') {
    return 0;
  }
  iVar27 = (&DAT_04512ac8)[uVar26 * 0x18];
  if (iVar27 == 0) {
    return 0;
  }
  iVar20 = *(int *)(iVar27 + 0x20);
  if (iVar20 == 0) {
    iVar20 = iVar27 + 8;
  }
  else if (*(int *)(iVar20 + 0x28) != 0) {
    return 0;
  }
  if ((*(short *)(iVar20 + 0x12) != 0x18) && (*(short *)(iVar20 + 0x12) != 0x20)) {
    return 0;
  }
  if (*(int *)(iVar20 + 0x14) == 0) {
    pvVar13 = malloc(*(int *)(iVar20 + 8) * *(int *)(iVar20 + 0xc));
    *(void **)(iVar20 + 0x14) = pvVar13;
  }
  if (param_5 == (size_t *)0x0) {
    param_4 = param_4 & 0xfffffffb;
  }
  eON_GetTextMetrics();
  psVar24 = (size_t *)&stack0xfffffea8;
  ppcVar23 = (char **)&stack0xfffffea8;
  cVar1 = *(char *)(iVar3 + 0x1d);
  cVar2 = *(char *)(iVar3 + 0x1e);
  if (((local_61 & 2) != 0) && (*(int *)(iVar3 + 0x10) != 0)) {
    uStackY_15c = 0x4120fc3;
    FUN_0402cd10();
  }
  if ((param_4 & 0x10) == 0) {
    if (param_7 == 0) {
      local_b0 = (void *)0x0;
    }
    else {
      uStackY_15c = 0x4121b9b;
      local_b0 = malloc(param_7 * 2);
      sVar21 = 0;
      do {
        uStackY_15c = 0x4121bd2;
        uVar8 = FT_Get_Char_Index();
        *(undefined2 *)((int)local_b0 + sVar21 * 2) = uVar8;
        sVar21 = sVar21 + 1;
      } while (sVar21 != param_7);
    }
  }
  if ((param_4 & 6) == 0) {
    local_bc = 0;
    sVar16 = 0;
    sVar21 = 0;
    local_a4 = 0;
    bVar29 = false;
    local_ec = (void *)0x0;
  }
  else {
    if (param_5 == (size_t *)0x0) {
      uStackY_15c = 0x4121c43;
      local_ec = malloc(param_7 << 2);
      uStackY_15c = 0x4121c86;
      iVar27 = eON_GetTextExtentExPointI();
      ppcVar23 = &local_174;
      if (iVar27 != 1) {
        local_168 = 
        "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)";
        local_16c = 0xb24;
        local_170 = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
        ;
        local_174 = 
        "eON_GetTextExtentExPointI( hdc, glyphBuffer, cbCount, 0, __null, glyphPositions, &textSize ) == 1"
        ;
        FUN_0400a810();
      }
      bVar29 = true;
      local_a4 = param_3 + local_38;
      sVar21 = param_2 + local_3c;
      sVar14 = param_2;
      local_bc = param_3;
    }
    else {
      local_ec = (void *)0x0;
      local_bc = param_5[1];
      sVar21 = param_5[2];
      local_a4 = param_5[3];
      bVar29 = false;
      sVar14 = *param_5;
    }
    sVar6 = local_a4;
    sVar16 = sVar14;
    if ((int)sVar14 <= (int)sVar21) {
      sVar16 = sVar21;
      sVar21 = sVar14;
    }
    psVar24 = (size_t *)ppcVar23;
    if ((int)local_bc <= (int)local_a4) {
      local_a4 = local_bc;
      local_bc = sVar6;
    }
  }
  uVar26 = param_4 & 2;
  if (uVar26 != 0) {
    sVar14 = *(size_t *)(&DAT_04512ae4 + iVar17);
    *psVar24 = sVar21;
    psVar24[2] = sVar16;
    psVar24[4] = sVar14;
    psVar24[1] = local_a4;
    psVar24[3] = local_bc;
    psVar24[-1] = 0x41218f5;
    FillBitmapRectangle();
  }
  if (param_7 == 0) {
    return 1;
  }
  psVar25 = psVar24;
  if (!bVar29) {
    *psVar24 = param_7 << 2;
    psVar24[-1] = 0x4121a6e;
    local_ec = malloc(*psVar24);
    psVar24[4] = 0;
    psVar24[6] = (size_t)&local_3c;
    psVar24[3] = 0;
    *psVar24 = param_1;
    psVar24[5] = (size_t)local_ec;
    psVar24[2] = param_7;
    psVar24[1] = (size_t)local_b0;
    psVar24[-1] = 0x4121ab1;
    iVar27 = eON_GetTextExtentExPointI();
    psVar25 = psVar24 + -7;
    if (iVar27 != 1) {
      psVar24[-4] = (size_t)
                    "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
      ;
      psVar24[-5] = 0xb40;
      psVar24[-6] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
      ;
      psVar24[-7] = (size_t)
                    "eON_GetTextExtentExPointI( hdc, glyphBuffer, cbCount, 0, __null, glyphPositions, &textSize ) == 1"
      ;
      psVar24[-8] = 0x4121aed;
      FUN_0400a810();
      psVar25 = psVar24 + -7;
    }
  }
  uVar7 = *(ushort *)(&DAT_04512aec + iVar17);
  if ((uVar7 & 6) == 2) {
    local_b4 = param_2 - local_3c;
    local_ac = param_3 - local_38;
  }
  else if ((uVar7 & 6) == 6) {
    local_b4 = param_2 - local_3c / 2;
    local_ac = param_3 + local_38 / 2;
  }
  else {
    local_b4 = param_2;
    local_ac = param_3;
    if ((uVar7 & 6) != 0) {
      psVar25[3] = (size_t)
                   "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
      ;
      psVar25[2] = 0xb4b;
      psVar25[1] = (size_t)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp";
      *psVar25 = (size_t)"false";
      psVar25[-1] = 0x4121101;
      FUN_0400a810();
      uVar7 = *(ushort *)(&DAT_04512aec + iVar17);
    }
  }
  uVar7 = uVar7 & 0x18;
  if (uVar7 == 8) {
    local_ac = local_ac - local_90;
  }
  else if (uVar7 != 0x18) {
    if (uVar7 == 0) {
      local_ac = local_ac + local_94;
    }
    else {
      psVar25[3] = (size_t)
                   "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
      ;
      psVar25[2] = 0xb52;
      psVar25[1] = (size_t)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp";
      *psVar25 = (size_t)"false";
      psVar25[-1] = 0x4121b7a;
      FUN_0400a810();
    }
  }
  if (*(int *)(&DAT_04512adc + iVar17) == 1) {
    bVar29 = false;
    uVar26 = *(uint *)(&DAT_04512ae8 + iVar17);
    fVar33 = DAT_042dbf34 * 0.0 + (float)(uVar26 & 0xff);
    fVar32 = DAT_042dbf34 * 0.0 + (float)(uVar26 >> 8 & 0xff);
    fVar31 = DAT_042dbf34 * 0.0 + (float)(uVar26 >> 0x10 & 0xff);
  }
  else {
    if ((uVar26 == 0) ||
       (((((int)sVar21 <= (int)local_b4 && ((int)(local_b4 + local_3c) <= (int)sVar16)) &&
         ((int)local_a4 <= (int)(local_ac - local_94))) &&
        ((int)(local_ac + local_90) <= (int)local_bc)))) {
      uVar10 = *(uint *)(&DAT_04512ae8 + iVar17);
      fVar33 = DAT_042dbf34 * 0.0 + (float)(uVar10 & 0xff);
      fVar32 = DAT_042dbf34 * 0.0 + (float)(uVar10 >> 8 & 0xff);
      fVar31 = DAT_042dbf34 * 0.0 + (float)(uVar10 >> 0x10 & 0xff);
    }
    else {
      psVar25[4] = *(size_t *)(&DAT_04512ae4 + iVar17);
      psVar25[1] = local_ac - local_94;
      psVar25[2] = local_b4 + local_3c;
      psVar25[3] = local_ac + local_90;
      *psVar25 = local_b4;
      psVar25[-1] = 0x41211ce;
      FillBitmapRectangle();
      uVar10 = *(uint *)(&DAT_04512ae8 + iVar17);
      fVar33 = DAT_042dbf34 * 0.0 + (float)(uVar10 & 0xff);
      fVar32 = DAT_042dbf34 * 0.0 + (float)(uVar10 >> 8 & 0xff);
      fVar31 = DAT_042dbf34 * 0.0 + (float)(uVar10 >> 0x10 & 0xff);
      if (*(int *)(&DAT_04512adc + iVar17) == 1) {
        bVar29 = false;
        goto LAB_0412123f;
      }
    }
    bVar29 = uVar26 != 0;
  }
LAB_0412123f:
  fVar4 = _DAT_042dc5a0;
  uVar26 = *(uint *)(&DAT_04512ae4 + iVar17);
  local_d0 = 0;
  do {
    local_34[0] = 0;
    uVar7 = *(ushort *)((int)local_b0 + local_d0 * 2);
    psVar25[2] = 0;
    psVar25[1] = (uint)uVar7;
    *psVar25 = *(undefined4 *)(iVar3 + 100);
    psVar25[-1] = 0x412133d;
    iVar17 = FT_Load_Glyph();
    if (iVar17 == 0) {
      psVar25[1] = (size_t)local_34;
      *psVar25 = *(undefined4 *)(*(int *)(iVar3 + 100) + 0x54);
      psVar25[-1] = 0x4121368;
      iVar17 = FT_Get_Glyph();
      if (iVar17 != 0) goto LAB_041212b0;
      if (*(int *)(local_34[0] + 8) != 0x62697473) {
        psVar25[3] = 1;
        psVar25[2] = 0;
        psVar25[1] = 0;
        *psVar25 = (size_t)local_34;
        psVar25[-1] = 0x41213a4;
        iVar17 = FT_Glyph_To_Bitmap();
        if (iVar17 != 0) {
          *psVar25 = local_34[0];
          psVar25[-1] = 0x4121c08;
          FT_Done_Glyph();
          goto LAB_041212b0;
        }
      }
      iVar17 = local_34[0];
      if (local_34[0] == 0) goto LAB_041212b0;
      if (*(char *)(local_34[0] + 0x2e) != '\x02') {
        psVar25[3] = (size_t)
                     "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
        ;
        psVar25[2] = 0xb87;
        psVar25[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
        ;
        *psVar25 = (size_t)"bitmapGlyph->bitmap.pixel_mode == FT_PIXEL_MODE_GRAY";
        psVar25[-1] = 0x41213f1;
        FUN_0400a810();
      }
      fVar5 = _DAT_042dc5a0;
      iVar27 = local_b4 + *(int *)(iVar17 + 0x14);
      if (local_d0 != 0) {
        iVar27 = iVar27 + *(int *)((int)local_ec + local_d0 * 4 + -4);
      }
      iVar18 = -iVar27;
      iVar28 = local_ac - *(int *)(iVar17 + 0x18);
      if (-1 < iVar27) {
        iVar18 = 0;
      }
      iVar15 = *(int *)(iVar17 + 0x20);
      if (*(int *)(iVar20 + 4) < iVar27 + *(int *)(iVar17 + 0x20)) {
        iVar15 = *(int *)(iVar20 + 4) - iVar27;
      }
      local_a4 = 0;
      if (iVar28 < 0) {
        local_a4 = -iVar28;
      }
      iVar9 = *(int *)(iVar17 + 0x1c);
      if (*(int *)(iVar20 + 8) < *(int *)(iVar17 + 0x1c) + iVar28) {
        iVar9 = *(int *)(iVar20 + 8) - iVar28;
      }
      iVar19 = *(int *)(iVar17 + 0x28);
      uVar10 = *(int *)(iVar17 + 0x24) >> 0x1f;
      iVar22 = (*(uint *)(iVar17 + 0x24) ^ uVar10) - uVar10;
      iVar17 = *(int *)(iVar20 + 0xc);
      local_b8 = (iVar28 + local_a4) * iVar17 + *(int *)(iVar20 + 0x14);
      if (*(short *)(iVar20 + 0x12) == 0x20) {
        if ((int)local_a4 < iVar9) {
          do {
            if (iVar18 < iVar15) {
              puVar12 = (uint *)(local_b8 + (iVar27 + iVar18) * 4);
              iVar17 = iVar18;
              if (bVar29) {
                do {
                  if (*(byte *)(iVar19 + iVar17) == 0) {
                    *puVar12 = (uVar26 >> 0x10 & 0xff) << 0x10 | uVar26 & 0xff |
                               (uVar26 >> 8 & 0xff) << 8 | 0xff000000;
                  }
                  else {
                    fVar30 = (float)*(byte *)(iVar19 + iVar17) / fVar5;
                    *puVar12 = *puVar12 +
                               (((int)(fVar32 * fVar30) & 0xffU) << 8 |
                                ((int)(fVar31 * fVar30) & 0xffU) << 0x10 |
                               (int)(fVar30 * fVar33) & 0xffU);
                  }
                  iVar17 = iVar17 + 1;
                  puVar12 = puVar12 + 1;
                } while (iVar17 < iVar15);
              }
              else {
                do {
                  if (*(byte *)(iVar19 + iVar17) != 0) {
                    fVar30 = (float)*(byte *)(iVar19 + iVar17) / fVar5;
                    *puVar12 = *puVar12 +
                               (((int)(fVar32 * fVar30) & 0xffU) << 8 |
                                ((int)(fVar31 * fVar30) & 0xffU) << 0x10 |
                               (int)(fVar30 * fVar33) & 0xffU);
                  }
                  iVar17 = iVar17 + 1;
                  puVar12 = puVar12 + 1;
                } while (iVar17 < iVar15);
              }
              iVar17 = *(int *)(iVar20 + 0xc);
            }
            local_a4 = local_a4 + 1;
            iVar19 = iVar19 + iVar22;
            local_b8 = local_b8 + iVar17;
          } while ((int)local_a4 < iVar9);
        }
      }
      else if (*(short *)(iVar20 + 0x12) == 0x18) {
        if ((int)local_a4 < iVar9) {
          do {
            if (iVar18 < iVar15) {
              pcVar11 = (char *)((iVar27 + iVar18) * 3 + local_b8);
              iVar17 = iVar18;
              if (bVar29) {
                do {
                  if (*(byte *)(iVar19 + iVar17) == 0) {
                    local_d4 = (char)uVar26;
                    *pcVar11 = local_d4;
                    local_d8 = (char)(uVar26 >> 8);
                    pcVar11[1] = local_d8;
                    local_dc = (char)(uVar26 >> 0x10);
                    pcVar11[2] = local_dc;
                  }
                  else {
                    fVar30 = (float)*(byte *)(iVar19 + iVar17) / fVar4;
                    *pcVar11 = *pcVar11 + (char)(int)(fVar33 * fVar30);
                    pcVar11[1] = pcVar11[1] + (char)(int)(fVar32 * fVar30);
                    pcVar11[2] = pcVar11[2] + (char)(int)(fVar30 * fVar31);
                  }
                  iVar17 = iVar17 + 1;
                  pcVar11 = pcVar11 + 3;
                } while (iVar17 < iVar15);
              }
              else {
                do {
                  if (*(byte *)(iVar19 + iVar17) != 0) {
                    fVar30 = (float)*(byte *)(iVar19 + iVar17) / fVar5;
                    *pcVar11 = *pcVar11 + (char)(int)(fVar33 * fVar30);
                    pcVar11[1] = pcVar11[1] + (char)(int)(fVar32 * fVar30);
                    pcVar11[2] = pcVar11[2] + (char)(int)(fVar30 * fVar31);
                  }
                  iVar17 = iVar17 + 1;
                  pcVar11 = pcVar11 + 3;
                } while (iVar17 < iVar15);
              }
              iVar17 = *(int *)(iVar20 + 0xc);
            }
            local_a4 = local_a4 + 1;
            local_b8 = local_b8 + iVar17;
            iVar19 = iVar19 + iVar22;
          } while ((int)local_a4 < iVar9);
        }
      }
      else {
        psVar25[3] = (size_t)
                     "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
        ;
        psVar25[2] = 0xbdf;
        psVar25[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
        ;
        *psVar25 = (size_t)"false";
        psVar25[-1] = 0x41216a4;
        FUN_0400a810();
      }
      *psVar25 = local_34[0];
      psVar25[-1] = 0x4121602;
      FT_Done_Glyph();
    }
    else {
LAB_041212b0:
      psVar25[3] = (size_t)
                   "WINBOOL eON_ExtTextOutW(HDC, INT, INT, UINT, LPCRECT, LPCWSTR, UINT, const INT*)"
      ;
      psVar25[2] = 0xbed;
      psVar25[1] = (size_t)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp";
      *psVar25 = (size_t)"false";
      psVar25[-1] = 0x41212dc;
      FUN_0400a810();
    }
    local_d0 = local_d0 + 1;
    if (local_d0 == param_7) {
      *psVar25 = (size_t)local_ec;
      psVar25[-1] = 0x4121973;
      free((void *)*psVar25);
      if ((param_4 & 0x10) == 0) {
        *psVar25 = (size_t)local_b0;
        psVar25[-1] = 0x412198b;
        free((void *)*psVar25);
      }
      if (cVar1 != '\0') {
        psVar25[1] = (size_t)
                     "ExtTextOut() call wants to draw underlined text, but this is not implemented yet. Add it."
        ;
        *psVar25 = 10;
        psVar25[-1] = 0x4121a4c;
        FUN_0402cd10();
      }
      if (cVar2 != '\0') {
        psVar25[1] = (size_t)
                     "ExtTextOut() call wants to draw struck-out text, but this is not implemented yet. Add it."
        ;
        *psVar25 = 10;
        psVar25[-1] = 0x41219c4;
        FUN_0402cd10();
      }
      return 1;
    }
  } while( true );
}

// --- eON_GetCurrentObject @0x0411cdb0 ---
/* source: gdi32 */

undefined4 eON_GetCurrentObject(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != 0) {
    iVar1 = param_1 + 0x68686869;
  }
  if ((&DAT_04512aa8)[iVar1 * 0x18] == 0) {
    FUN_0400a810("gDrawingContexts[dcNum].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x50d,"void* eON_GetCurrentObject(HDC, UINT)");
  }
  switch(param_2) {
  default:
    return 0;
  case 1:
    return *(undefined4 *)(&DAT_04512acc + iVar1 * 0x60);
  case 2:
    return *(undefined4 *)(&DAT_04512ad0 + iVar1 * 0x60);
  case 5:
    return *(undefined4 *)(&DAT_04512ad4 + iVar1 * 0x60);
  case 6:
    return *(undefined4 *)(&DAT_04512ac4 + iVar1 * 0x60);
  case 7:
    return (&DAT_04512ac8)[iVar1 * 0x18];
  }
}

// --- eON_GetDIBits @0x0411e630 ---
/* source: gdi32 */

uint eON_GetDIBits(undefined4 param_1,int param_2,int param_3,uint param_4,void *param_5,
                  uint *param_6,int param_7)

{
  short sVar1;
  size_t sVar2;
  undefined2 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *__src;
  size_t __n;
  uint uVar7;
  uint uVar8;
  size_t local_30;
  uint local_28;
  uint local_24;
  uint local_1c;
  
  if (param_7 != 0) {
    FUN_0400a810("uUsage == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x7f9,"INT eON_GetDIBits(HDC, HBITMAP, UINT, UINT, PVOID, LPBITMAPINFO, UINT)");
  }
  if ((param_6 == (uint *)0x0) || (param_2 == 0)) {
    return 0;
  }
  if (*param_6 == 0xc) {
    local_1c = (uint)(ushort)param_6[1];
    local_28 = 0;
    uVar3 = (undefined2)param_6[2];
    local_24 = 0;
    sVar1 = *(short *)((int)param_6 + 10);
    bVar4 = false;
    uVar7 = (uint)*(ushort *)((int)param_6 + 6);
  }
  else {
    if (*param_6 < 0x28) {
      FUN_0402cd10(0xf,"Unrecognized bitmap header!");
      FUN_0402cd10(0xf,"Unrecognized bitmap format!");
      return 0;
    }
    uVar3 = (undefined2)param_6[3];
    bVar4 = true;
    local_1c = param_6[1];
    sVar1 = *(short *)((int)param_6 + 0xe);
    local_24 = param_6[4];
    uVar7 = param_6[2];
    local_28 = param_6[5];
  }
  if ((sVar1 != 0x18) && (sVar1 != 0x20)) {
    FUN_0402cd10(0xf,"Unhandled bpp (%u) in eON_GetDIBits()!",sVar1);
    return 0;
  }
  if (param_6[4] == 3) {
    param_6[10] = 0xff0000;
    param_6[0xb] = 0xff00;
    param_6[0xc] = 0xff;
  }
  uVar5 = (int)uVar7 >> 0x1f;
  if ((param_5 == (void *)0x0) || (param_4 == 0)) {
    param_4 = (uVar5 ^ uVar7) - uVar5;
    goto joined_r0x0411e765;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_0402cd10(0xf,"TODO - Process bits & lines - we have DIB!");
    goto joined_r0x0411e765;
  }
  sVar2 = *(size_t *)(param_2 + 0x14);
  if (sVar1 == 0x18) {
    iVar6 = local_1c * 3 + 3;
    if (iVar6 < 0) {
      iVar6 = local_1c * 3 + 6;
    }
    uVar8 = iVar6 >> 2;
LAB_0411eb73:
    local_30 = uVar8 << 2;
  }
  else {
    uVar8 = local_1c;
    if (sVar1 == 0x20) goto LAB_0411eb73;
    FUN_0402cd10(5,"Unsupported bitmap bits per pixel: %d",sVar1);
    local_30 = 0;
  }
  iVar6 = *(int *)(param_2 + 0x1c);
  if ((int)uVar7 < 1) {
    FUN_0400a810("height > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x84c,"INT eON_GetDIBits(HDC, HBITMAP, UINT, UINT, PVOID, LPBITMAPINFO, UINT)");
  }
  if (*(int *)(param_2 + 0x10) < 1) {
    FUN_0400a810("gdiBitmap->Bitmap.bmHeight > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x84d,"INT eON_GetDIBits(HDC, HBITMAP, UINT, UINT, PVOID, LPBITMAPINFO, UINT)");
  }
  if (*(short *)(param_2 + 0x1a) == sVar1) {
    __src = (void *)(sVar2 * param_3 + iVar6);
    __n = sVar2;
    if ((int)local_30 <= (int)sVar2) {
      __n = local_30;
    }
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      memcpy(param_5,__src,__n);
      __src = (void *)((int)__src + sVar2);
      param_5 = (void *)((int)param_5 + local_30);
    } while (uVar8 < param_4);
  }
  else {
    FUN_0402cd10(0xf,"Convert from:");
    FUN_0402cd10(0xf,"    bmType = %d",*(undefined4 *)(param_2 + 8));
    FUN_0402cd10(0xf,"    bmWidth = %d",*(undefined4 *)(param_2 + 0xc));
    FUN_0402cd10(0xf,"    bmHeight = %d",*(undefined4 *)(param_2 + 0x10));
    FUN_0402cd10(0xf,"    bmWidthBytes = %d",*(undefined4 *)(param_2 + 0x14));
    FUN_0402cd10(0xf,"    bmPlanes = %u",*(undefined2 *)(param_2 + 0x18));
    FUN_0402cd10(0xf,"    bmBitsPixel = %u",*(undefined2 *)(param_2 + 0x1a));
    FUN_0402cd10(0xf,"Convert to:");
    FUN_0402cd10(0xf,"    width = %d",local_1c);
    FUN_0402cd10(0xf,"    height = %d",uVar7);
    FUN_0402cd10(0xf,"    planes = %u",uVar3);
    FUN_0402cd10(0xf,"    bpp = %u",sVar1);
    FUN_0402cd10(0xf,"    compression = %u",local_24);
    FUN_0402cd10(0xf,"    size = %u",local_28);
  }
joined_r0x0411e765:
  if (bVar4) {
    if (sVar1 == 0x18) {
      iVar6 = local_1c * 3 + 3;
      if (iVar6 < 0) {
        iVar6 = local_1c * 3 + 6;
      }
      local_1c = iVar6 >> 2;
    }
    else if (sVar1 != 0x20) {
      FUN_0402cd10(5,"Unsupported bitmap bits per pixel: %d",sVar1);
      param_6[5] = 0;
      return param_4;
    }
    param_6[5] = local_1c * 4 * ((uVar7 ^ uVar5) - uVar5);
  }
  return param_4;
}

// --- eON_GetDeviceCaps @0x0411fbd0 ---
/* source: gdi32 */

undefined4 eON_GetDeviceCaps(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_28 [20];
  undefined4 local_14;
  
  pcVar1 = param_2 + -4;
  switch(pcVar1) {
  case (char *)0x0:
    pcVar3 = "HORZSIZE";
    break;
  default:
    pcVar3 = "?";
    break;
  case (char *)0x2:
    pcVar3 = "VERTSIZE";
    break;
  case (char *)0x4:
    pcVar3 = "HORZRES";
    break;
  case (char *)0x6:
    pcVar3 = "VERTRES";
    break;
  case (char *)0x8:
    pcVar3 = "BITSPIXEL";
    break;
  case (char *)0xa:
    pcVar3 = "PLANES";
    break;
  case (char *)0x14:
    pcVar3 = "NUMCOLORS";
    break;
  case (char *)0x22:
    pcVar3 = "RASTERCAPS";
    break;
  case (char *)0x54:
    pcVar3 = "LOGPIXELSX";
    break;
  case (char *)0x56:
    pcVar3 = "LOGPIXELSY";
    break;
  case (char *)0x64:
    pcVar3 = "SIZEPALETTE";
    break;
  case (char *)0x70:
    pcVar3 = "VREFRESH";
  }
  pcVar5 = param_2;
  FUN_0402cd10(0x14,"GetDeviceCaps( hdc = %p, nIndex = %d (%s) )",param_1,param_2,pcVar3);
  uVar4 = OpenGLDisplay_GetPrimary();
  cVar2 = OpenGLDisplay_RefreshCurrentMode(uVar4,local_28);
  if (cVar2 != '\0') {
    switch(local_14) {
    default:
      pcVar5 = "INT eON_GetDeviceCaps(HDC, INT)";
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0xd7a,"INT eON_GetDeviceCaps(HDC, INT)");
      break;
    case 1:
    case 4:
    case 5:
      break;
    case 2:
      break;
    case 3:
    }
  }
  if (pcVar1 < (char *)0x71) {
                    /* WARNING: Could not recover jumptable at 0x0411fd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(&DAT_04318200 + (int)pcVar1 * 4))();
    return uVar4;
  }
  FUN_0402cd10(10,"Asked for %d (2)",param_2,pcVar5,pcVar3);
  FUN_0402cd10(0x14,"GetDeviceCaps() returning %d",0);
  return 0;
}

// --- eON_GetObjectA @0x04123640 ---
/* source: gdi32 */

size_t eON_GetObjectA(char *param_1,size_t param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  size_t __n;
  undefined4 *puVar9;
  undefined4 *__dest;
  bool bVar10;
  byte bVar11;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [31];
  undefined1 local_21;
  undefined4 *local_18;
  
  __dest = param_3;
  sVar5 = param_2;
  pcVar4 = param_1;
  bVar11 = 0;
  local_18 = &param_1;
  if (param_1 == (char *)0x0) {
    __n = 0;
    FUN_0402cd10(10,"Asked for NULL HGDIOBJ properties. Returning 0, but it\'s not ok.");
  }
  else {
    if (param_1[3] != '\0') {
      FUN_0400a810("!header->StockObjectNum",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x10b5,"INT eON_GetObjectA(HGDIOBJ, INT, PVOID)");
    }
    if (*pcVar4 == '\x06') {
      __n = 0x3c;
      if (__dest != (undefined4 *)0x0) {
        local_5c = *(undefined4 *)(pcVar4 + 8);
        if ((int)sVar5 < 0x3d) {
          __n = sVar5;
        }
        local_44 = *(undefined4 *)(pcVar4 + 0x20);
        local_58 = *(undefined4 *)(pcVar4 + 0xc);
        local_54 = *(undefined4 *)(pcVar4 + 0x10);
        local_50 = *(undefined4 *)(pcVar4 + 0x14);
        local_4c = *(undefined4 *)(pcVar4 + 0x18);
        local_48 = *(undefined4 *)(pcVar4 + 0x1c);
        eON_WideCharToMultiByte(0,0,pcVar4 + 0x24,0xffffffff,local_40,0x20,0,0);
        local_21 = 0;
        memcpy(__dest,&local_5c,__n);
      }
    }
    else if (*pcVar4 == '\a') {
      __n = 0x18;
      if ((__dest != (undefined4 *)0x0) && (__n = 0, 0x17 < (int)sVar5)) {
        puVar9 = *(undefined4 **)(pcVar4 + 0x20);
        if (puVar9 == (undefined4 *)0x0) {
          __n = 0x18;
          *__dest = *(undefined4 *)(pcVar4 + 8);
          __dest[1] = *(undefined4 *)(pcVar4 + 0xc);
          __dest[2] = *(undefined4 *)(pcVar4 + 0x10);
          __dest[3] = *(undefined4 *)(pcVar4 + 0x14);
          uVar3 = *(undefined4 *)(pcVar4 + 0x18);
          __dest[5] = 0;
          __dest[4] = uVar3;
        }
        else if ((int)sVar5 < 0x54) {
          *__dest = *puVar9;
          __dest[1] = puVar9[1];
          __dest[2] = puVar9[2];
          __dest[3] = puVar9[3];
          __dest[4] = puVar9[4];
          __n = 0x18;
          __dest[5] = puVar9[5];
        }
        else {
          bVar10 = ((uint)__dest & 1) != 0;
          uVar6 = 0x54;
          if (bVar10) {
            uVar1 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            *(undefined1 *)__dest = uVar1;
            __dest = (undefined4 *)((int)__dest + 1);
            uVar6 = 0x53;
          }
          if (((uint)__dest & 2) != 0) {
            uVar2 = *(undefined2 *)puVar9;
            uVar6 = uVar6 - 2;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            *(undefined2 *)__dest = uVar2;
            __dest = (undefined4 *)((int)__dest + 2);
          }
          iVar8 = 0;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *__dest = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            __dest = __dest + (uint)bVar11 * -2 + 1;
          }
          if ((uVar6 & 2) != 0) {
            *(undefined2 *)__dest = *(undefined2 *)puVar9;
            iVar8 = 2;
          }
          if (bVar10) {
            *(undefined1 *)((int)__dest + iVar8) = *(undefined1 *)((int)puVar9 + iVar8);
          }
          __n = 0x54;
        }
      }
    }
    else {
      __n = 0;
      FUN_0402cd10(5,"GetObjectA not written for this GDI object type! Add it.");
    }
  }
  return __n;
}

// --- eON_GetStockObject @0x04122920 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: gdi32 */

undefined4 eON_GetStockObject(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  puVar5 = (undefined4 *)&stack0xffffffa0;
  if (DAT_04515aa4 == '\0') {
    DAT_04515ac0 = malloc(0x18);
    if (DAT_04515ac0 != (undefined1 *)0x0) {
      *DAT_04515ac0 = 2;
      DAT_04515ac0[1] = 0;
      DAT_04515ac0[2] = 0;
      DAT_04515ac0[3] = 0;
      *(undefined4 *)(DAT_04515ac0 + 4) = 0;
      *(undefined4 *)(DAT_04515ac0 + 8) = 0;
      *(undefined4 *)(DAT_04515ac0 + 0xc) = 0xffffff;
      *(undefined4 *)(DAT_04515ac0 + 0x10) = 0;
      DAT_04515ac0[0x14] = 0;
    }
    DAT_04515ac4 = malloc(0x18);
    if (DAT_04515ac4 != (undefined1 *)0x0) {
      *DAT_04515ac4 = 2;
      DAT_04515ac4[1] = 0;
      DAT_04515ac4[2] = 0;
      DAT_04515ac4[3] = 0;
      *(undefined4 *)(DAT_04515ac4 + 4) = 0;
      *(undefined4 *)(DAT_04515ac4 + 8) = 0;
      *(undefined **)(DAT_04515ac4 + 0xc) = &DAT_00c0c0c0;
      *(undefined4 *)(DAT_04515ac4 + 0x10) = 0;
      DAT_04515ac4[0x14] = 0;
    }
    _DAT_04515ac8 = malloc(0x18);
    if (_DAT_04515ac8 != (undefined1 *)0x0) {
      *_DAT_04515ac8 = 2;
      _DAT_04515ac8[1] = 0;
      _DAT_04515ac8[2] = 0;
      _DAT_04515ac8[3] = 0;
      *(undefined4 *)(_DAT_04515ac8 + 4) = 0;
      *(undefined4 *)(_DAT_04515ac8 + 8) = 0;
      *(undefined **)(_DAT_04515ac8 + 0xc) = &DAT_00808080;
      *(undefined4 *)(_DAT_04515ac8 + 0x10) = 0;
      _DAT_04515ac8[0x14] = 0;
    }
    _DAT_04515acc = malloc(0x18);
    if (_DAT_04515acc != (undefined1 *)0x0) {
      *_DAT_04515acc = 2;
      _DAT_04515acc[1] = 0;
      _DAT_04515acc[2] = 0;
      _DAT_04515acc[3] = 0;
      *(undefined4 *)(_DAT_04515acc + 4) = 0;
      *(undefined4 *)(_DAT_04515acc + 8) = 0;
      *(undefined **)(_DAT_04515acc + 0xc) = &DAT_00404040;
      *(undefined4 *)(_DAT_04515acc + 0x10) = 0;
      _DAT_04515acc[0x14] = 0;
    }
    _DAT_04515ad0 = malloc(0x18);
    if (_DAT_04515ad0 != (undefined1 *)0x0) {
      *_DAT_04515ad0 = 2;
      _DAT_04515ad0[1] = 0;
      _DAT_04515ad0[2] = 0;
      _DAT_04515ad0[3] = 0;
      *(undefined4 *)(_DAT_04515ad0 + 4) = 0;
      *(undefined4 *)(_DAT_04515ad0 + 8) = 0;
      *(undefined4 *)(_DAT_04515ad0 + 0xc) = 0;
      *(undefined4 *)(_DAT_04515ad0 + 0x10) = 0;
      _DAT_04515ad0[0x14] = 0;
    }
    _DAT_04515ad4 = malloc(0x18);
    if (_DAT_04515ad4 != (undefined1 *)0x0) {
      *_DAT_04515ad4 = 2;
      _DAT_04515ad4[1] = 0;
      _DAT_04515ad4[2] = 0;
      _DAT_04515ad4[3] = 0;
      *(undefined4 *)(_DAT_04515ad4 + 4) = 0;
      *(undefined4 *)(_DAT_04515ad4 + 8) = 1;
      *(undefined4 *)(_DAT_04515ad4 + 0xc) = 0;
      *(undefined4 *)(_DAT_04515ad4 + 0x10) = 0;
      _DAT_04515ad4[0x14] = 0;
    }
    _DAT_04515b08 = malloc(0x18);
    if (_DAT_04515b08 != (undefined1 *)0x0) {
      *_DAT_04515b08 = 2;
      _DAT_04515b08[1] = 0;
      _DAT_04515b08[2] = 0;
      _DAT_04515b08[3] = 0;
      *(undefined4 *)(_DAT_04515b08 + 4) = 0;
      *(undefined4 *)(_DAT_04515b08 + 8) = 0;
      *(undefined4 *)(_DAT_04515b08 + 0xc) = 0xffffff;
      *(undefined4 *)(_DAT_04515b08 + 0x10) = 0;
      _DAT_04515b08[0x14] = 0;
    }
    _DAT_04515ad8 = malloc(0x14);
    if (_DAT_04515ad8 != (undefined1 *)0x0) {
      *_DAT_04515ad8 = 1;
      _DAT_04515ad8[1] = 0;
      _DAT_04515ad8[2] = 0;
      _DAT_04515ad8[3] = 0;
      *(undefined4 *)(_DAT_04515ad8 + 4) = 0;
      *(undefined4 *)(_DAT_04515ad8 + 8) = 0;
      *(undefined4 *)(_DAT_04515ad8 + 0xc) = 0;
      *(undefined4 *)(_DAT_04515ad8 + 0x10) = 0xffffff;
    }
    _DAT_04515adc = malloc(0x14);
    if (_DAT_04515adc != (undefined1 *)0x0) {
      *_DAT_04515adc = 1;
      _DAT_04515adc[1] = 0;
      _DAT_04515adc[2] = 0;
      _DAT_04515adc[3] = 0;
      *(undefined4 *)(_DAT_04515adc + 4) = 0;
      *(undefined4 *)(_DAT_04515adc + 8) = 0;
      *(undefined4 *)(_DAT_04515adc + 0xc) = 0;
      *(undefined4 *)(_DAT_04515adc + 0x10) = 0;
    }
    _DAT_04515ae0 = malloc(0x14);
    if (_DAT_04515ae0 != (undefined1 *)0x0) {
      *_DAT_04515ae0 = 1;
      _DAT_04515ae0[1] = 0;
      _DAT_04515ae0[2] = 0;
      _DAT_04515ae0[3] = 0;
      *(undefined4 *)(_DAT_04515ae0 + 4) = 0;
      *(undefined4 *)(_DAT_04515ae0 + 8) = 5;
      *(undefined4 *)(_DAT_04515ae0 + 0xc) = 0;
      *(undefined4 *)(_DAT_04515ae0 + 0x10) = 0;
    }
    _DAT_04515b0c = malloc(0x14);
    if (_DAT_04515b0c != (undefined1 *)0x0) {
      *_DAT_04515b0c = 1;
      _DAT_04515b0c[1] = 0;
      _DAT_04515b0c[2] = 0;
      _DAT_04515b0c[3] = 0;
      *(undefined4 *)(_DAT_04515b0c + 4) = 0;
      *(undefined4 *)(_DAT_04515b0c + 8) = 0;
      *(undefined4 *)(_DAT_04515b0c + 0xc) = 0;
      *(undefined4 *)(_DAT_04515b0c + 0x10) = 0;
    }
    puVar2 = malloc(0x10);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 5;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined2 *)(puVar2 + 8) = 0x300;
      *(undefined2 *)(puVar2 + 10) = 0x14;
      puVar3 = malloc(0x50);
      *(undefined4 **)(puVar2 + 0xc) = puVar3;
      puVar6 = &DAT_04318464;
      for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      }
    }
    _DAT_04515afc = puVar2;
    _DAT_04515ae4 = eON_CreateBitmapIndirect();
    puVar5 = (undefined4 *)&stack0xffffff9c;
    _DAT_04515ae8 = malloc(8);
    *_DAT_04515ae8 = 6;
    _DAT_04515aec = malloc(8);
    *_DAT_04515aec = 6;
    _DAT_04515af0 = malloc(8);
    *_DAT_04515af0 = 6;
    _DAT_04515af4 = malloc(8);
    *_DAT_04515af4 = 6;
    _DAT_04515af8 = malloc(8);
    *_DAT_04515af8 = 6;
    _DAT_04515b00 = malloc(8);
    *_DAT_04515b00 = 6;
    _DAT_04515b04 = malloc(8);
    *_DAT_04515b04 = 6;
    iVar4 = 1;
    do {
      iVar1 = *(int *)(iVar4 * 4 + 0x4515abc);
      *(char *)(iVar1 + 3) = (char)iVar4;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar1 + 1) = 1;
      *(undefined1 *)(iVar1 + 2) = 0;
      *(undefined4 *)(iVar1 + 4) = 0;
    } while (iVar4 != 0x15);
    DAT_04515aa4 = '\x01';
  }
  if (0x13 < param_1) {
    puVar5[3] = "void* eON_GetStockObject(INT)";
    puVar5[2] = 0x38f;
    puVar5[1] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp";
    *puVar5 = "fnObject < 20";
    puVar5[-1] = 0x412296c;
    FUN_0400a810();
  }
  return (&DAT_04515ac0)[param_1];
}

// --- eON_GetTextExtentExPointA @0x04120b80 ---
/* source: gdi32 */

undefined4
eON_GetTextExtentExPointA
          (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  char **ppcVar3;
  void *pvVar4;
  char *local_78;
  char *local_74;
  undefined4 local_70;
  char *local_6c;
  undefined4 local_64;
  
  if ((param_3 == 0) || (uVar2 = 0, param_2 != 0)) {
    pvVar4 = (void *)0x0;
    ppcVar3 = (char **)&stack0xffffffa0;
    if (param_2 != 0) {
      local_64 = 0x4120bd8;
      pvVar4 = malloc(param_3 * 2);
      local_64 = 0x4120bfe;
      iVar1 = eON_MultiByteToWideChar();
      ppcVar3 = &local_78;
      if (param_3 != iVar1) {
        local_6c = "WINBOOL eON_GetTextExtentExPointA(HDC, LPCSTR, INT, INT, LPINT, LPINT, LPSIZE)";
        local_70 = 0xa33;
        local_74 = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp";
        local_78 = 
        "eON_MultiByteToWideChar( 0, 0, lpszStr, cchString, wideStr, cchString ) == cchString";
        FUN_0400a810();
        ppcVar3 = &local_78;
      }
    }
    ppcVar3[6] = (char *)param_7;
    ppcVar3[2] = (char *)param_3;
    ppcVar3[1] = pvVar4;
    ppcVar3[5] = (char *)param_6;
    ppcVar3[4] = (char *)param_5;
    ppcVar3[3] = (char *)param_4;
    *ppcVar3 = (char *)param_1;
    ppcVar3[-1] = (char *)0x4120c5b;
    uVar2 = eON_GetTextExtentExPointW();
    ppcVar3[-7] = pvVar4;
    ppcVar3[-8] = (char *)0x4120c69;
    free(ppcVar3[-7]);
  }
  return uVar2;
}

// --- eON_GetTextExtentExPointI @0x04120790 ---
/* source: gdi32 */

undefined4
eON_GetTextExtentExPointI
          (int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_74;
  int local_5c [17];
  undefined4 *local_18;
  
  piVar5 = param_7;
  iVar10 = param_6;
  piVar4 = param_5;
  iVar9 = param_4;
  iVar3 = param_3;
  iVar2 = param_2;
  iVar8 = param_1;
  local_18 = &param_1;
  eON_FontCache_EnsureInitialized();
  uVar6 = 0;
  if ((((iVar8 != 0) && (iVar8 + 0x68686869U < 0x80)) &&
      (iVar1 = *(int *)(&DAT_04512ac4 + (iVar8 + 0x68686869U) * 0x60), iVar1 != 0)) &&
     (*(char *)(iVar1 + 3) == '\0')) {
    eON_GetTextMetrics(iVar8,local_5c);
    if (piVar5 == (int *)0x0) {
      FUN_0400a810("lpSize",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x9a2,
                   "WINBOOL eON_GetTextExtentExPointI(HDC, LPWORD, INT, INT, LPINT, LPINT, LPSIZE)")
      ;
    }
    *piVar5 = 0;
    piVar5[1] = local_5c[0];
    if (iVar3 < 1) {
      local_74 = 0;
    }
    else {
      iVar11 = 0;
      local_74 = 0;
      iVar8 = *(int *)(iVar1 + 100);
      if (iVar10 == 0) {
        if (piVar4 == (int *)0x0) {
          local_74 = 0;
          do {
            iVar8 = FT_Load_Glyph(iVar8,*(undefined2 *)(iVar2 + iVar11 * 2),0x208);
            if (iVar8 != 0) {
              return 0;
            }
            iVar11 = iVar11 + 1;
            local_74 = local_74 + 1;
            iVar8 = *(int *)(iVar1 + 100);
            *piVar5 = *piVar5 + (*(int *)(*(int *)(iVar8 + 0x54) + 0x28) + 0x3f >> 6);
          } while (iVar11 != iVar3);
        }
        else {
          local_74 = 0;
          do {
            iVar8 = FT_Load_Glyph(iVar8,*(undefined2 *)(iVar2 + iVar11 * 2),0x208);
            if (iVar8 != 0) {
              return 0;
            }
            iVar8 = *(int *)(iVar1 + 100);
            iVar10 = (*(int *)(*(int *)(iVar8 + 0x54) + 0x28) + 0x3f >> 6) + *piVar5;
            *piVar5 = iVar10;
            iVar11 = iVar11 + 1;
            local_74 = local_74 + (uint)(iVar10 <= iVar9);
          } while (iVar11 != iVar3);
        }
      }
      else if (piVar4 == (int *)0x0) {
        local_74 = 0;
        do {
          iVar8 = FT_Load_Glyph(iVar8,*(undefined2 *)(iVar2 + iVar11 * 2),0x208);
          if (iVar8 != 0) {
            return 0;
          }
          local_74 = local_74 + 1;
          iVar8 = *(int *)(iVar1 + 100);
          iVar9 = (*(int *)(*(int *)(iVar8 + 0x54) + 0x28) + 0x3f >> 6) + *piVar5;
          *piVar5 = iVar9;
          *(int *)(iVar10 + iVar11 * 4) = iVar9;
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar3);
      }
      else {
        do {
          iVar8 = FT_Load_Glyph(iVar8,*(undefined2 *)(iVar2 + iVar11 * 2),0x208);
          if (iVar8 != 0) {
            return 0;
          }
          iVar8 = *(int *)(iVar1 + 100);
          iVar7 = (*(int *)(*(int *)(iVar8 + 0x54) + 0x28) + 0x3f >> 6) + *piVar5;
          *piVar5 = iVar7;
          if (iVar7 <= iVar9) {
            local_74 = local_74 + 1;
            *(int *)(iVar10 + iVar11 * 4) = iVar7;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar3);
      }
    }
    uVar6 = 1;
    if (piVar4 != (int *)0x0) {
      *piVar4 = local_74;
    }
  }
  return uVar6;
}

// --- eON_SelectObject @0x0411dbc0 ---
/* source: gdi32 */

char * eON_SelectObject(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int local_24;
  
  if (param_2 == (char *)0x0) {
switchD_0411dc33_caseD_0:
    pcVar3 = (char *)0x0;
  }
  else {
    iVar2 = -1;
    if (param_1 != 0) {
      iVar2 = param_1 + 0x68686869;
    }
    if ((&DAT_04512aa8)[iVar2 * 0x18] == 0) {
      FUN_0400a810("gDrawingContexts[dcNum].Used",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x4c4,"void* eON_SelectObject(HDC, HGDIOBJ)");
    }
    cVar1 = *param_2;
    switch(cVar1) {
    default:
      goto switchD_0411dc33_caseD_0;
    case '\x01':
      pcVar3 = *(char **)(&DAT_04512acc + iVar2 * 0x60);
      break;
    case '\x02':
      pcVar3 = *(char **)(&DAT_04512ad0 + iVar2 * 0x60);
      break;
    case '\x05':
      pcVar3 = *(char **)(&DAT_04512ad4 + iVar2 * 0x60);
      break;
    case '\x06':
      pcVar3 = *(char **)(&DAT_04512ac4 + iVar2 * 0x60);
      break;
    case '\a':
      pcVar3 = (char *)(&DAT_04512ac8)[iVar2 * 0x18];
      break;
    case '\b':
      return (char *)0xffffffff;
    }
    if (pcVar3 != param_2) {
      if (pcVar3 != (char *)0x0) {
        local_24 = 0;
        if (*(int *)(pcVar3 + 4) != 0) {
          local_24 = *(int *)(pcVar3 + 4) + -1;
          *(int *)(pcVar3 + 4) = local_24;
        }
        if (((pcVar3[1] == '\0') && (pcVar3[2] != '\0')) && (local_24 == 0)) {
          eON_DeleteObject(pcVar3);
          cVar1 = *param_2;
        }
      }
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      switch(cVar1) {
      case '\x01':
        *(char **)(&DAT_04512acc + iVar2 * 0x60) = param_2;
        cVar1 = *param_2;
        break;
      case '\x02':
        *(char **)(&DAT_04512ad0 + iVar2 * 0x60) = param_2;
        cVar1 = *param_2;
        break;
      case '\x05':
        *(char **)(&DAT_04512ad4 + iVar2 * 0x60) = param_2;
        cVar1 = *param_2;
        break;
      case '\x06':
        *(char **)(&DAT_04512ac4 + iVar2 * 0x60) = param_2;
        cVar1 = *param_2;
        break;
      case '\a':
        (&DAT_04512ac8)[iVar2 * 0x18] = param_2;
        cVar1 = *param_2;
      }
    }
    if ((cVar1 == '\x02') && (param_2[0x14] != '\0')) {
      if ((param_1 != 0) && (param_1 + 0x68686869U < 0x80)) {
        iVar2 = (param_1 + 0x68686869U) * 0x60;
        *(undefined2 *)(&DAT_04512af8 + iVar2) = 0;
        *(undefined2 *)(&DAT_04512afa + iVar2) = 0;
      }
      param_2[0x14] = '\0';
    }
  }
  return pcVar3;
}

// --- eON_SetDIBits @0x0411cee0 ---
/* source: gdi32 */

int eON_SetDIBits(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int param_7)

{
  ushort uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *__dest;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *__ptr;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  size_t local_44;
  size_t local_40;
  uint local_3c;
  size_t local_30;
  size_t local_28;
  byte *local_24;
  
  if (param_7 == 1) {
    FUN_0402cd10(5,"SetDIBits() doesn\'t support palette colors in bitmaps yet. Add it.");
    if (param_1 == -0x68686869) {
      return 0;
    }
    FUN_0402cd10(5,"SetDIBits() doesn\'t support non-screen DC yet. Add it.");
    return 0;
  }
  if (((param_5 == 0) || (param_2 == 0)) || (param_6 == (int *)0x0)) {
    eON_SetLastError(0x57);
    return 0;
  }
  uVar12 = param_6[1];
  uVar9 = *(uint *)(param_2 + 0xc);
  if ((uVar12 != uVar9) || (param_6[2] != *(int *)(param_2 + 0x10))) {
    FUN_0402cd10(5,
                 "SetDIBits() supports only copying between same-sized bitmaps at the moment. Add whatever you need."
                );
    return 0;
  }
  if (param_6[2] < param_4 + param_3) {
    FUN_0402cd10(5,"SetDIBits() error - trying to copy from the memory after the bitmap.");
    return 0;
  }
  __ptr = (undefined4 *)0x0;
  if (param_7 == 0) {
    __ptr = (undefined4 *)0x0;
    if (*(ushort *)((int)param_6 + 0xe) < 9) {
      bVar4 = (byte)*(ushort *)((int)param_6 + 0xe);
      if (*param_6 == 0xc) {
        local_3c = 1 << (bVar4 & 0x1f);
        local_30 = 3;
        piVar8 = param_6 + 3;
        sVar2 = local_3c << 2;
      }
      else {
        local_3c = param_6[8];
        if (local_3c < 0x101) {
          if (local_3c == 0) {
            local_3c = 1 << (bVar4 & 0x1f);
          }
          sVar2 = local_3c << 2;
        }
        else {
          sVar2 = 0x400;
          local_3c = 0x100;
        }
        local_30 = 4;
        piVar8 = param_6 + 10;
      }
      __ptr = calloc(1,sVar2);
      if (local_3c != 0) {
        uVar11 = 0;
        puVar3 = __ptr;
        do {
          uVar11 = uVar11 + 1;
          memcpy(puVar3,piVar8,local_30);
          piVar8 = (int *)((int)piVar8 + local_30);
          puVar3 = puVar3 + 1;
        } while (uVar11 != local_3c);
      }
    }
  }
  switch(*(undefined2 *)(param_2 + 0x1a)) {
  default:
    FUN_0402cd10(5,"Bitmap depth not supported!!: %d",*(undefined2 *)(param_2 + 0x1a));
    local_44 = 0;
    uVar12 = param_6[1];
    break;
  case 1:
    iVar10 = uVar9 + 0x1e;
    if (-1 < (int)(uVar9 + 0xf)) {
      iVar10 = uVar9 + 0xf;
    }
    local_44 = (iVar10 >> 4) * 2;
    break;
  case 4:
    iVar10 = uVar9 + 6;
    if (-1 < (int)(uVar9 + 3)) {
      iVar10 = uVar9 + 3;
    }
    local_44 = (iVar10 >> 2) * 2;
    break;
  case 8:
    local_44 = (uVar9 & 1) + uVar9;
    break;
  case 0xf:
  case 0x10:
    local_44 = uVar9 * 2;
    break;
  case 0x18:
    local_44 = (uVar9 & 1) + uVar9 * 3;
    break;
  case 0x20:
    local_44 = uVar9 << 2;
  }
  switch(*(undefined2 *)((int)param_6 + 0xe)) {
  default:
    FUN_0402cd10(5,"Unsupported bitmap bits per pixel: %d",*(undefined2 *)((int)param_6 + 0xe));
    local_40 = 0;
    goto LAB_0411d0f0;
  case 1:
    iVar10 = uVar12 + 0x1f;
    if ((int)(uVar12 + 0x1f) < 0) {
      iVar10 = uVar12 + 0x3e;
    }
    uVar12 = iVar10 >> 5;
    break;
  case 4:
    iVar10 = uVar12 + 7;
    if ((int)(uVar12 + 7) < 0) {
      iVar10 = uVar12 + 0xe;
    }
    uVar12 = iVar10 >> 3;
    break;
  case 8:
    iVar10 = uVar12 + 3;
    if ((int)(uVar12 + 3) < 0) {
      iVar10 = uVar12 + 6;
    }
    uVar12 = iVar10 >> 2;
    break;
  case 0xf:
  case 0x10:
    uVar12 = (int)(uVar12 + 1) / 2;
    break;
  case 0x18:
    iVar10 = uVar12 * 3 + 3;
    if (iVar10 < 0) {
      iVar10 = uVar12 * 3 + 6;
    }
    uVar12 = iVar10 >> 2;
    break;
  case 0x20:
    break;
  }
  local_40 = uVar12 << 2;
LAB_0411d0f0:
  puVar3 = *(undefined4 **)(param_2 + 0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    sVar2 = *(int *)(param_2 + 0x10) * local_44;
    if (sVar2 == 0) {
      FUN_0400a810("totalSize",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                   0x5c4,
                   "INT eON_SetDIBits(HDC, HBITMAP, UINT, UINT, PCVOID, const BITMAPINFO*, UINT)");
    }
    puVar3 = malloc(sVar2);
    *(undefined4 **)(param_2 + 0x1c) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      if (__ptr == (undefined4 *)0x0) {
        return 0;
      }
      free(__ptr);
      return 0;
    }
  }
  uVar5 = *(ushort *)((int)param_6 + 0xe);
  uVar1 = *(ushort *)(param_2 + 0x1a);
  local_24 = (byte *)(local_40 * param_3 + param_5);
  if (uVar5 == uVar1) {
    if (param_4 != 0) {
      sVar2 = local_44;
      if ((int)local_40 <= (int)local_44) {
        sVar2 = local_40;
      }
      iVar10 = 0;
      iVar6 = 0;
      while( true ) {
        iVar10 = iVar10 + 1;
        memcpy((void *)((int)puVar3 + iVar6),local_24,sVar2);
        iVar6 = iVar6 + local_44;
        local_24 = local_24 + local_40;
        if (iVar10 == param_4) break;
        puVar3 = *(undefined4 **)(param_2 + 0x1c);
      }
      uVar5 = *(ushort *)((int)param_6 + 0xe);
    }
  }
  else if (param_4 != 0) {
    local_3c = 0;
    bVar13 = uVar1 == 0x20;
    local_30 = 0;
    iVar10 = param_6[1];
    if (uVar5 != 4 || !bVar13) goto LAB_0411d1f3;
    do {
      if (__ptr == (undefined4 *)0x0) goto LAB_0411d4fb;
      iVar6 = 0;
      pbVar7 = local_24;
      if (0 < iVar10) {
        do {
          iVar6 = iVar6 + 2;
          *puVar3 = __ptr[*pbVar7];
          puVar3[1] = *__ptr;
          puVar3 = puVar3 + 2;
          pbVar7 = pbVar7 + 1;
        } while (iVar6 < iVar10);
      }
      while( true ) {
        local_30 = local_30 + 1;
        if (local_30 == param_4) {
          uVar5 = *(ushort *)((int)param_6 + 0xe);
          goto LAB_0411d347;
        }
        local_3c = local_3c + local_44;
        local_24 = local_24 + local_40;
        puVar3 = (undefined4 *)(*(int *)(param_2 + 0x1c) + local_3c);
        iVar10 = param_6[1];
        if (uVar5 == 4 && bVar13) break;
LAB_0411d1f3:
        if (uVar1 != 0x18 || uVar5 != 8) {
          if (!bVar13 || uVar5 != 8) {
            if (uVar5 == 0x18 && bVar13) {
              if (0 < iVar10) {
                pbVar7 = local_24;
                do {
                  *(undefined2 *)puVar3 = *(undefined2 *)pbVar7;
                  bVar4 = pbVar7[2];
                  pbVar7 = pbVar7 + 3;
                  *(undefined1 *)((int)puVar3 + 3) = 0xff;
                  *(byte *)((int)puVar3 + 2) = bVar4;
                  puVar3 = puVar3 + 1;
                } while (pbVar7 != local_24 + iVar10 * 3);
              }
            }
            else {
              FUN_0402cd10(10,
                           "Unsupported bitmap bytes conversion - add it when you need it. The game will now probably crash."
                          );
            }
          }
          else {
            if (__ptr == (undefined4 *)0x0) goto LAB_0411d4fb;
            iVar6 = 0;
            if (0 < iVar10) {
              do {
                pbVar7 = local_24 + iVar6;
                iVar6 = iVar6 + 1;
                *puVar3 = __ptr[*pbVar7];
                puVar3 = puVar3 + 1;
              } while (iVar6 != iVar10);
            }
          }
        }
        else if (__ptr == (undefined4 *)0x0) {
LAB_0411d4fb:
          FUN_0402cd10(10,
                       "Converting from 8-bit values, yet no palette given! Fix it. The game will now probably crash."
                      );
        }
        else {
          iVar6 = 0;
          if (0 < iVar10) {
            do {
              bVar4 = local_24[iVar6];
              iVar6 = iVar6 + 1;
              *(undefined2 *)puVar3 = *(undefined2 *)(__ptr + bVar4);
              *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)(__ptr + bVar4) + 2);
              puVar3 = (undefined4 *)((int)puVar3 + 3);
            } while (iVar6 != iVar10);
          }
        }
      }
    } while( true );
  }
LAB_0411d347:
  if (((uVar5 < 9) && (param_7 == 0)) && (*(ushort *)(param_2 + 0x1a) < 9)) {
    if (*(void **)(param_2 + 0x24) != (void *)0x0) {
      free(*(void **)(param_2 + 0x24));
    }
    if (*param_6 == 0xc) {
      piVar8 = param_6 + 3;
      local_28 = 3;
      local_24 = (byte *)(1 << ((byte)*(undefined2 *)((int)param_6 + 0xe) & 0x1f));
      sVar2 = (int)local_24 << 2;
    }
    else {
      local_24 = (byte *)param_6[8];
      if (local_24 < 0x101) {
        if (local_24 == (byte *)0x0) {
          sVar2 = 0;
          if (*(ushort *)((int)param_6 + 0xe) < 9) {
            local_24 = (byte *)(1 << ((byte)*(ushort *)((int)param_6 + 0xe) & 0x1f));
            sVar2 = (int)local_24 << 2;
          }
        }
        else {
          sVar2 = (int)local_24 << 2;
        }
      }
      else {
        sVar2 = 0x400;
        local_24 = (byte *)0x100;
      }
      piVar8 = param_6 + 10;
      local_28 = 4;
    }
    *(size_t *)(param_2 + 0x28) = sVar2;
    __dest = calloc(1,sVar2);
    *(void **)(param_2 + 0x24) = __dest;
    if (local_24 != (byte *)0x0) {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        memcpy(__dest,piVar8,local_28);
        piVar8 = (int *)((int)piVar8 + local_28);
        __dest = (void *)((int)__dest + 4);
      } while ((byte *)uVar9 != local_24);
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    free(__ptr);
  }
  return param_4;
}

// --- gdi32_0411c9a0 @0x0411c9a0 ---
/* source: gdi32 */

undefined4 gdi32_0411c9a0(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 + 0x68686869;
    if (uVar1 < 0x80) goto LAB_0411c9b9;
  }
  FUN_0400a810("number < 128",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
               0x24a,"eON_Window* HDC_GetWindowFromHDC(HDC)");
LAB_0411c9b9:
  if ((&DAT_04512aa8)[uVar1 * 0x18] == 0) {
    FUN_0400a810("gDrawingContexts[number].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp",
                 0x24b,"eON_Window* HDC_GetWindowFromHDC(HDC)");
  }
  return (&DAT_04512ab4)[uVar1 * 0x18];
}

// --- gdi32_0411dec0 @0x0411dec0 ---
/* source: gdi32 */

undefined4 gdi32_0411dec0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar1 = 0;
  if ((param_1 != 0) && (param_1 + 0x68686869U < 0x80)) {
    iVar4 = (param_1 + 0x68686869U) * 0x60;
    if (*(int *)(&DAT_04512abc + iVar4) == 0) {
      if (*(int *)(&DAT_04512ac0 + iVar4) != 0) {
        FUN_0400a810("dc->PixelFormats == __null",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                     ,0x133,"void MakeSurePixelFormatsInitialised(HDC_DrawingContext*)");
      }
      puVar2 = malloc(0x78);
      *(undefined4 **)(&DAT_04512ac0 + iVar4) = puVar2;
      ppuVar5 = &PTR_DAT_043186e0;
      for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      }
      *(undefined4 *)(&DAT_04512abc + iVar4) = 3;
    }
    uVar1 = *(undefined4 *)(&DAT_04512ab8 + iVar4);
  }
  return uVar1;
}

// --- gdi32_0411df70 @0x0411df70 ---
/* source: gdi32 */

int gdi32_0411df70(int param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar1 = 0;
  if ((param_1 != 0) && (param_1 + 0x68686869U < 0x80)) {
    iVar4 = (param_1 + 0x68686869U) * 0x60;
    iVar1 = *(int *)(&DAT_04512abc + iVar4);
    if (iVar1 == 0) {
      if (*(int *)(&DAT_04512ac0 + iVar4) != 0) {
        FUN_0400a810("dc->PixelFormats == __null",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                     ,0x133,"void MakeSurePixelFormatsInitialised(HDC_DrawingContext*)");
      }
      puVar2 = malloc(0x78);
      *(undefined4 **)(&DAT_04512ac0 + iVar4) = puVar2;
      iVar1 = 3;
      ppuVar5 = &PTR_DAT_043186e0;
      for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      }
      *(undefined4 *)(&DAT_04512abc + iVar4) = 3;
    }
    if (param_4 != (void *)0x0) {
      if ((param_2 == 0) || (iVar1 < param_2)) {
        return 0;
      }
      __n = 0x28;
      if (param_3 < 0x29) {
        __n = param_3;
      }
      if (__n != 0) {
        memcpy(param_4,(void *)(*(int *)(&DAT_04512ac0 + iVar4) + (param_2 * 5 + -5) * 8),__n);
        iVar1 = *(int *)(&DAT_04512abc + iVar4);
      }
    }
  }
  return iVar1;
}

// --- gdi32_0411e090 @0x0411e090 ---
/* source: gdi32 */

undefined4 gdi32_0411e090(int param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined **ppuVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  bVar12 = 0;
  uVar1 = 0;
  if ((((param_3 != (short *)0x0) && (param_2 != 0)) && (param_1 != 0)) &&
     (param_1 + 0x68686869U < 0x80)) {
    iVar2 = (param_1 + 0x68686869U) * 0x60;
    iVar4 = *(int *)(&DAT_04512abc + iVar2);
    if (iVar4 == 0) {
      if (*(int *)(&DAT_04512ac0 + iVar2) != 0) {
        FUN_0400a810("dc->PixelFormats == __null",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp"
                     ,0x133,"void MakeSurePixelFormatsInitialised(HDC_DrawingContext*)");
      }
      puVar3 = malloc(0x78);
      *(undefined4 **)(&DAT_04512ac0 + iVar2) = puVar3;
      ppuVar11 = &PTR_DAT_043186e0;
      for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *ppuVar11;
        ppuVar11 = ppuVar11 + (uint)bVar12 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar12 * -2 + 1;
      }
      iVar4 = 3;
      *(undefined4 *)(&DAT_04512abc + iVar2) = 3;
    }
    uVar1 = 0;
    if (((param_2 <= iVar4) && (*param_3 == 0x28)) &&
       ((param_3[1] == 1 && ((char)param_3[4] == '\0')))) {
      FUN_0402cd10(5,"SetPixelFormat( hDC = %p, iPixelFormat = %d, ppfd = %p )",param_1,param_2,
                   param_3);
      FUN_0402cd10(5,"    attempts to set pixel format descriptor:");
      FUN_0402cd10(5,"        dwFlags = %p",*(undefined4 *)(param_3 + 2));
      uVar5 = (uint)*(byte *)((int)param_3 + 0x11);
      uVar6 = (uint)*(byte *)(param_3 + 8);
      uVar7 = (uint)*(byte *)((int)param_3 + 0xf);
      FUN_0402cd10(5,
                   "        color bits = %u, red %u << %u , green %u << %u, blue %u << %u, alpha %u << %u"
                   ,*(undefined1 *)((int)param_3 + 9),(char)param_3[5],
                   *(undefined1 *)((int)param_3 + 0xb),(char)param_3[6],
                   *(undefined1 *)((int)param_3 + 0xd),(char)param_3[7],uVar7,uVar6,uVar5);
      FUN_0402cd10(5,"        accum bits = %u, red %u, green %u, blue %u, alpha %u",(char)param_3[9]
                   ,*(undefined1 *)((int)param_3 + 0x13),(char)param_3[10],
                   *(undefined1 *)((int)param_3 + 0x15),(char)param_3[0xb]);
      FUN_0402cd10(5,"        depth bits = %u, stencil bits = %u",
                   *(undefined1 *)((int)param_3 + 0x17),(char)param_3[0xc]);
      uVar1 = *(undefined4 *)(param_3 + 0x12);
      uVar14 = *(undefined4 *)(param_3 + 0x10);
      uVar13 = *(undefined4 *)(param_3 + 0xe);
      uVar8 = (uint)*(byte *)((int)param_3 + 0x1b);
      uVar9 = (uint)*(byte *)(param_3 + 0xd);
      uVar10 = (uint)*(byte *)((int)param_3 + 0x19);
      FUN_0402cd10(5,
                   "        cAuxBuffers = %u, iLayerType = %u, bReserved = %u, dwLayerMask = %u, dwVisibleMask = %u, dwDamageMask = %u"
                   ,uVar10,uVar9,uVar8,uVar13,uVar14,uVar1);
      if (*(char *)((int)param_3 + 0x17) == ' ') {
        if (((char)param_3[0xc] == '\b') && (DAT_0451ca78 == '\0')) {
          FUN_0402cd10(10,
                       "SetPixelFormat tried to set 32-bit depth with 8-bit stencil, but as OpenGL driver doesn\'t support that, we refused."
                       ,uVar10,uVar9,uVar8,uVar13,uVar14,uVar1,uVar7,uVar6,uVar5);
          return 0;
        }
      }
      else if ((((*(char *)((int)param_3 + 0x17) == '\x18') && ((char)param_3[0xc] == '\b')) &&
               (DAT_0451ca65 == '\0')) && (DAT_0451c9b2 == '\0')) {
        FUN_0402cd10(10,
                     "SetPixelFormat tried to set 24-bit depth with 8-bit stencil, but as OpenGL driver doesn\'t support that, we refused."
                     ,uVar10,uVar9,uVar8,uVar13,uVar14,uVar1,uVar7,uVar6,uVar5);
        return 0;
      }
      puVar3 = (undefined4 *)((param_2 * 5 + -5) * 8 + *(int *)(&DAT_04512ac0 + iVar2));
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = *(undefined4 *)(param_3 + 2);
      puVar3[2] = *(undefined4 *)(param_3 + 4);
      puVar3[3] = *(undefined4 *)(param_3 + 6);
      puVar3[4] = *(undefined4 *)(param_3 + 8);
      puVar3[5] = *(undefined4 *)(param_3 + 10);
      puVar3[6] = *(undefined4 *)(param_3 + 0xc);
      puVar3[7] = *(undefined4 *)(param_3 + 0xe);
      puVar3[8] = *(undefined4 *)(param_3 + 0x10);
      puVar3[9] = *(undefined4 *)(param_3 + 0x12);
      uVar1 = 1;
      *(int *)(&DAT_04512ab8 + iVar2) = param_2;
    }
  }
  return uVar1;
}

// --- attached helper FUN_0000e440 @0x0400e440 (call-graph exclusive to this TU) ---
void FUN_0400e440(int *param_1)

{
  int *piVar1;
  undefined4 local_20;
  
  piVar1 = (int *)&stack0xffffffe4;
  local_20 = 0x400e452;
  (**(code **)(*param_1 + 0x20))();
  if ((void *)param_1[4] != (void *)0x0) {
    local_20 = 0x400e461;
    operator_delete__((void *)param_1[4]);
    param_1[4] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    local_20 = 0x400e477;
    operator_delete__((void *)param_1[5]);
    param_1[5] = 0;
  }
  param_1[3] = 0;
  if (param_1[0xb] != 0) {
    local_20 = 0x400e494;
    eON_DeleteObject();
    param_1[0xb] = 0;
    piVar1 = &local_20;
  }
  if (param_1[0xc] != 0) {
    *piVar1 = param_1[0xc];
    piVar1[-1] = 0x400e4ad;
    eON_DeleteObject();
    param_1[0xc] = 0;
  }
  return;
}

