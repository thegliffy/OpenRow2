// Recovered source: eon2/src/dlls/win32/gdi32/fontcache.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- FontCache::AddFontResource @0x0411b470 ---
/* source: fontcache */

int __regparm3 FontCache__AddFontResource(int *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  int *__src;
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  void *__dest_00;
  int *piVar4;
  int iVar5;
  char *__s;
  uint uVar6;
  size_t local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  size_t local_24;
  int local_20 [4];
  
  uVar1 = FontCache__GetFTLibraryForThisThread(param_1);
  iVar2 = FT_New_Memory_Face(uVar1,param_2,param_3,0,local_20);
  iVar5 = 0;
  if (iVar2 == 0) {
    __s = *(char **)(local_20[0] + 0x14);
    sVar3 = strlen(__s);
    if (0x1f < sVar3) {
      FUN_0400a810("strlen( fontFace->family_name ) < 32",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/fontcache.cpp"
                   ,0x168,"FontCacheResID FontCache::AddFontResource(const void*, uint32_t)");
      __s = *(char **)(local_20[0] + 0x14);
    }
    strcpy((char *)&local_4c,__s);
    FUN_0402cd10(5,"Added font resource: \'%s\'",&local_4c);
    local_2c = CONCAT22(local_2c._2_2_,
                        CONCAT11((char)*(uint *)(local_20[0] + 0xc),
                                 (*(uint *)(local_20[0] + 0xc) & 2) != 0)) & 0xffff01ff;
    local_24 = param_3;
    local_28 = malloc(param_3);
    memcpy(local_28,param_2,param_3);
    iVar5 = param_1[3] + 1;
    param_1[3] = iVar5;
    FT_Done_Face(local_20[0]);
    __src = (int *)param_1[1];
    if (__src == (int *)param_1[2]) {
      iVar2 = (int)__src - *param_1 >> 4;
      uVar6 = 0x30;
      if (iVar2 * -0x55555555 != 0) {
        uVar6 = 0xfffffff0;
        if (((uint)(iVar2 * -0x55555555) < (uint)(iVar2 * 0x55555556) || iVar2 * 0x55555555 == 0) &&
           ((uint)(iVar2 * 0x55555556) < 0x5555556)) {
          uVar6 = iVar2 * 0x20;
        }
      }
      __dest_00 = operator_new(uVar6);
      piVar4 = (int *)(iVar2 * 0x10 + (int)__dest_00);
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar5;
        piVar4[1] = local_4c;
        piVar4[2] = local_48;
        piVar4[3] = local_44;
        piVar4[4] = local_40;
        piVar4[5] = local_3c;
        piVar4[6] = local_38;
        piVar4[7] = local_34;
        piVar4[8] = local_30;
        piVar4[9] = local_2c;
        piVar4[10] = (int)local_28;
        piVar4[0xb] = local_24;
      }
      sVar3 = 0;
      iVar2 = (int)__src - *param_1 >> 4;
      if (iVar2 * -0x55555555 != 0) {
        sVar3 = iVar2 << 4;
        memmove(__dest_00,(void *)*param_1,sVar3);
      }
      __dest = (void *)((int)__dest_00 + sVar3 + 0x30);
      local_60 = 0;
      iVar2 = param_1[1] - (int)__src >> 4;
      if (iVar2 * -0x55555555 != 0) {
        local_60 = iVar2 << 4;
        memmove(__dest,__src,local_60);
      }
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
      }
      *param_1 = (int)__dest_00;
      param_1[1] = (int)__dest + local_60;
      param_1[2] = uVar6 + (int)__dest_00;
    }
    else {
      iVar2 = 0;
      if (__src != (int *)0x0) {
        *__src = iVar5;
        __src[1] = local_4c;
        __src[2] = local_48;
        __src[3] = local_44;
        __src[4] = local_40;
        __src[5] = local_3c;
        __src[6] = local_38;
        __src[7] = local_34;
        __src[8] = local_30;
        __src[9] = local_2c;
        __src[10] = (int)local_28;
        __src[0xb] = local_24;
        iVar2 = param_1[1];
      }
      param_1[1] = iVar2 + 0x30;
    }
  }
  return iVar5;
}

// --- FontCache::GetFTLibraryForThisThread @0x0411b3b0 ---
/* source: fontcache */

