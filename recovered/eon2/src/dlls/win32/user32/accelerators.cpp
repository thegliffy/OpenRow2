// Recovered source: eon2/src/dlls/win32/user32/accelerators.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AddTableToValidTablesListAndGetHandle @0x0416cc30 ---
/* source: accelerators */

uint AddTableToValidTablesListAndGetHandle(undefined4 param_1,undefined4 param_2)

{
  _Rb_tree_node_base *p_Var1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  byte *pbVar12;
  bool bVar13;
  _Rb_tree_node_base *local_38;
  
  iVar4 = FindResourceW(param_1,param_2,9);
  if (iVar4 == 0) {
    FUN_0402cd10(10,"Couldn\'t load accelerator table.");
    return 0;
  }
  pbVar5 = (byte *)LoadResource(param_1,iVar4);
  uVar6 = eON_SizeofResource(param_1,iVar4);
  if (uVar6 < 8) {
    return 0;
  }
  uVar6 = uVar6 >> 3;
  pbVar7 = calloc(1,uVar6 * 6);
  iVar4 = 0;
  pbVar12 = pbVar7;
  do {
    *(undefined2 *)(pbVar12 + 4) = *(undefined2 *)(pbVar5 + 4);
    uVar2 = *(ushort *)(pbVar5 + 2);
    *(ushort *)(pbVar12 + 2) = uVar2;
    *pbVar12 = (byte)*(undefined2 *)pbVar5 & 0x7f;
    if ((*pbVar5 & 1) == 0) {
      *(ushort *)(pbVar12 + 2) = uVar2 & 0xff;
    }
    uVar3 = DAT_04410aa8;
    iVar4 = iVar4 + 1;
    pbVar5 = pbVar5 + 8;
    pbVar12 = pbVar12 + 6;
  } while (iVar4 < (int)uVar6);
  pbVar7[(uVar6 * 3 + -3) * 2] = pbVar7[(uVar6 * 3 + -3) * 2] | 0x80;
  iVar4 = DAT_04410aa8 + 1;
  if (DAT_0451bdb0 == (_Rb_tree_node_base *)0x0) {
LAB_0416ce78:
    DAT_04410aa8 = iVar4;
    p_Var8 = DAT_0451bdb8;
    if ((DAT_0451bdbc != 0) && (*(uint *)(DAT_0451bdb8 + 0x10) < uVar3)) {
      bVar13 = DAT_0451bdb8 == (_Rb_tree_node_base *)&DAT_0451bdac;
      p_Var10 = operator_new(0x18);
      if (p_Var10 != (_Rb_tree_node_base *)0x0) {
        *(undefined4 *)p_Var10 = 0;
        *(undefined4 *)(p_Var10 + 4) = 0;
        *(undefined4 *)(p_Var10 + 8) = 0;
        *(undefined4 *)(p_Var10 + 0xc) = 0;
        *(uint *)(p_Var10 + 0x10) = uVar3;
        *(undefined4 *)(p_Var10 + 0x14) = 0;
      }
      std::_Rb_tree_insert_and_rebalance(bVar13,p_Var10,p_Var8,(_Rb_tree_node_base *)&DAT_0451bdac);
      DAT_0451bdbc = DAT_0451bdbc + 1;
      goto LAB_0416ce20;
    }
  }
  else {
    p_Var8 = DAT_0451bdb0;
    p_Var9 = (_Rb_tree_node_base *)&DAT_0451bdac;
    do {
      while (p_Var11 = p_Var8, *(uint *)(p_Var11 + 0x10) < DAT_04410aa8) {
        p_Var10 = p_Var11 + 0xc;
        p_Var8 = *(_Rb_tree_node_base **)p_Var10;
        p_Var11 = p_Var9;
        if (*(_Rb_tree_node_base **)p_Var10 == (_Rb_tree_node_base *)0x0) goto LAB_0416cd3d;
      }
      p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 8);
      p_Var9 = p_Var11;
    } while (*(_Rb_tree_node_base **)(p_Var11 + 8) != (_Rb_tree_node_base *)0x0);
LAB_0416cd3d:
    if (((p_Var11 != (_Rb_tree_node_base *)&DAT_0451bdac) &&
        (*(uint *)(p_Var11 + 0x10) <= DAT_04410aa8)) &&
       (DAT_04410aa8 = iVar4,
       FUN_0400a810("sAcceleratorTables.find( index ) == sAcceleratorTables.end()",
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/accelerators.cpp"
                    ,0x14,"void* AddTableToValidTablesListAndGetHandle(LPACCEL)"),
       iVar4 = DAT_04410aa8, DAT_0451bdb0 == (_Rb_tree_node_base *)0x0)) goto LAB_0416ce78;
    DAT_04410aa8 = iVar4;
    p_Var8 = DAT_0451bdb4;
    p_Var9 = (_Rb_tree_node_base *)&DAT_0451bdac;
    p_Var11 = DAT_0451bdb0;
    do {
      while (p_Var10 = p_Var11, *(uint *)(p_Var10 + 0x10) < uVar3) {
        p_Var1 = p_Var10 + 0xc;
        p_Var10 = p_Var9;
        p_Var11 = *(_Rb_tree_node_base **)p_Var1;
        if (*(_Rb_tree_node_base **)p_Var1 == (_Rb_tree_node_base *)0x0) goto LAB_0416cd6d;
      }
      p_Var9 = p_Var10;
      p_Var11 = *(_Rb_tree_node_base **)(p_Var10 + 8);
    } while (*(_Rb_tree_node_base **)(p_Var10 + 8) != (_Rb_tree_node_base *)0x0);
LAB_0416cd6d:
    iVar4 = DAT_04410aa8;
    if (p_Var10 == (_Rb_tree_node_base *)&DAT_0451bdac) goto LAB_0416ce78;
    if (*(uint *)(p_Var10 + 0x10) <= uVar3) goto LAB_0416ce20;
    if (DAT_0451bdb4 == p_Var10) {
      p_Var9 = operator_new(0x18);
      p_Var10 = p_Var8;
      if (p_Var9 != (_Rb_tree_node_base *)0x0) {
        *(undefined4 *)p_Var9 = 0;
        *(undefined4 *)(p_Var9 + 4) = 0;
        *(undefined4 *)(p_Var9 + 8) = 0;
        *(undefined4 *)(p_Var9 + 0xc) = 0;
        *(uint *)(p_Var9 + 0x10) = uVar3;
        *(undefined4 *)(p_Var9 + 0x14) = 0;
      }
LAB_0416cdfc:
      std::_Rb_tree_insert_and_rebalance(true,p_Var9,p_Var10,(_Rb_tree_node_base *)&DAT_0451bdac);
      DAT_0451bdbc = DAT_0451bdbc + 1;
      p_Var10 = p_Var9;
      goto LAB_0416ce20;
    }
    p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var10);
    if (*(uint *)(p_Var8 + 0x10) < uVar3) {
      if (*(int *)(p_Var8 + 0xc) == 0) {
        p_Var10 = operator_new(0x18);
        if (p_Var10 != (_Rb_tree_node_base *)0x0) {
          *(undefined4 *)p_Var10 = 0;
          *(undefined4 *)(p_Var10 + 4) = 0;
          *(undefined4 *)(p_Var10 + 8) = 0;
          *(undefined4 *)(p_Var10 + 0xc) = 0;
          *(uint *)(p_Var10 + 0x10) = uVar3;
          *(undefined4 *)(p_Var10 + 0x14) = 0;
        }
        std::_Rb_tree_insert_and_rebalance
                  (p_Var8 == (_Rb_tree_node_base *)&DAT_0451bdac,p_Var10,p_Var8,
                   (_Rb_tree_node_base *)&DAT_0451bdac);
        DAT_0451bdbc = DAT_0451bdbc + 1;
        goto LAB_0416ce20;
      }
      p_Var9 = operator_new(0x18);
      if (p_Var9 != (_Rb_tree_node_base *)0x0) {
        *(undefined4 *)p_Var9 = 0;
        *(undefined4 *)(p_Var9 + 4) = 0;
        *(undefined4 *)(p_Var9 + 8) = 0;
        *(undefined4 *)(p_Var9 + 0xc) = 0;
        *(uint *)(p_Var9 + 0x10) = uVar3;
        *(undefined4 *)(p_Var9 + 0x14) = 0;
      }
      goto LAB_0416cdfc;
    }
  }
  eON_Int_AccelTableMap_FindInsertPos();
  p_Var10 = local_38;
LAB_0416ce20:
  *(byte **)(p_Var10 + 0x14) = pbVar7;
  return uVar3;
}

// --- eON_LoadAcceleratorsA @0x0416cff0 ---
/* source: accelerators */

undefined4 eON_LoadAcceleratorsA(undefined4 param_1,uint param_2)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  
  if ((param_2 & 0xffff0000) == 0) {
    uVar2 = AddTableToValidTablesListAndGetHandle(param_1,param_2);
  }
  else {
    iVar1 = eON_MultiByteToWideChar(0,0,param_2,0xffffffff,0,0);
    __ptr = malloc(iVar1 * 2);
    if (__ptr == (void *)0x0) {
      FUN_0400a810("wideName",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/accelerators.cpp"
                   ,0x6f,"void* eON_LoadAcceleratorsA(HINSTANCE, LPCSTR)");
    }
    eON_MultiByteToWideChar(0,0,param_2,0xffffffff,__ptr,iVar1);
    uVar2 = AddTableToValidTablesListAndGetHandle(param_1,__ptr);
    free(__ptr);
  }
  return uVar2;
}

