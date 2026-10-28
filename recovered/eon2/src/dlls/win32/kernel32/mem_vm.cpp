// Recovered source: eon2/src/dlls/win32/kernel32/mem_vm.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GetPagesProtection @0x0413b450 ---
/* source: mem_vm */

int __regparm3 GetPagesProtection(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_34;
  uint local_24;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    FUN_0400a810("region && region->ProtectTable",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x37a,"SIZE_T GetPagesProtection(ReservedRegion*, LPVOID, SIZE_T, LPDWORD)");
  }
  if (param_3 == 0) {
    FUN_0400a810("pageCount",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x37b,"SIZE_T GetPagesProtection(ReservedRegion*, LPVOID, SIZE_T, LPDWORD)");
    return 0;
  }
  local_24 = 0xffffffff;
  uVar5 = ((uint)(param_2 - *(int *)(param_1 + 8)) >> 0xc) * 3;
  uVar4 = uVar5 & 0x1f;
  puVar6 = (uint *)(*(int *)(param_1 + 0x30) + (uVar5 >> 5) * 4);
  local_34 = 0;
  do {
    while( true ) {
      uVar5 = *puVar6;
      uVar2 = (uint)((1 << ((byte)uVar4 & 0x1f) & uVar5) != 0);
      if (uVar4 + 1 != 0x20) break;
      uVar5 = puVar6[1];
      puVar6 = puVar6 + 1;
      iVar3 = 1;
      if ((uVar5 & 1) != 0) {
        uVar2 = uVar2 | 2;
      }
LAB_0413b4bd:
      uVar4 = iVar3 + 1;
      if ((1 << ((byte)iVar3 & 0x1f) & uVar5) != 0) {
        uVar2 = uVar2 | 4;
      }
      if (uVar4 != 0x20) goto LAB_0413b4d6;
      puVar6 = puVar6 + 1;
      uVar4 = 0;
      if (local_24 == 0xffffffff) goto LAB_0413b560;
LAB_0413b4e0:
      if (local_24 != uVar2) {
        return local_34;
      }
      local_34 = local_34 + 1;
      if (local_34 == param_3) {
        return local_34;
      }
    }
    iVar3 = uVar4 + 2;
    if ((1 << ((byte)(uVar4 + 1) & 0x1f) & uVar5) != 0) {
      uVar2 = uVar2 | 2;
    }
    if (iVar3 != 0x20) goto LAB_0413b4bd;
    puVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    uVar4 = 1;
    if ((*puVar1 & 1) != 0) {
      uVar2 = uVar2 | 4;
    }
LAB_0413b4d6:
    if (local_24 != 0xffffffff) goto LAB_0413b4e0;
LAB_0413b560:
    switch(uVar2) {
    default:
      *param_4 = 1;
      break;
    case 1:
      *param_4 = 2;
      break;
    case 2:
      *param_4 = 8;
      break;
    case 3:
      *param_4 = 4;
      break;
    case 4:
      *param_4 = 0x10;
      break;
    case 5:
      *param_4 = 0x20;
      break;
    case 6:
      *param_4 = 0x80;
      break;
    case 7:
      *param_4 = 0x40;
    }
    local_34 = local_34 + 1;
    local_24 = uVar2;
    if (local_34 == param_3) {
      return local_34;
    }
  } while( true );
}

// --- Win32ToInternalProtectFlags @0x0413b6a0 ---
/* source: mem_vm */