undefined4 FontCache__GetFTLibraryForThisThread(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = eON_GetCurrentThreadId();
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  for (puVar2 = *(undefined4 **)(param_1 + 0x28); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    if (iVar1 == puVar2[2]) goto LAB_0411b418;
  }
  puVar2 = malloc(0xc);
  iVar3 = FT_Init_FreeType(puVar2);
  if (iVar3 == 0) {
    puVar2[2] = iVar1;
    puVar2[1] = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 **)(param_1 + 0x28) = puVar2;
LAB_0411b418:
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
    uVar4 = *puVar2;
  }
  else {
    FUN_0402cd10(0xf,"Error initializing freetype library!");
    FUN_0400a810("0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/fontcache.cpp"
                 ,0x1a5,"FT_LibraryRec_* FontCache::GetFTLibraryForThisThread()");
    uVar4 = 0;
  }
  return uVar4;
}

// --- FontCache::GetFontInMemory @0x0411b7f0 ---
/* source: fontcache */

undefined4 FontCache__GetFontInMemory(int *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  byte bVar17;
  int local_68;
  char local_5d;
  int local_58;
  undefined4 local_54;
  uint *local_50 [2];
  uint local_48 [8];
  size_t local_28;
  uint local_24;
  uint local_20 [4];
  
  bVar17 = 0;
  local_50[0] = local_48;
  eON_WideCharToMultiByte(0,0,param_2 + 0x1c,0x20,local_50[0],0x20,0,0);
  puVar11 = local_48;
  do {
    puVar10 = puVar11;
    uVar2 = *puVar10 + 0xfefefeff & ~*puVar10;
    uVar3 = uVar2 & 0x80808080;
    puVar11 = puVar10 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar11 = (uint *)((int)puVar10 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  uVar3 = (int)puVar11 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_50[0]);
  if (uVar3 < 9) {
    if (5 < uVar3) {
      iVar8 = *param_1;
      goto LAB_0411b8a6;
    }
    iVar8 = *param_1;
    local_5d = *(char *)(param_2 + 0x14);
    local_54 = (void *)CONCAT31(local_54._1_3_,local_5d != '\0');
    local_58 = (param_1[1] - iVar8 >> 4) * -0x55555555;
  }
  else {
    iVar8 = 9;
    bVar16 = (char *)((int)local_50 + uVar3) == (char *)0x0;
    pcVar12 = (char *)((int)local_50 + uVar3);
    pcVar15 = " Regular";
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar16 = *pcVar12 == *pcVar15;
      pcVar12 = pcVar12 + (uint)bVar17 * -2 + 1;
      pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
    } while (bVar16);
    if (bVar16) {
      *(undefined1 *)((int)local_50 + uVar3) = 0;
      local_68 = -1;
      local_5d = *(char *)(param_2 + 0x14);
      iVar8 = *param_1;
      local_54 = (void *)CONCAT31(local_54._1_3_,local_5d != '\0');
      iVar5 = (param_1[1] - iVar8 >> 4) * -0x55555555;
      local_58 = iVar5;
      if (iVar5 != 0) {
        iVar9 = 0;
        local_68 = 0;
        do {
          iVar14 = iVar8 + iVar9;
          if (((*(char *)(iVar14 + 0x24) != '\0') && ((char)local_54 == *(char *)(iVar14 + 0x25)))
             && (iVar14 = strcmp((char *)(iVar14 + 4),(char *)local_48), iVar14 == 0))
          goto LAB_0411bcca;
          local_68 = local_68 + 1;
          iVar9 = iVar9 + 0x30;
        } while (local_68 != iVar5);
        local_68 = -1;
      }
LAB_0411bcca:
      if (5 < uVar3 - 8) {
        iVar9 = 6;
        pcVar12 = (char *)((int)&local_58 + uVar3 + 3);
        bVar16 = pcVar12 == (char *)0x0;
        pcVar15 = " Bold";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar16 = *pcVar12 == *pcVar15;
          pcVar12 = pcVar12 + (uint)bVar17 * -2 + 1;
          pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
        } while (bVar16);
        if (bVar16) {
          *(undefined1 *)((int)&local_58 + uVar3 + 3) = 0;
          if (iVar5 != 0) {
            iVar9 = 0;
            iVar14 = 0;
            do {
              iVar7 = iVar8 + iVar9;
              if (((*(char *)(iVar7 + 0x24) != '\0') && ((char)local_54 == *(char *)(iVar7 + 0x25)))
                 && (iVar7 = strcmp((char *)(iVar7 + 4),(char *)local_48), iVar7 == 0)) {
                *(undefined1 *)((int)&local_58 + uVar3 + 3) = 0x20;
                if (-1 < iVar14) goto LAB_0411bd00;
                goto LAB_0411bced;
              }
              iVar14 = iVar14 + 1;
              iVar9 = iVar9 + 0x30;
            } while (iVar5 != iVar14);
          }
          *(undefined1 *)((int)&local_58 + uVar3 + 3) = 0x20;
        }
      }
LAB_0411bced:
      *(undefined1 *)((int)local_50 + uVar3) = 0x20;
      if (-1 < local_68) {
LAB_0411bd00:
        *param_3 = *(int *)(iVar8 + 0x28 + local_68 * 0x30);
        *param_4 = *(undefined4 *)(*param_1 + 0x2c + local_68 * 0x30);
        return 1;
      }
    }
    else {
      iVar8 = *param_1;
LAB_0411b8a6:
      local_58 = (param_1[1] - iVar8 >> 4) * -0x55555555;
      local_5d = *(char *)(param_2 + 0x14);
      local_54 = (void *)CONCAT31(local_54._1_3_,local_5d != '\0');
    }
    iVar5 = local_58;
    iVar9 = 6;
    pcVar12 = (char *)((int)local_50 + uVar3 + 3);
    bVar16 = pcVar12 == (char *)0x0;
    pcVar15 = " Bold";
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar16 = *pcVar12 == *pcVar15;
      pcVar12 = pcVar12 + (uint)bVar17 * -2 + 1;
      pcVar15 = pcVar15 + (uint)bVar17 * -2 + 1;
    } while (bVar16);
    if (bVar16) {
      *(undefined1 *)((int)local_50 + uVar3 + 3) = 0;
      if (local_58 != 0) {
        iVar9 = 0;
        iVar14 = 0;
        do {
          iVar7 = iVar8 + iVar9;
          if (((*(char *)(iVar7 + 0x24) != '\0') && (*(char *)(iVar7 + 0x25) == (char)local_54)) &&
             (iVar4 = strcmp((char *)(iVar7 + 4),(char *)local_48), iVar4 == 0)) {
            *(undefined1 *)((int)local_50 + uVar3 + 3) = 0x20;
            if (-1 < iVar14) goto LAB_0411b948;
            goto LAB_0411b8ef;
          }
          iVar14 = iVar14 + 1;
          iVar9 = iVar9 + 0x30;
        } while (iVar14 != iVar5);
      }
      *(undefined1 *)((int)local_50 + uVar3 + 3) = 0x20;
    }
  }
  if (local_58 != 0) {
LAB_0411b8ef:
    iVar5 = local_58;
    iVar9 = 0;
    iVar14 = 0;
    do {
      iVar7 = iVar8 + iVar9;
      if (((*(char *)(iVar7 + 0x24) != '\0') && ((char)local_54 == *(char *)(iVar7 + 0x25))) &&
         (iVar4 = strcmp((char *)(iVar7 + 4),(char *)local_48), iVar4 == 0)) {
        if (-1 < iVar14) {
LAB_0411b948:
          *param_3 = *(int *)(iVar7 + 0x28);
          *param_4 = *(undefined4 *)(*param_1 + 0x2c + iVar9);
          return 1;
        }
        break;
      }
      iVar14 = iVar14 + 1;
      iVar9 = iVar9 + 0x30;
    } while (iVar14 != iVar5);
  }
  if (local_5d == '\0') {
    pcVar12 = "HARNGTON.TTF";
    iVar8 = strcasecmp((char *)local_48,"Harrington");
    if (iVar8 != 0) {
      pcVar12 = "arial.ttf";
      iVar8 = strcasecmp((char *)local_48,"Arial");
      if (iVar8 != 0) {
        pcVar12 = "ariblk.ttf";
        iVar8 = strcasecmp((char *)local_48,"Arial Black");
        if (iVar8 != 0) {
          pcVar12 = "arialbd.ttf";
          iVar8 = strcasecmp((char *)local_48,"Arial Bold");
          if (iVar8 != 0) {
            pcVar12 = "gara.ttf";
            iVar8 = strcasecmp((char *)local_48,"Garamond");
            if (iVar8 != 0) {
              pcVar12 = "garabd.ttf";
              iVar8 = strcasecmp((char *)local_48,"Garamond Bold");
              if (iVar8 != 0) {
                pcVar12 = "cour.ttf";
                iVar8 = strcasecmp((char *)local_48,"Courier");
                if ((iVar8 != 0) && (iVar8 = strcasecmp((char *)local_48,"Courier New"), iVar8 != 0)
                   ) {
                  pcVar12 = "times.ttf";
                  iVar8 = strcasecmp((char *)local_48,"Times New Roman");
                  if (iVar8 != 0) {
                    pcVar12 = "tahoma.ttf";
                    iVar8 = strcasecmp((char *)local_48,"Tahoma");
                    if (iVar8 != 0) {
                      pcVar12 = "MSSansSerif.ttf";
                      iVar8 = strcasecmp((char *)local_48,"MS Sans Serif");
                      if (iVar8 != 0) {
                        pcVar12 = "verdana.ttf";
                        iVar8 = strcasecmp((char *)local_48,"Verdana");
                        if (iVar8 != 0) {
                          pcVar12 = "arial.ttf";
                          iVar8 = strcasecmp((char *)local_48,"Segoe UI");
                          if (iVar8 != 0) {
                            pcVar12 = "marlett.ttf";
                            iVar8 = strcasecmp((char *)local_48,"Marlett");
                            if (iVar8 != 0) {
                              pcVar12 = "bkant.ttf";
                              iVar8 = strcasecmp((char *)local_48,"Book Antiqua");
                              if (iVar8 != 0) {
                                pcVar12 = "trebuc.ttf";
                                iVar8 = strcasecmp((char *)local_48,"Trebuchet MS");
                                if (iVar8 != 0) {
                                  pcVar12 = "blkchcry.ttf";
                                  iVar8 = strcasecmp((char *)local_48,"BlackChancery");
                                  if (iVar8 != 0) {
                                    pcVar12 = "IslandType.ttf";
                                    iVar8 = strcasecmp((char *)local_48,"IslandType");
                                    if (iVar8 != 0) {
                                      pcVar12 = "MGS65__U.TTF";
                                      iVar8 = strcasecmp((char *)local_48,"MagistralTT");
                                      if (iVar8 != 0) goto LAB_0411bc15;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pcVar12 = "timesi.ttf";
    iVar8 = strcasecmp((char *)local_48,"Times New Roman");
    if (iVar8 != 0) {
      pcVar12 = "blackchanceryitalic.ttf";
      iVar8 = strcasecmp((char *)local_48,"BlackChancery");
      if (iVar8 != 0) {
        iVar8 = strcasecmp((char *)local_48,"Trebuchet MS");
        if (iVar8 != 0) {
LAB_0411bc15:
          FUN_0402cd10(0xf,
                       "Error loading font - cannot determine font file for font \'%s\'! Handle it."
                       ,local_48);
          return 0;
        }
        pcVar12 = "trebucit.ttf";
      }
    }
  }
  iVar8 = eON_CreateFileA(pcVar12,0x80000000,1,0,3,0,0);
  if (iVar8 == -1) {
    FUN_0402cd10(0xf,"Failed to open font file: \'%s\'",pcVar12);
    uVar6 = 0;
  }
  else {
    FUN_041322c0(iVar8,&local_28);
    local_54 = malloc(local_28);
    local_20[0] = 0;
    iVar5 = eON_ReadFile(iVar8,local_54,local_28,local_20,0);
    if ((iVar5 == 0) ||
       ((local_24 < 0x80000000 && ((0 < (int)local_24 || (local_20[0] < local_28)))))) {
      FUN_0402cd10(0xf,"Failed to read font file \'%s\'!",pcVar12);
      eON_CloseHandle(iVar8);
      free(local_54);
      uVar6 = 0;
    }
    else {
      iVar9 = 0;
      eON_CloseHandle(iVar8);
      iVar8 = *param_1;
      iVar5 = 0;
      local_58 = (param_1[1] - iVar8 >> 4) * -0x55555555;
      if (local_58 != 0) {
        do {
          piVar1 = (int *)(iVar8 + iVar5);
          if ((local_28 == piVar1[0xb]) &&
             (iVar14 = memcmp((void *)piVar1[10],local_54,local_28), iVar14 == 0)) {
            iVar8 = *piVar1;
            goto LAB_0411bf3f;
          }
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + 0x30;
        } while (local_58 != iVar9);
      }
      iVar8 = FontCache__AddFontResource();
LAB_0411bf3f:
      free(local_54);
      uVar6 = 0;
      if (iVar8 != 0) {
        piVar1 = (int *)*param_1;
        local_54 = (void *)((param_1[1] - (int)piVar1 >> 4) * -0x55555555);
        if (local_54 == (void *)0x0) {
LAB_0411bf98:
          FUN_0400a810("false",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/fontcache.cpp"
                       ,0x14a,
                       "bool FontCache::GetFontInMemory(const LOGFONTW&, const void*&, uint32_t&)");
          uVar6 = 0;
        }
        else {
          iVar9 = 0;
          iVar5 = 0x30;
          if (*piVar1 == iVar8) {
            iVar14 = 0;
            piVar13 = piVar1;
          }
          else {
            do {
              iVar14 = iVar5;
              iVar9 = iVar9 + 1;
              if ((void *)iVar9 == local_54) goto LAB_0411bf98;
              piVar13 = (int *)((int)piVar1 + iVar14);
              iVar5 = iVar14 + 0x30;
            } while (*piVar13 != iVar8);
          }
          *param_3 = piVar13[10];
          *param_4 = *(undefined4 *)(*param_1 + 0x2c + iVar14);
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}

