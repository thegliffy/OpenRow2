// Recovered source: eon2/src/dlls/directx/d3d9/samplercache.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- SamplerCache::GetSamplerForState @0x040e4900 ---
/* source: samplercache */

int SamplerCache__GetSamplerForState(int param_1,undefined4 *param_2,uint param_3)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *local_b0;
  _Rb_tree_node_base *local_ac;
  _Rb_tree_node_base *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20 [4];
  
  bzero(&local_5c,0x38);
  local_5c = *param_2;
  local_58 = param_2[1];
  local_54 = param_2[2];
  local_50 = param_2[3];
  local_4c = param_2[4];
  local_48 = param_2[5];
  local_44 = param_2[6];
  local_40 = param_2[7];
  local_3c = param_2[8];
  local_38 = param_2[9];
  local_34 = param_2[10];
  local_30 = param_2[0xb];
  local_2c = param_2[0xc];
  local_28 = param_2[0xd];
  local_24 = param_3 & 3;
  if ((param_3 & 4) != 0) {
    local_54 = 0x812f;
    local_58 = 0x812f;
    local_5c = 0x812f;
  }
  p_Var4 = (_Rb_tree_node_base *)(param_1 + 4);
  p_Var6 = *(_Rb_tree_node_base **)(param_1 + 8);
  p_Var3 = p_Var4;
  if (*(_Rb_tree_node_base **)(param_1 + 8) != (_Rb_tree_node_base *)0x0) {
    do {
      while (p_Var5 = p_Var6, iVar2 = memcmp(p_Var5 + 0x10,&local_5c,0x3c), iVar2 < 0) {
        p_Var1 = p_Var5 + 0xc;
        p_Var6 = *(_Rb_tree_node_base **)p_Var1;
        p_Var5 = p_Var3;
        if (*(_Rb_tree_node_base **)p_Var1 == (_Rb_tree_node_base *)0x0) goto LAB_040e49eb;
      }
      p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
      p_Var3 = p_Var5;
    } while (*(_Rb_tree_node_base **)(p_Var5 + 8) != (_Rb_tree_node_base *)0x0);
LAB_040e49eb:
    if ((p_Var4 != p_Var5) && (iVar2 = memcmp(&local_5c,p_Var5 + 0x10,0x3c), -1 < iVar2)) {
      iVar2 = *(int *)(p_Var5 + 0x4c);
      goto LAB_040e4a21;
    }
  }
  (*DAT_0451e3bc)(1,local_20);
  (*DAT_0451e398)(local_20[0],0x1004,&local_3c);
  iVar2 = local_50;
  if ((local_48 != 0) && ((local_24 & 2) != 0)) {
    if (local_48 == 0x2600) {
      iVar2 = (local_50 != 0x2600) + 0x2700;
    }
    else {
      iVar2 = (local_50 != 0x2600) + 0x2702;
    }
  }
  (*DAT_0451e394)(local_20[0],0x2801,iVar2);
  (*DAT_0451e394)(local_20[0],0x2800,local_4c);
  (*DAT_0451e394)(local_20[0],0x2802,local_5c);
  (*DAT_0451e394)(local_20[0],0x2803,local_58);
  (*DAT_0451e394)(local_20[0],0x8072,local_54);
  (*DAT_0451e39c)(local_20[0],0x813a,local_40);
  (*DAT_0451e39c)(local_20[0],0x8501,local_2c);
  if (DAT_0451c98c != '\0') {
    (*DAT_0451e394)(local_20[0],0x84fe,local_44);
  }
  (*DAT_0451e394)(local_20[0],0x884c,-(local_24 & 1) & 0x884e);
  if ((local_24 & 1) != 0) {
    (*DAT_0451e394)(local_20[0],0x884d,0x203);
  }
  (*DAT_0451e394)(local_20[0],0x8a48,~-(uint)((char)local_28 == '\0') + 0x8a4a);
  p_Var6 = *(_Rb_tree_node_base **)(param_1 + 8);
  local_b0 = p_Var4;
  if (p_Var6 == (_Rb_tree_node_base *)0x0) {
LAB_040e4e0d:
    local_60 = 0;
    local_9c = local_5c;
    local_98 = local_58;
    local_94 = local_54;
    local_90 = local_50;
    local_8c = local_4c;
    local_88 = local_48;
    local_84 = local_44;
    local_80 = local_40;
    local_7c = local_3c;
    local_78 = local_38;
    local_74 = local_34;
    local_70 = local_30;
    local_6c = local_2c;
    local_68 = local_28;
    local_64 = local_24;
    if (*(int *)(param_1 + 0x14) != 0) {
      local_b0 = *(_Rb_tree_node_base **)(param_1 + 0x10);
      iVar2 = memcmp(local_b0 + 0x10,&local_9c,0x3c);
      if (iVar2 < 0) {
LAB_040e4eb5:
        FUN_040e46b0(local_b0,&local_9c);
        local_b0 = local_a0;
        goto LAB_040e4d52;
      }
    }
LAB_040e4eec:
    FUN_040e47d0();
    local_b0 = local_ac;
  }
  else {
    do {
      iVar2 = memcmp(p_Var6 + 0x10,&local_5c,0x3c);
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      }
      else {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 8);
        local_b0 = p_Var6;
      }
      p_Var6 = p_Var3;
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    if (p_Var4 == local_b0) goto LAB_040e4e0d;
    p_Var6 = local_b0 + 0x10;
    iVar2 = memcmp(&local_5c,p_Var6,0x3c);
    if (-1 < iVar2) goto LAB_040e4d52;
    local_60 = 0;
    local_9c = local_5c;
    local_98 = local_58;
    local_94 = local_54;
    local_90 = local_50;
    local_8c = local_4c;
    local_88 = local_48;
    local_84 = local_44;
    local_80 = local_40;
    local_7c = local_3c;
    local_78 = local_38;
    local_74 = local_34;
    local_70 = local_30;
    local_6c = local_2c;
    local_68 = local_28;
    local_64 = local_24;
    iVar2 = memcmp(&local_9c,p_Var6,0x3c);
    if (-1 < iVar2) {
      iVar2 = memcmp(p_Var6,&local_9c,0x3c);
      if (-1 < iVar2) goto LAB_040e4d52;
      if (local_b0 == *(_Rb_tree_node_base **)(param_1 + 0x10)) {
        FUN_040e46b0(local_b0,&local_9c);
        local_b0 = local_a0;
        goto LAB_040e4d52;
      }
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(local_b0);
      iVar2 = memcmp(&local_9c,p_Var6 + 0x10,0x3c);
      if (-1 < iVar2) goto LAB_040e4eec;
      if (*(int *)(local_b0 + 0xc) != 0) goto LAB_040e4d38;
      goto LAB_040e4eb5;
    }
    if (local_b0 != *(_Rb_tree_node_base **)(param_1 + 0xc)) {
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(local_b0);
      iVar2 = memcmp(p_Var6 + 0x10,&local_9c,0x3c);
      if (iVar2 < 0) {
        if (*(int *)(p_Var6 + 0xc) != 0) {
          p_Var6 = local_b0;
        }
LAB_040e4d38:
        FUN_040e46b0(p_Var6,&local_9c);
        local_b0 = local_a0;
        goto LAB_040e4d52;
      }
      goto LAB_040e4eec;
    }
    FUN_040e46b0(local_b0,&local_9c);
    local_b0 = local_a0;
  }
LAB_040e4d52:
  *(int *)(local_b0 + 0x4c) = local_20[0];
  iVar2 = local_20[0];
LAB_040e4a21:
  if (iVar2 == 0) {
    FUN_0400a810("sampler",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/samplercache.cpp"
                 ,0x45,"GLuint SamplerCache::GetSamplerForState(eON_OpenGLSamplerState*, UINT)");
  }
  return iVar2;
}