void __regparm3 Win32ToInternalProtectFlags(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int local_34;
  uint local_30;
  int local_20;
  
  if (param_1 == 0) {
    FUN_0400a810("region",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x3ac,"void SetPagesProtection(ReservedRegion*, LPVOID, SIZE_T, DWORD)");
  }
  if (param_3 == 0) {
    FUN_0400a810("pageCount",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x3ad,"void SetPagesProtection(ReservedRegion*, LPVOID, SIZE_T, DWORD)");
  }
  puVar2 = *(uint **)(param_1 + 0x30);
  if (puVar2 == (uint *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x2c);
    if (uVar5 == 8) {
      bVar1 = false;
      bVar9 = true;
      bVar3 = false;
    }
    else if (uVar5 < 9) {
      if (uVar5 == 2) {
        bVar1 = false;
        bVar9 = false;
        bVar3 = true;
      }
      else if (uVar5 == 4) {
        bVar1 = false;
        bVar9 = true;
        bVar3 = true;
      }
      else {
        if (uVar5 != 1) goto LAB_0413bd1b;
LAB_0413bd3f:
        bVar1 = false;
        bVar9 = false;
        bVar3 = false;
      }
    }
    else if (uVar5 == 0x20) {
      bVar1 = true;
      bVar9 = false;
      bVar3 = true;
    }
    else if (uVar5 < 0x21) {
      if (uVar5 != 0x10) {
LAB_0413bd1b:
        FUN_0400a810("false",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                     ,0xcb,"uint32_t Win32ToInternalProtectFlags(DWORD)");
        goto LAB_0413bd3f;
      }
      bVar1 = true;
      bVar9 = false;
      bVar3 = false;
    }
    else if (uVar5 == 0x40) {
      bVar1 = true;
      bVar9 = true;
      bVar3 = true;
    }
    else {
      if (uVar5 != 0x80) goto LAB_0413bd1b;
      bVar1 = true;
      bVar9 = true;
      bVar3 = false;
    }
    uVar7 = *(uint *)(param_1 + 0xc) >> 0xc;
    iVar10 = (uVar7 * 3 - 1 >> 5) + 1;
    puVar2 = calloc(1,iVar10 * 4);
    uVar5 = 0x20;
    if (uVar7 < 0x21) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      uVar11 = 0;
      goto LAB_0413be94;
    }
    if (bVar3) {
      if (bVar1) {
        local_30 = 0;
        if (bVar9) {
          iVar4 = 0;
          puVar6 = puVar2;
          do {
            uVar11 = 1 << ((byte)iVar4 & 0x1f) | *puVar6;
            *puVar6 = uVar11;
            if (iVar4 + 1 == 0x20) {
              puVar6[1] = puVar6[1] | 1;
              iVar8 = 1;
              puVar6 = puVar6 + 1;
LAB_0413c21d:
              iVar4 = iVar8 + 1;
              *puVar6 = *puVar6 | 1 << ((byte)iVar8 & 0x1f);
              if (iVar4 == 0x20) {
                puVar6 = puVar6 + 1;
                iVar4 = 0;
              }
            }
            else {
              iVar8 = iVar4 + 2;
              *puVar6 = 1 << ((byte)(iVar4 + 1) & 0x1f) | uVar11;
              if (iVar8 != 0x20) goto LAB_0413c21d;
              puVar6[1] = puVar6[1] | 1;
              iVar4 = 1;
              puVar6 = puVar6 + 1;
            }
            local_30 = local_30 + 1;
          } while (local_30 != uVar5);
        }
        else {
          iVar4 = 0;
          puVar6 = puVar2;
          do {
            *puVar6 = *puVar6 | 1 << ((byte)iVar4 & 0x1f);
            if (iVar4 == 0x1f) {
              local_20 = 1;
              puVar6 = puVar6 + 1;
LAB_0413bfa3:
              iVar4 = local_20 + 1;
              *puVar6 = *puVar6 | 1 << ((byte)local_20 & 0x1f);
              if (iVar4 == 0x20) {
                puVar6 = puVar6 + 1;
                iVar4 = 0;
              }
            }
            else {
              local_20 = iVar4 + 2;
              if (local_20 != 0x20) goto LAB_0413bfa3;
              puVar6[1] = puVar6[1] | 1;
              iVar4 = 1;
              puVar6 = puVar6 + 1;
            }
            local_30 = local_30 + 1;
          } while (local_30 != uVar5);
        }
      }
      else if (bVar9) {
        local_30 = 0;
        iVar4 = 0;
        puVar6 = puVar2;
        do {
          uVar11 = 1 << ((byte)iVar4 & 0x1f) | *puVar6;
          *puVar6 = uVar11;
          if (iVar4 + 1 == 0x20) {
            puVar6[1] = puVar6[1] | 1;
            local_34 = 1;
            puVar6 = puVar6 + 1;
LAB_0413c0bb:
            iVar4 = local_34 + 1;
            if (iVar4 == 0x20) {
              puVar6 = puVar6 + 1;
              iVar4 = 0;
            }
          }
          else {
            local_34 = iVar4 + 2;
            *puVar6 = 1 << ((byte)(iVar4 + 1) & 0x1f) | uVar11;
            if (local_34 != 0x20) goto LAB_0413c0bb;
            puVar6 = puVar6 + 1;
            iVar4 = 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 != uVar5);
      }
      else {
        iVar4 = 0;
        uVar11 = 0;
        puVar6 = puVar2;
        do {
          *puVar6 = *puVar6 | 1 << ((byte)iVar4 & 0x1f);
          if (iVar4 == 0x1f) {
            puVar6 = puVar6 + 1;
            iVar4 = 1;
LAB_0413bef8:
            iVar4 = iVar4 + 1;
            if (iVar4 == 0x20) {
              puVar6 = puVar6 + 1;
              iVar4 = 0;
            }
          }
          else {
            iVar4 = iVar4 + 2;
            if (iVar4 != 0x20) goto LAB_0413bef8;
            puVar6 = puVar6 + 1;
            iVar4 = 1;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar5);
      }
    }
    else if (bVar1) {
      local_30 = 0;
      if (bVar9) {
        iVar4 = 0;
        puVar6 = puVar2;
        do {
          if (iVar4 + 1 == 0x20) {
            puVar6[1] = puVar6[1] | 1;
            local_20 = 1;
            puVar6 = puVar6 + 1;
LAB_0413c14d:
            iVar4 = local_20 + 1;
            *puVar6 = *puVar6 | 1 << ((byte)local_20 & 0x1f);
            if (iVar4 == 0x20) {
              puVar6 = puVar6 + 1;
              iVar4 = 0;
            }
          }
          else {
            local_20 = iVar4 + 2;
            *puVar6 = *puVar6 | 1 << ((byte)(iVar4 + 1) & 0x1f);
            if (local_20 != 0x20) goto LAB_0413c14d;
            puVar6[1] = puVar6[1] | 1;
            iVar4 = 1;
            puVar6 = puVar6 + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 != uVar5);
      }
      else {
        iVar4 = 0;
        puVar6 = puVar2;
        do {
          if (iVar4 == 0x1f) {
            local_20 = 1;
            puVar6 = puVar6 + 1;
LAB_0413c03b:
            iVar4 = local_20 + 1;
            *puVar6 = *puVar6 | 1 << ((byte)local_20 & 0x1f);
            if (iVar4 == 0x20) {
              puVar6 = puVar6 + 1;
              iVar4 = 0;
            }
          }
          else {
            local_20 = iVar4 + 2;
            if (local_20 != 0x20) goto LAB_0413c03b;
            puVar6[1] = puVar6[1] | 1;
            iVar4 = 1;
            puVar6 = puVar6 + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 != uVar5);
      }
    }
    else if (bVar9) {
      uVar11 = 0;
      iVar4 = 0;
      puVar6 = puVar2;
      do {
        if (iVar4 + 1 == 0x20) {
          puVar6[1] = puVar6[1] | 1;
          local_30 = 1;
          puVar6 = puVar6 + 1;
LAB_0413bdd9:
          iVar4 = local_30 + 1;
          if (iVar4 == 0x20) {
            puVar6 = puVar6 + 1;
            iVar4 = 0;
          }
        }
        else {
          local_30 = iVar4 + 2;
          *puVar6 = *puVar6 | 1 << ((byte)(iVar4 + 1) & 0x1f);
          if (local_30 != 0x20) goto LAB_0413bdd9;
          puVar6 = puVar6 + 1;
          iVar4 = 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar5);
    }
    while (uVar11 = uVar5 * 2, uVar11 <= uVar7) {
LAB_0413be94:
      memcpy(puVar2 + (uVar5 >> 5) * 3,puVar2,(uVar5 >> 5) * 0xc);
      uVar5 = uVar11;
    }
    if (uVar5 < uVar7) {
      memcpy(puVar2 + (uVar5 >> 5) * 3,puVar2,(iVar10 + (uVar5 >> 5) * -3) * 4);
    }
    *(uint **)(param_1 + 0x30) = puVar2;
  }
  iVar10 = *(int *)(param_1 + 8);
  if (param_4 == 8) {
    bVar3 = false;
    bVar9 = true;
    bVar1 = false;
    goto LAB_0413b761;
  }
  if (param_4 < 9) {
    if (param_4 == 2) {
      bVar3 = false;
      bVar9 = false;
      bVar1 = true;
      goto LAB_0413b761;
    }
    if (param_4 == 4) {
      bVar3 = false;
      bVar9 = true;
      bVar1 = true;
      goto LAB_0413b761;
    }
    if (param_4 != 1) goto LAB_0413b732;
  }
  else {
    if (param_4 == 0x20) {
      bVar3 = true;
      bVar9 = false;
      bVar1 = true;
      goto LAB_0413b761;
    }
    if (param_4 < 0x21) {
      if (param_4 == 0x10) {
        bVar3 = true;
        bVar9 = false;
        bVar1 = false;
        goto LAB_0413b761;
      }
    }
    else {
      if (param_4 == 0x40) {
        bVar3 = true;
        bVar9 = true;
        bVar1 = true;
        goto LAB_0413b761;
      }
      if (param_4 == 0x80) {
        bVar3 = true;
        bVar9 = true;
        bVar1 = false;
        goto LAB_0413b761;
      }
    }
LAB_0413b732:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0xcb,"uint32_t Win32ToInternalProtectFlags(DWORD)");
  }
  bVar3 = false;
  bVar9 = false;
  bVar1 = false;
LAB_0413b761:
  if (param_3 != 0) {
    local_20 = 0;
    uVar7 = ((uint)(param_2 - iVar10) >> 0xc) * 3;
    uVar5 = uVar7 & 0x1f;
    puVar2 = puVar2 + (uVar7 >> 5);
    if (bVar1) {
      if (bVar3) {
        if (bVar9) {
          do {
            uVar7 = 1 << ((byte)uVar5 & 0x1f) | *puVar2;
            *puVar2 = uVar7;
            if (uVar5 + 1 == 0x20) {
              iVar10 = 1;
              uVar7 = puVar2[1] | 1;
              puVar2[1] = uVar7;
              puVar2 = puVar2 + 1;
LAB_0413bafb:
              uVar5 = iVar10 + 1;
              *puVar2 = 1 << ((byte)iVar10 & 0x1f) | uVar7;
              if (uVar5 == 0x20) {
                puVar2 = puVar2 + 1;
                uVar5 = 0;
              }
            }
            else {
              iVar10 = uVar5 + 2;
              uVar7 = 1 << ((byte)(uVar5 + 1) & 0x1f) | uVar7;
              *puVar2 = uVar7;
              if (iVar10 != 0x20) goto LAB_0413bafb;
              puVar2[1] = puVar2[1] | 1;
              uVar5 = 1;
              puVar2 = puVar2 + 1;
            }
            local_20 = local_20 + 1;
          } while (local_20 != param_3);
        }
        else {
          do {
            uVar7 = 1 << ((byte)uVar5 & 0x1f) | *puVar2;
            *puVar2 = uVar7;
            if (uVar5 + 1 == 0x20) {
              iVar10 = 1;
              uVar7 = puVar2[1] & 0xfffffffe;
              puVar2[1] = uVar7;
              puVar2 = puVar2 + 1;
LAB_0413ba91:
              uVar5 = iVar10 + 1;
              *puVar2 = 1 << ((byte)iVar10 & 0x1f) | uVar7;
              if (uVar5 == 0x20) {
                puVar2 = puVar2 + 1;
                uVar5 = 0;
              }
            }
            else {
              iVar10 = uVar5 + 2;
              uVar7 = ~(1 << ((byte)(uVar5 + 1) & 0x1f)) & uVar7;
              *puVar2 = uVar7;
              if (iVar10 != 0x20) goto LAB_0413ba91;
              puVar2[1] = puVar2[1] | 1;
              uVar5 = 1;
              puVar2 = puVar2 + 1;
            }
            local_20 = local_20 + 1;
          } while (local_20 != param_3);
        }
      }
      else if (bVar9) {
        do {
          uVar7 = 1 << ((byte)uVar5 & 0x1f) | *puVar2;
          *puVar2 = uVar7;
          if (uVar5 + 1 == 0x20) {
            iVar10 = 1;
            uVar7 = puVar2[1] | 1;
            puVar2[1] = uVar7;
            puVar2 = puVar2 + 1;
LAB_0413b9ab:
            uVar5 = iVar10 + 1;
            *puVar2 = ~(1 << ((byte)iVar10 & 0x1f)) & uVar7;
            if (uVar5 == 0x20) {
              puVar2 = puVar2 + 1;
              uVar5 = 0;
            }
          }
          else {
            iVar10 = uVar5 + 2;
            uVar7 = 1 << ((byte)(uVar5 + 1) & 0x1f) | uVar7;
            *puVar2 = uVar7;
            if (iVar10 != 0x20) goto LAB_0413b9ab;
            puVar2[1] = puVar2[1] & 0xfffffffe;
            uVar5 = 1;
            puVar2 = puVar2 + 1;
          }
          local_20 = local_20 + 1;
        } while (local_20 != param_3);
      }
      else {
        do {
          uVar7 = 1 << ((byte)uVar5 & 0x1f) | *puVar2;
          *puVar2 = uVar7;
          if (uVar5 + 1 == 0x20) {
            iVar10 = 1;
            uVar7 = puVar2[1] & 0xfffffffe;
            puVar2[1] = uVar7;
            puVar2 = puVar2 + 1;
LAB_0413b941:
            uVar5 = iVar10 + 1;
            *puVar2 = ~(1 << ((byte)iVar10 & 0x1f)) & uVar7;
            if (uVar5 == 0x20) {
              puVar2 = puVar2 + 1;
              uVar5 = 0;
            }
          }
          else {
            iVar10 = uVar5 + 2;
            uVar7 = ~(1 << ((byte)(uVar5 + 1) & 0x1f)) & uVar7;
            *puVar2 = uVar7;
            if (iVar10 != 0x20) goto LAB_0413b941;
            puVar2[1] = puVar2[1] & 0xfffffffe;
            uVar5 = 1;
            puVar2 = puVar2 + 1;
          }
          local_20 = local_20 + 1;
        } while (local_20 != param_3);
      }
    }
    else if (bVar3) {
      if (bVar9) {
        do {
          uVar7 = ~(1 << ((byte)uVar5 & 0x1f)) & *puVar2;
          *puVar2 = uVar7;
          if (uVar5 + 1 == 0x20) {
            iVar10 = 1;
            uVar7 = puVar2[1] | 1;
            puVar2[1] = uVar7;
            puVar2 = puVar2 + 1;
LAB_0413bc13:
            uVar5 = iVar10 + 1;
            *puVar2 = 1 << ((byte)iVar10 & 0x1f) | uVar7;
            if (uVar5 == 0x20) {
              puVar2 = puVar2 + 1;
              uVar5 = 0;
            }
          }
          else {
            iVar10 = uVar5 + 2;
            uVar7 = 1 << ((byte)(uVar5 + 1) & 0x1f) | uVar7;
            *puVar2 = uVar7;
            if (iVar10 != 0x20) goto LAB_0413bc13;
            puVar2[1] = puVar2[1] | 1;
            uVar5 = 1;
            puVar2 = puVar2 + 1;
          }
          local_20 = local_20 + 1;
        } while (local_20 != param_3);
      }
      else {
        do {
          uVar7 = ~(1 << ((byte)uVar5 & 0x1f)) & *puVar2;
          *puVar2 = uVar7;
          if (uVar5 + 1 == 0x20) {
            iVar10 = 1;
            uVar7 = puVar2[1] & 0xfffffffe;
            puVar2[1] = uVar7;
            puVar2 = puVar2 + 1;
LAB_0413bba1:
            uVar5 = iVar10 + 1;
            *puVar2 = 1 << ((byte)iVar10 & 0x1f) | uVar7;
            if (uVar5 == 0x20) {
              puVar2 = puVar2 + 1;
              uVar5 = 0;
            }
          }
          else {
            iVar10 = uVar5 + 2;
            uVar7 = ~(1 << ((byte)(uVar5 + 1) & 0x1f)) & uVar7;
            *puVar2 = uVar7;
            if (iVar10 != 0x20) goto LAB_0413bba1;
            puVar2[1] = puVar2[1] | 1;
            uVar5 = 1;
            puVar2 = puVar2 + 1;
          }
          local_20 = local_20 + 1;
        } while (local_20 != param_3);
      }
    }
    else if (bVar9) {
      do {
        uVar7 = ~(1 << ((byte)uVar5 & 0x1f)) & *puVar2;
        *puVar2 = uVar7;
        if (uVar5 + 1 == 0x20) {
          iVar10 = 1;
          uVar7 = puVar2[1] | 1;
          puVar2[1] = uVar7;
          puVar2 = puVar2 + 1;
LAB_0413b86f:
          uVar5 = iVar10 + 1;
          *puVar2 = ~(1 << ((byte)iVar10 & 0x1f)) & uVar7;
          if (uVar5 == 0x20) {
            puVar2 = puVar2 + 1;
            uVar5 = 0;
          }
        }
        else {
          iVar10 = uVar5 + 2;
          uVar7 = 1 << ((byte)(uVar5 + 1) & 0x1f) | uVar7;
          *puVar2 = uVar7;
          if (iVar10 != 0x20) goto LAB_0413b86f;
          puVar2[1] = puVar2[1] & 0xfffffffe;
          uVar5 = 1;
          puVar2 = puVar2 + 1;
        }
        local_20 = local_20 + 1;
      } while (local_20 != param_3);
    }
    else {
      do {
        uVar7 = ~(1 << ((byte)uVar5 & 0x1f)) & *puVar2;
        *puVar2 = uVar7;
        if (uVar5 + 1 == 0x20) {
          iVar10 = 1;
          uVar7 = puVar2[1] & 0xfffffffe;
          puVar2[1] = uVar7;
          puVar2 = puVar2 + 1;
LAB_0413b7c9:
          uVar5 = iVar10 + 1;
          *puVar2 = ~(1 << ((byte)iVar10 & 0x1f)) & uVar7;
          if (uVar5 == 0x20) {
            puVar2 = puVar2 + 1;
            uVar5 = 0;
          }
        }
        else {
          iVar10 = uVar5 + 2;
          uVar7 = ~(1 << ((byte)(uVar5 + 1) & 0x1f)) & uVar7;
          *puVar2 = uVar7;
          if (iVar10 != 0x20) goto LAB_0413b7c9;
          puVar2[1] = puVar2[1] & 0xfffffffe;
          uVar5 = 1;
          puVar2 = puVar2 + 1;
        }
        local_20 = local_20 + 1;
      } while (local_20 != param_3);
    }
  }
  return;
}

// --- custom_munmap @0x0413ca20 ---
/* source: mem_vm */

void __regparm3 custom_munmap(int param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *local_24;
  
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar11 = (int)param_2 - *(int *)(param_1 + 8);
    pvVar1 = *(void **)(param_1 + 0x24);
    uVar4 = uVar11 >> 0xc;
    uVar8 = (param_3 >> 0xc) + uVar4;
    if (uVar4 < uVar8) {
      puVar7 = (uint *)((int)pvVar1 + (uVar11 >> 0x11) * 4);
      uVar11 = uVar4;
      do {
        while( true ) {
          uVar9 = 1 << ((byte)uVar11 & 0x1f);
          if ((uVar9 & *puVar7) == 0) break;
          uVar11 = uVar11 + 1;
          *puVar7 = ~uVar9 & *puVar7;
          if ((uVar11 & 0x1f) == 0) {
            puVar7 = puVar7 + 1;
          }
          if (uVar8 <= uVar11) goto LAB_0413cdcd;
        }
        if ((uVar4 < uVar11) &&
           (pvVar3 = (void *)(uVar4 * 0x1000 + *(int *)(param_1 + 8)),
           pvVar1 = mmap64(pvVar3,(uVar11 - uVar4) * 0x1000,0,0x32,0,0), pvVar3 != pvVar1)) {
          FUN_0400a810("mmap( address, size, 0x0, 0x10|0x02|0x20, 0, 0 ) == address",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x164,"void custom_munmap(void*, size_t)");
        }
        uVar4 = uVar11 + 1;
        if ((uVar4 & 0x1f) == 0) {
          puVar7 = puVar7 + 1;
        }
        uVar11 = uVar4;
      } while (uVar4 < uVar8);
LAB_0413cdcd:
      if ((uVar4 < uVar8) &&
         (pvVar3 = (void *)(uVar4 * 0x1000 + *(int *)(param_1 + 8)),
         pvVar1 = mmap64(pvVar3,(uVar8 - uVar4) * 0x1000,0,0x32,0,0), pvVar3 != pvVar1)) {
        FUN_0400a810("mmap( address, size, 0x0, 0x10|0x02|0x20, 0, 0 ) == address",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                     ,0x164,"void custom_munmap(void*, size_t)");
      }
      pvVar1 = *(void **)(param_1 + 0x24);
    }
    iVar2 = FUN_0413a7d0();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != -1) {
      free(pvVar1);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    pvVar1 = (void *)(*(int *)(param_1 + 0x20) * 0x1000 + iVar2);
    if (param_2 < pvVar1) {
      if ((void *)((int)param_2 + param_3) < pvVar1) {
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_0400a810("!region->CommitTable",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x52e,"void vmm_DecommitRegion(ReservedRegion*, PVOID, SIZE_T)");
          iVar2 = *(int *)(param_1 + 8);
        }
        uVar8 = *(uint *)(param_1 + 0xc) >> 0xc;
        local_24 = malloc((*(uint *)(param_1 + 0xc) - 1 >> 0x11) * 4 + 4);
        uVar9 = 1;
        *(uint **)(param_1 + 0x24) = local_24;
        uVar10 = (uint)((int)param_2 - iVar2) >> 0xc;
        uVar4 = (param_3 >> 0xc) + uVar10;
        uVar11 = 1;
        if (uVar10 == 0) {
          uVar10 = 0;
          uVar11 = 0;
          uVar9 = 0;
        }
        else {
          while (uVar11 < uVar10) {
            uVar5 = uVar11 + 1;
            uVar6 = uVar11 & 0x1f;
            uVar9 = uVar9 | 1 << (sbyte)uVar6;
            uVar11 = uVar5;
            if (uVar6 == 0x1f) {
              uVar6 = uVar10 - uVar5 >> 5;
              *local_24 = uVar9;
              local_24 = local_24 + 1;
              uVar9 = 0;
              if (uVar6 != 0) {
                memset(local_24,0xff,uVar6 * 4);
                uVar11 = uVar5 + uVar6 * 0x20;
                local_24 = local_24 + uVar6;
              }
            }
          }
          uVar10 = uVar11 & 0x1f;
        }
        uVar6 = uVar11;
        if (uVar11 < uVar4) {
          do {
            uVar6 = uVar11 + 1;
            if ((uVar11 & 0x1f) == 0x1f) {
              *local_24 = uVar9;
              local_24 = local_24 + 1;
              uVar9 = 0;
              uVar11 = uVar4 - uVar6 >> 5;
              if (uVar11 != 0) {
                uVar6 = uVar6 + uVar11 * 0x20;
                bzero(local_24,uVar11 * 4);
                local_24 = local_24 + uVar11;
              }
            }
            uVar11 = uVar6;
          } while (uVar6 < uVar4);
          uVar10 = uVar6 & 0x1f;
        }
        uVar11 = *(uint *)(param_1 + 0x20);
        uVar4 = uVar6;
        if (uVar6 < uVar11) {
          do {
            uVar4 = uVar6 + 1;
            uVar9 = uVar9 | 1 << (sbyte)(uVar6 & 0x1f);
            if ((uVar6 & 0x1f) == 0x1f) {
              uVar10 = uVar11 - uVar4 >> 5;
              *local_24 = uVar9;
              local_24 = local_24 + 1;
              uVar9 = 0;
              if (uVar10 != 0) {
                memset(local_24,0xff,uVar10 * 4);
                uVar4 = uVar4 + uVar10 * 0x20;
                local_24 = local_24 + uVar10;
              }
            }
            uVar6 = uVar4;
          } while (uVar4 < uVar11);
          uVar10 = uVar4 & 0x1f;
        }
        if (uVar4 < uVar8) {
          do {
            uVar10 = uVar4 + 1;
            if ((uVar4 & 0x1f) == 0x1f) {
              *local_24 = uVar9;
              local_24 = local_24 + 1;
              uVar9 = 0;
              uVar11 = uVar8 - uVar10 >> 5;
              if (uVar11 != 0) {
                bzero(local_24,uVar11 * 4);
                uVar10 = uVar10 + uVar11 * 0x20;
                local_24 = local_24 + uVar11;
              }
            }
            uVar4 = uVar10;
          } while (uVar10 < uVar8);
          uVar10 = uVar10 & 0x1f;
        }
        if (uVar10 != 0) {
          *local_24 = uVar9;
        }
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        pvVar1 = mmap64(param_2,param_3,0,0x32,0,0);
        if (param_2 != pvVar1) {
          FUN_0400a810("mmap( address, size, 0x0, 0x10|0x02|0x20, 0, 0 ) == address",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x164,"void custom_munmap(void*, size_t)");
        }
      }
      else {
        pvVar3 = mmap64(param_2,(int)pvVar1 - (int)param_2,0,0x32,0,0);
        if (param_2 != pvVar3) {
          FUN_0400a810("mmap( address, size, 0x0, 0x10|0x02|0x20, 0, 0 ) == address",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x164,"void custom_munmap(void*, size_t)");
        }
        *(int *)(param_1 + 0x20) =
             *(int *)(param_1 + 0x20) - ((uint)((int)pvVar1 - (int)param_2) >> 0xc);
      }
    }
  }
  return;
}

// --- eON_VirtualAllocEx @0x0413e320 ---
/* source: mem_vm */

void * eON_VirtualAllocEx(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *__addr;
  void *local_38;
  int local_24 [3];
  undefined4 *local_18;
  
  uVar3 = param_5;
  uVar2 = param_4;
  uVar1 = param_3;
  uVar6 = param_2;
  local_18 = &param_1;
  if (param_1 != -1) {
    FUN_0402cd10(0xf,"VirtualAllocEx() called with hProcess %p !!",param_1);
    eON_SetLastError(6);
    return (void *)0x0;
  }
  if ((param_4 & 0x200000) != 0) {
    FUN_0402cd10(10,"\tVirtualAlloc with MEM_WRITE_WATCH!");
  }
  if ((uVar1 == 0) || ((uVar3 & 0xfffff800) != 0)) {
LAB_0413e366:
    eON_SetLastError(0x57);
    return (void *)0x0;
  }
  if ((uVar2 & 0x80000) != 0) {
    if (uVar2 == 0x80000) {
      if (((uVar6 | uVar1) & 0xfff) == 0) {
        __addr = (void *)(uVar6 & 0xfffff000);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
        iVar4 = FUN_0413c980();
        if (iVar4 != 0) {
          madvise(__addr,(uVar6 + 0xfff + uVar1 & 0xfffff000) - (int)__addr,4);
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
          return __addr;
        }
LAB_0413e70f:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
        eON_SetLastError(0x1e7);
        return (void *)0x0;
      }
LAB_0413e5f0:
      eON_SetLastError(0x1e7);
      return (void *)0x0;
    }
    goto LAB_0413e366;
  }
  local_24[0] = 0;
  if (((uVar2 & 0x2000) == 0) && (uVar6 != 0)) {
    uVar5 = 0;
    local_38 = (void *)0x0;
    iVar4 = 0;
  }
  else {
    if (uVar6 == 0) {
      uVar5 = uVar1 + 0xfff & 0xfffff000;
    }
    else {
      uVar5 = (uVar6 + 0xfff + uVar1 & 0xfffff000) + (uVar6 >> 0x10) * -0x10000;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
    iVar4 = vmm_ReserveRegion(1,0,local_24);
    if (iVar4 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
      return (void *)0x0;
    }
    iVar4 = 1;
    *(uint *)(local_24[0] + 0x28) = uVar3;
    *(uint *)(local_24[0] + 0x2c) = uVar3;
    local_38 = (void *)(*(int *)(local_24[0] + 8) + 0xffffU & 0xffff0000);
  }
  if ((uVar2 & 0x1000) == 0) goto LAB_0413e576;
  if (local_24[0] == 0) {
    local_38 = (void *)(uVar6 & 0xfffff000);
    uVar5 = (uVar6 + 0xfff + uVar1 & 0xfffff000) - (int)local_38;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
    local_24[0] = FUN_0413c980();
    if (local_24[0] == 0) goto LAB_0413e70f;
    iVar4 = 1;
  }
  if ((*(byte *)(local_24[0] + 0x1c) & 3) != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
    goto LAB_0413e5f0;
  }
  if ((uVar3 & 0x100) != 0) {
    FUN_0402cd10(10,"Warning: VirtualAlloc() with PAGE_GUARD protection flag. Handle it.");
  }
  *(uint *)(local_24[0] + 0x2c) = uVar3;
  uVar7 = 2;
  uVar6 = uVar3 & 0xff;
  if (uVar6 != 8) {
    if (uVar6 < 9) {
      uVar7 = 1;
      if (((uVar6 != 2) && (uVar7 = 3, uVar6 != 4)) && (uVar7 = 0, uVar6 != 1)) goto LAB_0413e62b;
    }
    else {
      uVar7 = 5;
      if (uVar6 != 0x20) {
        if (uVar6 < 0x21) {
          uVar7 = 4;
          if (uVar6 != 0x10) {
LAB_0413e62b:
            FUN_0402cd10(10,"Win32ToPosixProtectFlags: unhandled flags %x !!",uVar3);
            uVar7 = 7;
          }
        }
        else {
          uVar7 = 7;
          if ((uVar6 != 0x40) && (uVar7 = 6, uVar6 != 0x80)) goto LAB_0413e62b;
        }
      }
    }
  }
  vmm_CommitRegion(uVar7);
LAB_0413e576:
  if (iVar4 == 0) {
    FUN_0400a810("locked",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x8d9,"void* eON_VirtualAllocEx(HANDLE, PVOID, SIZE_T, DWORD, DWORD)",0,uVar5);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  return local_38;
}

// --- eON_VirtualFreeEx @0x0413e790 ---
/* source: mem_vm */

undefined4 eON_VirtualFreeEx(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 != -1) {
    FUN_0402cd10(0xf,"VirtualFreeEx() called with hProcess %p !!",param_1);
    eON_SetLastError(6);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
  iVar2 = FUN_0413c980();
  if (iVar2 == 0) {
    FUN_0402cd10(10,
                 "VirtualFree() fail: encompassing reserved region not found for address %#X, size %#X"
                 ,param_2,param_3);
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x1c);
    if (((bVar1 & 3) == 0) && (*(int *)(iVar2 + 0x10) == 0)) {
      if (param_4 == 0x8000) {
        if ((param_2 + 0xfff + param_3 & 0xfffff000) == (param_2 & 0xfffff000)) {
          if (*(uint *)(iVar2 + 8) == (param_2 & 0xfffff000)) {
            vmm_DeleteReservedRegion();
            goto LAB_0413e91a;
          }
          FUN_0402cd10(10,
                       "VirtualFree() fail: MEM_RELEASE specified, address given not equal to region start address!"
                      );
        }
        else {
          FUN_0402cd10(10,"VirtualFree() fail: MEM_RELEASE specified, non-zero size!");
        }
      }
      else {
        if (param_4 == 0x4000) {
          custom_munmap();
LAB_0413e91a:
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
          return 1;
        }
        FUN_0402cd10(10,"VirtualFree() fail: unknown free flag specified: %u (%#x)",param_4,param_4)
        ;
      }
    }
    else if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if (*(int *)(iVar2 + 0x10) == 0) {
          FUN_0400a810("region->Mapping",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x937,"WINBOOL eON_VirtualFreeEx(HANDLE, LPVOID, SIZE_T, DWORD)");
        }
        FUN_0402cd10(10,"VirtualFree() fail: region has mapping");
      }
      else {
        FUN_0402cd10(10,"VirtualFree() fail: region is special region");
      }
    }
    else {
      FUN_0402cd10(10,"VirtualFree() fail: region is image region");
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  eON_SetLastError(0x57);
  return 0;
}

// --- getProcessVMInfo @0x0413d7d0 ---
/* source: mem_vm */

undefined4 getProcessVMInfo(undefined4 *param_1,undefined4 *param_2)

{
  FILE *__stream;
  uint uVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  if ((param_2 == (undefined4 *)0x0) && (param_1 == (undefined4 *)0x0)) {
    FUN_0400a810("vm_usage || rss_usage",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x19c,"bool getProcessVMInfo(ULONGLONG*, ULONGLONG*)");
  }
  if (DAT_04515b80 == '\0') {
    _Var2 = getpid();
    snprintf(&DAT_04515ba0,0x40,"/proc/%u/statm",_Var2);
    DAT_04515b80 = '\x01';
  }
  __stream = fopen64(&DAT_04515ba0,"r");
  if (__stream == (FILE *)0x0) {
    FUN_0402cd10(10,"getProcessVMInfo() - failed opening %s",&DAT_04515ba0);
    uVar3 = 0;
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      fscanf(__stream,"%llu",&local_2c);
    }
    else {
      fscanf(__stream,"%llu %llu",&local_2c,&local_24);
      uVar1 = FUN_0402f550();
      *param_2 = (int)((ulonglong)uVar1 * (ulonglong)local_24);
      param_2[1] = (int)((ulonglong)uVar1 * (ulonglong)local_24 >> 0x20) + local_20 * uVar1;
    }
    uVar3 = 1;
    fclose(__stream);
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = FUN_0402f550();
      *param_1 = (int)((ulonglong)uVar1 * (ulonglong)local_2c);
      param_1[1] = (int)((ulonglong)uVar1 * (ulonglong)local_2c >> 0x20) + local_28 * uVar1;
    }
  }
  return uVar3;
}

// --- vmm_CommitRegion @0x0413d0a0 ---
/* source: mem_vm */

void __regparm3 vmm_CommitRegion(int param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int local_3c;
  uint *local_34;
  int local_24;
  int local_20 [4];
  
  local_3c = 0x32;
  local_34 = (uint *)0x0;
  if (*(int *)(param_1 + 0x10) == 0) goto LAB_0413d177;
  iVar1 = Synchronisation_GetObjectInfo(*(int *)(param_1 + 0x10),&local_24,local_20);
  if (iVar1 != 1) {
    FUN_0400a810("Synchronisation_GetUserDataFromHandle( region->Mapping, (void**)&mapping, &type ) == 1"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x485,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
  }
  if (local_20[0] != 6) {
    FUN_0400a810("type == HandleFileMapping",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x486,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
  }
  local_34 = *(uint **)(local_24 + 4);
  uVar2 = *(uint *)(local_24 + 8) & 0xff;
  if (uVar2 != 8) {
    if (uVar2 < 9) {
      if (uVar2 != 0) {
        if (uVar2 < 3) goto LAB_0413d580;
        if (uVar2 == 4) goto LAB_0413d170;
      }
    }
    else {
      if (uVar2 == 0x20) {
LAB_0413d580:
        local_3c = 0x12;
        goto LAB_0413d177;
      }
      if (uVar2 < 0x21) {
        if (uVar2 == 0x10) goto LAB_0413d580;
      }
      else if ((uVar2 == 0x40) || (uVar2 == 0x80)) goto LAB_0413d170;
    }
    FUN_0402cd10(10,"Win32ToPosixProtectFlags: unhandled flags %x !!",*(uint *)(local_24 + 8));
  }
LAB_0413d170:
  local_3c = 0x11;
LAB_0413d177:
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar2 = (int)param_2 - *(int *)(param_1 + 8);
    uVar10 = uVar2 >> 0xc;
    uVar4 = (param_3 >> 0xc) + uVar10;
    pvVar3 = *(void **)(param_1 + 0x24);
    bVar13 = false;
    if (uVar10 < uVar4) {
      puVar9 = (uint *)((int)pvVar3 + (uVar2 >> 0x11) * 4);
      uVar2 = uVar10;
      uVar6 = uVar10;
      do {
        while( true ) {
          uVar11 = 1 << ((byte)uVar6 & 0x1f);
          if ((uVar11 & *puVar9) != 0) break;
          uVar6 = uVar6 + 1;
          *puVar9 = *puVar9 | uVar11;
          if ((uVar6 & 0x1f) == 0) {
            puVar9 = puVar9 + 1;
          }
          if (uVar4 <= uVar6) goto LAB_0413d3dd;
        }
        if (uVar2 < uVar6) {
          uVar11 = uVar2 * 0x1000;
          pvVar5 = (void *)(*(int *)(param_1 + 8) + uVar11);
          pvVar3 = mmap64(pvVar5,(uVar6 - uVar2) * 0x1000,param_4,local_3c,(int)local_34,
                          CONCAT44(*(int *)(param_1 + 0x18) +
                                   (uint)CARRY4(uVar11,*(uint *)(param_1 + 0x14)),
                                   uVar11 + *(uint *)(param_1 + 0x14)));
          if (pvVar5 != pvVar3) {
            FUN_0400a810("mmap( (void*) firstUncommittedAddress, commitSize, protFlags, mmapFlags, fileHandle, region->MappingFileOffset + ( firstIndexToCommit << 12 ) ) == (void*) firstUncommittedAddress"
                         ,
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                         ,0x4e4,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
          }
        }
        uVar2 = uVar6 + 1;
        if ((uVar2 & 0x1f) == 0) {
          puVar9 = puVar9 + 1;
        }
        uVar6 = uVar2;
      } while (uVar2 < uVar4);
LAB_0413d3dd:
      if (uVar2 < uVar4) {
        bVar13 = uVar10 == uVar2;
        uVar10 = uVar2 * 0x1000;
        pvVar5 = (void *)(*(int *)(param_1 + 8) + uVar10);
        pvVar3 = mmap64(pvVar5,(uVar4 - uVar2) * 0x1000,param_4,local_3c,(int)local_34,
                        CONCAT44(*(int *)(param_1 + 0x18) +
                                 (uint)CARRY4(uVar10,*(uint *)(param_1 + 0x14)),
                                 uVar10 + *(uint *)(param_1 + 0x14)));
        if (pvVar5 != pvVar3) {
          FUN_0400a810("mmap( (void*) firstUncommittedAddress, commitSize, protFlags, mmapFlags, fileHandle, region->MappingFileOffset + ( firstIndexToCommit << 12 ) ) == (void*) firstUncommittedAddress"
                       ,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x4ff,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
        }
        pvVar3 = *(void **)(param_1 + 0x24);
      }
      else {
        bVar13 = false;
        pvVar3 = *(void **)(param_1 + 0x24);
      }
    }
    iVar1 = FUN_0413a7d0();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != -1) {
      free(pvVar3);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (bVar13) {
      return;
    }
  }
  else {
    uVar2 = *(int *)(param_1 + 0x20) * 0x1000;
    pvVar3 = (void *)(uVar2 + *(int *)(param_1 + 8));
    if (pvVar3 < (void *)(param_3 + (int)param_2)) {
      if (pvVar3 < param_2) {
        uVar2 = (int)param_2 - *(int *)(param_1 + 8);
        pvVar3 = mmap64(param_2,param_3,param_4,local_3c,(int)local_34,
                        CONCAT44(*(int *)(param_1 + 0x18) +
                                 (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x14)),
                                 uVar2 + *(uint *)(param_1 + 0x14)));
        if (pvVar3 != param_2) {
          FUN_0400a810("mmap( (void*) addressAligned, sizeAligned, protFlags, mmapFlags, fileHandle, region->MappingFileOffset + ( (SIZE_T)addressAligned - (SIZE_T)region->Address ) ) == addressAligned"
                       ,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x4ac,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
        }
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_0400a810("!region->CommitTable",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x4b1,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
        }
        uVar11 = 1;
        uVar6 = *(uint *)(param_1 + 0xc) >> 0xc;
        local_34 = malloc((*(uint *)(param_1 + 0xc) - 1 >> 0x11) * 4 + 4);
        *(uint **)(param_1 + 0x24) = local_34;
        uVar2 = *(uint *)(param_1 + 0x20);
        uVar12 = (uint)((int)param_2 - *(int *)(param_1 + 8)) >> 0xc;
        uVar4 = (param_3 >> 0xc) + uVar12;
        uVar10 = 1;
        if (uVar2 == 0) {
          uVar2 = 0;
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          while (uVar10 < uVar2) {
            uVar7 = uVar10 + 1;
            uVar8 = uVar10 & 0x1f;
            uVar11 = uVar11 | 1 << (sbyte)uVar8;
            uVar10 = uVar7;
            if (uVar8 == 0x1f) {
              uVar8 = uVar2 - uVar7 >> 5;
              *local_34 = uVar11;
              local_34 = local_34 + 1;
              uVar11 = 0;
              if (uVar8 != 0) {
                memset(local_34,0xff,uVar8 * 4);
                uVar10 = uVar7 + uVar8 * 0x20;
                local_34 = local_34 + uVar8;
              }
            }
          }
          uVar2 = uVar10 & 0x1f;
        }
        uVar8 = uVar10;
        if (uVar10 < uVar12) {
          do {
            uVar8 = uVar10 + 1;
            if ((uVar10 & 0x1f) == 0x1f) {
              *local_34 = uVar11;
              local_34 = local_34 + 1;
              uVar11 = 0;
              uVar2 = uVar12 - uVar8 >> 5;
              if (uVar2 != 0) {
                bzero(local_34,uVar2 * 4);
                uVar8 = uVar8 + uVar2 * 0x20;
                local_34 = local_34 + uVar2;
              }
            }
            uVar10 = uVar8;
          } while (uVar8 < uVar12);
          uVar2 = uVar8 & 0x1f;
        }
        uVar10 = uVar8;
        if (uVar8 < uVar4) {
          do {
            uVar10 = uVar8 + 1;
            uVar11 = uVar11 | 1 << (sbyte)(uVar8 & 0x1f);
            if ((uVar8 & 0x1f) == 0x1f) {
              uVar2 = uVar4 - uVar10 >> 5;
              *local_34 = uVar11;
              local_34 = local_34 + 1;
              uVar11 = 0;
              if (uVar2 != 0) {
                memset(local_34,0xff,uVar2 * 4);
                uVar10 = uVar10 + uVar2 * 0x20;
                local_34 = local_34 + uVar2;
              }
            }
            uVar8 = uVar10;
          } while (uVar10 < uVar4);
          uVar2 = uVar10 & 0x1f;
        }
        if (uVar10 < uVar6) {
          do {
            uVar2 = uVar10 + 1;
            if ((uVar10 & 0x1f) == 0x1f) {
              *local_34 = uVar11;
              local_34 = local_34 + 1;
              uVar11 = 0;
              uVar10 = uVar6 - uVar2 >> 5;
              if (uVar10 != 0) {
                bzero(local_34,uVar10 * 4);
                uVar2 = uVar2 + uVar10 * 0x20;
                local_34 = local_34 + uVar10;
              }
            }
            uVar10 = uVar2;
          } while (uVar2 < uVar6);
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          *local_34 = uVar11;
        }
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        return;
      }
      uVar10 = (int)(param_3 + (int)param_2) - (int)pvVar3;
      pvVar5 = mmap64(pvVar3,uVar10,param_4,local_3c,(int)local_34,
                      CONCAT44(*(int *)(param_1 + 0x18) +
                               (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x14)),
                               uVar2 + *(uint *)(param_1 + 0x14)));
      if (pvVar3 != pvVar5) {
        FUN_0400a810("mmap( (void*) firstUncommittedAddress, bytesToExtendBy, protFlags, mmapFlags, fileHandle, region->MappingFileOffset + ( firstUncommittedAddress - (SIZE_T)region->Address ) ) == (void*) firstUncommittedAddress"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                     ,0x49f,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (uVar10 >> 0xc);
      if (pvVar3 == param_2) {
        return;
      }
    }
  }
  iVar1 = mprotect(param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_0400a810("mprotect( addressAligned, sizeAligned, protFlags ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x511,"void vmm_CommitRegion(ReservedRegion*, PVOID, SIZE_T, int)");
  }
  return;
}

// --- vmm_DeleteReservedRegion @0x0413cfa0 ---
/* source: mem_vm */

void __regparm3 vmm_DeleteReservedRegion(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  custom_munmap();
  uVar1 = param_1[2];
  uVar4 = FUN_0402e5f0();
  if ((uVar4 <= uVar1) && (iVar5 = munmap((void *)param_1[2],param_1[3]), iVar5 != 0)) {
    FUN_0400a810("munmap( region->Address, region->Size ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x70c,"void vmm_DeleteReservedRegion(ReservedRegion*)");
  }
  piVar2 = (int *)param_1[1];
  iVar5 = *param_1;
  iVar3 = iVar5;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar5;
    iVar5 = *param_1;
    iVar3 = DAT_04515be8;
  }
  DAT_04515be8 = iVar3;
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar2;
    piVar2 = DAT_04515c0c;
  }
  DAT_04515c0c = piVar2;
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
  }
  if (param_1[9] != 0) {
    FUN_0400a810("!region->CommitTable",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x722,"void vmm_DeleteReservedRegion(ReservedRegion*)");
  }
  free(param_1);
  return;
}

// --- vmm_Init @0x0413dcd0 ---
/* source: mem_vm */

undefined4 vmm_Init(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t __len;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  pthread_mutex_init((pthread_mutex_t *)&DAT_04515bf4,(pthread_mutexattr_t *)0x0);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  getProcessVMInfo(&local_1c,&local_14);
  FUN_0402cd10(5,"vmm: initial memory state, virtual: %llu, resident: %llu",local_1c,local_18,
               local_14,local_10);
  uVar1 = FUN_0402e600();
  uVar2 = FUN_0402e5f0();
  uVar3 = FUN_0402e5e0();
  FUN_0402cd10(5,"vmm_init: reserve range %p-%p (size %zx)",uVar3,uVar2,uVar1);
  __len = FUN_0402e600();
  pvVar4 = (void *)FUN_0402e5e0();
  pvVar4 = mmap64(pvVar4,__len,0,0x32,0,0);
  pvVar5 = (void *)FUN_0402e5e0();
  if (pvVar4 != pvVar5) {
    FUN_0400a810("mmap( Win32ReserveStart(), Win32ReserveSize(), 0x0, 0x10|0x02|0x20, 0, 0 ) == Win32ReserveStart()"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x73c,"bool vmm_Init()");
  }
  puVar6 = calloc(1,0x34);
  *(byte *)(puVar6 + 7) = *(byte *)(puVar6 + 7) | 2;
  puVar6[2] = 0;
  puVar6[3] = 0x10000;
  puVar6[10] = 1;
  puVar6[0xb] = 1;
  DAT_04515be8 = puVar6;
  puVar7 = calloc(1,0x34);
  *(byte *)(puVar7 + 7) = *(byte *)(puVar7 + 7) | 2;
  puVar7[1] = puVar6;
  *puVar6 = puVar7;
  puVar7[2] = 0x10000;
  puVar7[3] = 0x100000;
  puVar7[10] = 0x40;
  puVar7[0xb] = 0x40;
  DAT_04515c0c = calloc(1,0x34);
  *(byte *)((int)DAT_04515c0c + 0x1c) = *(byte *)((int)DAT_04515c0c + 0x1c) | 2;
  *(undefined4 **)((int)DAT_04515c0c + 4) = puVar7;
  *puVar7 = DAT_04515c0c;
  *(undefined **)((int)DAT_04515c0c + 8) = &DAT_00110000;
  *(undefined **)((int)DAT_04515c0c + 0xc) = &DAT_002f0000;
  *(undefined4 *)((int)DAT_04515c0c + 0x28) = 1;
  *(undefined4 *)((int)DAT_04515c0c + 0x2c) = 1;
  vmm_CommitRegion(7);
  FUN_0402cd10(5,"vmm: post-init memory state, virtual: %llu, resident: %llu",local_1c,local_18,
               local_14,local_10);
  return 1;
}

// --- vmm_PrepareImageRegion @0x0413e180 ---
/* source: mem_vm */

undefined4 vmm_PrepareImageRegion(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  if (param_1 != (param_1 & 0xffff0000)) {
    FUN_0400a810("(PVOID) RoundDownToAddrBoundary( (SIZE_T) address ) == address",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                 ,0x7db,"void* vmm_PrepareImageRegion(PVOID, SIZE_T)");
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
  local_10 = 0;
  iVar1 = vmm_ReserveRegion(1,0,&local_10);
  if (iVar1 == 0) {
    uVar2 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  }
  else {
    *(byte *)(local_10 + 0x1c) = *(byte *)(local_10 + 0x1c) | 1;
    if (*(uint *)(local_10 + 8) != (*(uint *)(local_10 + 8) + 0xffff & 0xffff0000)) {
      FUN_0400a810("region->Address == (PVOID) RoundUpToAddrBoundary( (SIZE_T)region->Address )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                   ,0x7eb,"void* vmm_PrepareImageRegion(PVOID, SIZE_T)");
    }
    *(undefined4 *)(local_10 + 0x28) = 0x40;
    *(undefined4 *)(local_10 + 0x2c) = 0x40;
    vmm_CommitRegion(7);
    uVar2 = *(undefined4 *)(local_10 + 8);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  }
  return uVar2;
}

// --- vmm_ReserveNewRegion @0x0413a8d0 ---
/* source: mem_vm */

void * __regparm3
vmm_ReserveNewRegion(uint param_1,char param_2,char param_3,char param_4,int *param_5)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  void *__addr;
  int *piVar7;
  void *pvVar8;
  
  if (param_4 != '\0') goto LAB_0413a8e8;
  if (param_2 != '\0') {
    iVar5 = FUN_0402e5f0();
    pvVar8 = (void *)(iVar5 - param_1);
    for (piVar7 = DAT_04515c0c; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      uVar3 = piVar7[2];
      uVar4 = FUN_0402e5f0();
      if (uVar3 < uVar4) {
        uVar3 = piVar7[2];
        bVar1 = false;
        if ((void *)(piVar7[3] + uVar3) <= pvVar8) goto LAB_0413ab85;
        if (uVar3 < param_1) goto LAB_0413ab80;
        if (param_3 != '\0') goto LAB_0413ab90;
        goto LAB_0413ab5b;
      }
    }
LAB_0413aac0:
    bVar1 = false;
    piVar7 = DAT_04515be8;
    goto LAB_0413aac7;
  }
  bVar1 = false;
  pvVar8 = (void *)0x0;
  piVar7 = DAT_04515be8;
  if (DAT_04515be8 != (int *)0x0) {
    uVar3 = DAT_04515be8[2];
    bVar1 = false;
    if (uVar3 < param_1) {
      if (param_3 == '\0') {
        do {
          pvVar8 = (void *)(piVar7[3] + uVar3);
          uVar3 = FUN_0402e5f0();
          if (uVar3 < (int)pvVar8 + param_1) goto LAB_0413abf0;
          piVar7 = (int *)*piVar7;
          if (piVar7 == (int *)0x0) goto LAB_0413abb8;
          uVar3 = piVar7[2];
        } while (uVar3 < (int)pvVar8 + param_1);
        bVar1 = false;
      }
      else {
        do {
          pvVar8 = (void *)(uVar3 + 0xffff + piVar7[3] & 0xffff0000);
          uVar3 = FUN_0402e5f0();
          if (uVar3 < (int)pvVar8 + param_1) goto LAB_0413abf0;
          piVar7 = (int *)*piVar7;
          if (piVar7 == (int *)0x0) goto LAB_0413abb8;
          uVar3 = piVar7[2];
        } while (uVar3 < (int)pvVar8 + param_1);
        bVar1 = false;
      }
    }
  }
  goto LAB_0413aa32;
  while( true ) {
    uVar3 = piVar7[2];
    if ((void *)(piVar7[3] + uVar3) <= pvVar8) goto LAB_0413abc8;
    if (uVar3 < param_1) break;
LAB_0413ab5b:
    piVar7 = (int *)piVar7[1];
    pvVar8 = (void *)(uVar3 - param_1);
    if (piVar7 == (int *)0x0) goto LAB_0413aac0;
  }
  goto LAB_0413ab80;
LAB_0413ab90:
  do {
    piVar7 = (int *)piVar7[1];
    pvVar8 = (void *)(uVar3 - param_1 & 0xffff0000);
    if (piVar7 == (int *)0x0) goto LAB_0413aac0;
    uVar3 = piVar7[2];
    if ((void *)(piVar7[3] + uVar3) <= pvVar8) goto LAB_0413abc8;
  } while (param_1 <= uVar3);
LAB_0413ab80:
  bVar1 = true;
LAB_0413ab85:
  piVar7 = (int *)*piVar7;
LAB_0413aac7:
  *param_5 = (int)piVar7;
  goto LAB_0413aa37;
LAB_0413abc8:
  bVar1 = false;
  piVar7 = (int *)*piVar7;
  goto LAB_0413aac7;
LAB_0413abf0:
  bVar1 = true;
  goto LAB_0413aa32;
LAB_0413abb8:
  piVar7 = (int *)0x0;
  bVar1 = false;
LAB_0413aa32:
  *param_5 = (int)piVar7;
LAB_0413aa37:
  if (!bVar1) {
    return pvVar8;
  }
LAB_0413a8e8:
  pvVar8 = (void *)0x0;
  pvVar2 = mmap64((void *)0x0,param_1 + 0xf000,0,0x22,0,0);
  if (pvVar2 != (void *)0xffffffff) {
    pvVar8 = pvVar2;
    if (((param_3 != '\0') &&
        (pvVar8 = (void *)((int)pvVar2 + 0xffffU & 0xffff0000), pvVar2 < pvVar8)) &&
       (iVar5 = munmap(pvVar2,(int)pvVar8 - (int)pvVar2), iVar5 != 0)) {
      FUN_0400a810("munmap( addr, roundedAddr - (SIZE_T) addr ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                   ,0x609,"void* vmm_ReserveNewRegion(SIZE_T, bool, bool, bool, ReservedRegion*&)");
    }
    pvVar2 = (void *)((int)pvVar2 + param_1 + 0xf000);
    __addr = (void *)(param_1 + (int)pvVar8);
    if ((__addr < pvVar2) && (iVar5 = munmap(__addr,(int)pvVar2 - (int)__addr), iVar5 != 0)) {
      FUN_0400a810("munmap( (LPVOID) endOfNeededRegion, endOfMappedRegion - endOfNeededRegion ) == 0"
                   ,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                   ,0x611,"void* vmm_ReserveNewRegion(SIZE_T, bool, bool, bool, ReservedRegion*&)");
    }
    if (DAT_04515c0c == (int *)0x0) {
LAB_0413a9c1:
      *param_5 = 0;
    }
    else {
      pvVar2 = (void *)DAT_04515c0c[2];
      pvVar6 = (void *)(DAT_04515c0c[3] + (int)pvVar2);
      piVar7 = DAT_04515c0c;
      while (pvVar8 < pvVar6) {
        if (pvVar2 < __addr) {
          FUN_0400a810("(SIZE_T) region->Address >= (SIZE_T) addressAligned + sizeAligned",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x621,
                       "void* vmm_ReserveNewRegion(SIZE_T, bool, bool, bool, ReservedRegion*&)");
          piVar7 = (int *)piVar7[1];
        }
        else {
          piVar7 = (int *)piVar7[1];
        }
        if (piVar7 == (int *)0x0) goto LAB_0413a9c1;
        pvVar2 = (void *)piVar7[2];
        pvVar6 = (void *)(piVar7[3] + (int)pvVar2);
      }
      *param_5 = *piVar7;
    }
  }
  return pvVar8;
}

// --- vmm_ReserveRegion @0x0413ac50 ---
/* source: mem_vm */

undefined4 __regparm2
vmm_ReserveRegion(void *param_1,size_t param_2,undefined4 param_3,char param_4,undefined4 *param_5)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *local_20 [4];
  
  if (param_1 == (void *)0x0) {
    param_1 = (void *)vmm_ReserveNewRegion(param_4,local_20);
    if (param_1 != (void *)0x0) goto LAB_0413acea;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
    uVar7 = eON_GetTickCount();
    FUN_0402cd10(0xf,
                 "Stalling to avoid going out of memory in vmm_ReserveRegion! Lower your memory requirements to avoid a crash!"
                );
    do {
      sched_yield();
      pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
      param_1 = (void *)vmm_ReserveNewRegion(param_4,local_20);
      if (param_1 != (void *)0x0) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
        goto LAB_0413acea;
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
      uVar8 = eON_GetTickCount();
    } while (((int)((ulonglong)uVar8 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20) ==
              (uint)((uint)uVar8 < (uint)uVar7)) && ((uint)uVar8 - (uint)uVar7 < 100));
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
    piVar4 = __errno_location();
    uVar5 = 0x57;
    if (*piVar4 == 0xc) {
      uVar5 = 8;
    }
    eON_SetLastError(uVar5);
  }
  else {
    pvVar1 = (void *)FUN_0402e5e0();
    if ((pvVar1 <= param_1) && (param_1 < (void *)0xd0000000)) {
      pvVar1 = (void *)FUN_0402e5f0();
      if (param_1 < pvVar1) {
        if (param_4 != '\0') {
          FUN_0400a810("!needHighMemory",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                       ,0x644,
                       "WINBOOL vmm_ReserveRegion(PVOID, SIZE_T, bool, bool, bool, ReservedRegion**)"
                      );
        }
        uVar2 = FUN_0402e5f0();
        if (uVar2 < param_2 + (int)param_1) {
          eON_SetLastError(0x1e7);
          return 0;
        }
        local_20[0] = DAT_04515be8;
        if (DAT_04515be8 != (undefined4 *)0x0) {
          uVar2 = DAT_04515be8[2];
          pvVar1 = (void *)(DAT_04515be8[3] + uVar2);
          puVar6 = DAT_04515be8;
          while (pvVar1 <= param_1) {
            local_20[0] = (undefined4 *)*puVar6;
            if (local_20[0] == (undefined4 *)0x0) goto LAB_0413acea;
            uVar2 = local_20[0][2];
            puVar6 = local_20[0];
            pvVar1 = (void *)(local_20[0][3] + uVar2);
          }
          local_20[0] = puVar6;
          if (uVar2 < param_2 + (int)param_1) {
            eON_SetLastError(0x1e7);
            FUN_0402cd10(10,
                         "Trying to reserve region at offset %p, size %#zx, colliding with region at address %p, size %#zx. Failed."
                         ,param_1,param_2,puVar6[2],puVar6[3]);
            return 0;
          }
        }
        goto LAB_0413acea;
      }
      pvVar1 = mmap64(param_1,param_2,0,0x4022,0,0);
      if (pvVar1 == (void *)0xffffffff) {
        if (param_1 != pvVar1) {
LAB_0413ada5:
          piVar4 = __errno_location();
          uVar5 = 8;
          if (*piVar4 != 0xc) {
            uVar5 = 0x57;
          }
          eON_SetLastError(uVar5);
          return 0;
        }
      }
      else if (param_1 != pvVar1) {
        munmap(pvVar1,param_2);
        goto LAB_0413ada5;
      }
      local_20[0] = (undefined4 *)0x0;
      if (DAT_04515c0c != (undefined4 *)0x0) {
        uVar2 = DAT_04515c0c[2];
        puVar6 = DAT_04515c0c;
        if (param_1 < (void *)(DAT_04515c0c[3] + uVar2)) {
          do {
            if (uVar2 < (int)param_1 + param_2) {
              FUN_0400a810("(SIZE_T)region->Address >= (SIZE_T)addressAligned + sizeAligned",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                           ,0x683,
                           "WINBOOL vmm_ReserveRegion(PVOID, SIZE_T, bool, bool, bool, ReservedRegion**)"
                          );
            }
            puVar6 = (undefined4 *)puVar6[1];
            local_20[0] = (undefined4 *)0x0;
            if (puVar6 == (undefined4 *)0x0) goto LAB_0413acea;
            uVar2 = puVar6[2];
          } while (param_1 < (void *)(puVar6[3] + uVar2));
        }
        local_20[0] = (undefined4 *)*puVar6;
      }
LAB_0413acea:
      puVar6 = local_20[0];
      puVar3 = calloc(1,0x34);
      puVar3[2] = param_1;
      puVar3[3] = param_2;
      if (puVar6 == (undefined4 *)0x0) {
        if (DAT_04515c0c == (undefined4 *)0x0) {
          if (DAT_04515be8 != (undefined4 *)0x0) {
            FUN_0400a810("!FirstRegion",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp"
                         ,0x6cb,
                         "WINBOOL vmm_ReserveRegion(PVOID, SIZE_T, bool, bool, bool, ReservedRegion**)"
                        );
          }
          puVar3[1] = 0;
          *puVar3 = 0;
          DAT_04515be8 = puVar3;
          DAT_04515c0c = puVar3;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = DAT_04515c0c;
          *DAT_04515c0c = puVar3;
          DAT_04515c0c = puVar3;
        }
      }
      else {
        uVar5 = puVar6[1];
        *puVar3 = puVar6;
        puVar3[1] = uVar5;
        if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
          puVar6 = DAT_04515be8 + 1;
          DAT_04515be8 = puVar3;
          *puVar6 = puVar3;
        }
        else {
          *(undefined4 *)puVar6[1] = puVar3;
          puVar6[1] = puVar3;
        }
      }
      *param_5 = puVar3;
      return 1;
    }
    eON_SetLastError(0x57);
  }
  return 0;
}

// --- attached helper FUN_0013d940 @0x0413d940 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0413d940(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_14 [3];
  
  iVar2 = eON_timeGetTime();
  if (1000 < (uint)(iVar2 - _DAT_04515be0)) {
    cVar1 = getProcessVMInfo(local_14,0);
    if (cVar1 == '\0') {
      local_14[0] = DAT_04515be4;
    }
    _DAT_04515be0 = iVar2;
    DAT_04515be4 = local_14[0];
    return local_14[0];
  }
  return DAT_04515be4;
}

// --- attached helper FUN_0013df00 @0x0413df00 (call-graph exclusive to this TU) ---
undefined4
FUN_0413df00(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if ((param_1 & 0xffff0000) != param_1) {
    eON_SetLastError(0x57);
    return 0xffffffff;
  }
  uVar4 = 0xffffffff;
  iVar1 = Synchronisation_GetObjectInfo(param_4,&local_28,&local_24);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (local_24 != 6) {
    return 0xffffffff;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
  local_20[0] = 0;
  iVar1 = vmm_ReserveRegion(1,1,local_20);
  if (iVar1 == 0) goto LAB_0413dff9;
  uVar4 = *(undefined4 *)(local_20[0] + 8);
  *(undefined4 *)(local_20[0] + 0x10) = param_4;
  *(undefined4 *)(local_20[0] + 0x14) = param_5;
  *(undefined4 *)(local_20[0] + 0x18) = param_6;
  uVar5 = *(uint *)(local_28 + 8);
  uVar3 = uVar5 & 0xfff;
  *(uint *)(local_20[0] + 0x28) = uVar3;
  *(uint *)(local_20[0] + 0x2c) = uVar3;
  if ((uVar5 & 0x8000000) != 0) {
    uVar5 = uVar5 & 0xff;
    uVar2 = 2;
    if (uVar5 != 8) {
      if (uVar5 < 9) {
        uVar2 = 1;
        if (((uVar5 != 2) && (uVar2 = 3, uVar5 != 4)) && (uVar2 = 0, uVar5 != 1)) goto LAB_0413e037;
      }
      else {
        uVar2 = 5;
        if (uVar5 != 0x20) {
          if (uVar5 < 0x21) {
            uVar2 = 4;
            if (uVar5 != 0x10) {
LAB_0413e037:
              FUN_0402cd10(10,"Win32ToPosixProtectFlags: unhandled flags %x !!",uVar3);
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 7;
            if ((uVar5 != 0x40) && (uVar2 = 6, uVar5 != 0x80)) goto LAB_0413e037;
          }
        }
      }
    }
    vmm_CommitRegion(uVar2);
  }
  Synchronisation_AddRefHandle(param_4);
LAB_0413dff9:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  return uVar4;
}

// --- attached helper FUN_0013e290 @0x0413e290 (call-graph exclusive to this TU) ---
undefined4 FUN_0413e290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_10 = 0;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04515bf4);
    iVar1 = vmm_ReserveRegion(0,0,&local_10);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(local_10 + 8);
      *(undefined4 *)(local_10 + 0x28) = 0x40;
      *(undefined4 *)(local_10 + 0x2c) = 0x40;
      vmm_CommitRegion(7);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04515bf4);
  }
  return uVar2;
}

