// Recovered source: eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DTexture9Imp::GetLevelDesc @0x040b0fe0 ---
/* source: direct3dtexture9imp */

undefined4 direct3dtexture9imp_040b0fe0(int param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  undefined1 local_44 [4];
  undefined4 uStack_40;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  int *local_20;
  
  ppiVar3 = &local_3c;
  local_20 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_3c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    uStack_40 = 0x40b100d;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x224) == 2) {
    if (iVar2 != (iVar2 / 6) * 6) {
      local_30 = "virtual HRESULT Direct3DTexture9Imp::GetLevelDesc(UINT, D3DSURFACE_DESC*)";
      local_34 = 0x73;
      local_38 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
      ;
      local_3c = (int *)0x42f9110;
                    /* try { // try from 040b10a8 to 040b10ac has its CatchHandler @ 040b10da */
      uStack_40 = 0x40b10ad;
      FUN_0400a810();
      iVar2 = *(int *)(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x224) != 2) goto LAB_040b101c;
    }
    iVar4 = 6;
  }
  else {
LAB_040b101c:
    iVar4 = 1;
  }
  if (param_2 < (uint)(iVar2 / iVar4)) {
    local_3c = *(int **)(param_1 + 0x3c + param_2 * 4);
    local_38 = param_3;
                    /* try { // try from 040b1042 to 040b1044 has its CatchHandler @ 040b10da */
    uStack_40 = 0x40b1045;
    uVar1 = (**(code **)(*local_3c + 0x30))();
    ppiVar3 = (int **)local_44;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x40b105e;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- Direct3DTexture9Imp::GetSurfaceLevel @0x040b10f0 ---
/* source: direct3dtexture9imp */

undefined4 Direct3DTexture9Imp__GetSurfaceLevel(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 local_40;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  int *local_20;
  
  ppiVar3 = &local_3c;
  local_20 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_3c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    local_40 = 0x40b1117;
    direct3ddevice9imp_040803c0();
  }
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x224) == 2) {
    if (iVar1 != (iVar1 / 6) * 6) {
      local_30 = "virtual HRESULT Direct3DTexture9Imp::GetSurfaceLevel(UINT, IDirect3DSurface9**)";
      local_34 = 0x86;
      local_38 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
      ;
      local_3c = (int *)0x42f9110;
                    /* try { // try from 040b11b8 to 040b11bc has its CatchHandler @ 040b11ea */
      local_40 = 0x40b11bd;
      FUN_0400a810();
      iVar1 = *(int *)(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x224) != 2) goto LAB_040b1126;
    }
    iVar4 = 6;
  }
  else {
LAB_040b1126:
    iVar4 = 1;
  }
  if (param_2 < (uint)(iVar1 / iVar4)) {
    *param_3 = *(undefined4 *)(param_1 + 0xc + (param_2 + 0xc) * 4);
    local_3c = *(int **)(param_1 + 0xc + (param_2 + 0xc) * 4);
                    /* try { // try from 040b1151 to 040b1153 has its CatchHandler @ 040b11ea */
    local_40 = 0x40b1154;
    (**(code **)(*local_3c + 4))();
    ppiVar3 = (int **)&local_40;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x40b116d;
    direct3ddevice9imp_04080490();
  }
  return uVar2;
}

// --- Direct3DTexture9Imp::Initialize @0x040b0b90 ---
/* source: direct3dtexture9imp */

undefined4
direct3dtexture9imp_040b0b90
          (int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  
  *(undefined4 *)(param_1 + 0x224) = 1;
  *(uint *)(param_1 + 0x20c) = param_6;
  *(undefined4 *)(param_1 + 0x210) = param_7;
  direct3dbasetexture9imp_0406d770(param_1,param_2,param_8);
  if ((param_6 & 0x400) == 0) {
    uVar5 = 1;
    uVar2 = param_3;
    if (param_3 <= param_4) {
      uVar2 = param_4;
    }
    while (uVar2 >> 1 != 0) {
      uVar5 = uVar5 + 1;
      uVar2 = uVar2 >> 1;
    }
    if (uVar5 < param_5) {
      *(uint *)(param_1 + 0x228) = uVar5;
    }
    else {
      if (param_5 != 0) {
        uVar5 = param_5;
      }
      *(uint *)(param_1 + 0x228) = uVar5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = param_3;
  local_20 = param_4;
  FUN_0406df10(param_1 + 0x28c,&local_2c);
  *(uint *)(param_1 + 0x22c) = param_3;
  *(uint *)(param_1 + 0x230) = param_4;
  *(undefined4 *)(param_1 + 0x234) = 1;
  *(undefined4 *)(param_1 + 0x238) = 0;
  uVar3 = D3D9_FormatToPixelSize(*(undefined4 *)(param_1 + 0x210));
  if (*(int *)(param_1 + 0x228) != 0) {
    local_34 = 0;
    local_30 = param_3;
    do {
      puVar6 = operator_new(0xdc);
      *puVar6 = &PTR_FUN_042efbe8;
                    /* try { // try from 040b0d13 to 040b0d17 has its CatchHandler @ 040b0e04 */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar6 + 1,puVar6);
      FUN_040ad8f0(puVar6 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   local_30,param_4,param_7,param_6,param_8,local_34,0xde1);
      iVar4 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar4) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
                     ,0x4d,
                     "virtual bool Direct3DTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar4 = *(int *)(param_1 + 0x1bc);
      }
      *(undefined4 **)(param_1 + 0x3c + iVar4 * 4) = puVar6;
      iVar1 = *(int *)(param_1 + 0x238);
      *(int *)(param_1 + 0x1bc) = iVar4 + 1;
      iVar4 = FUN_0406dec0(uVar3,local_30,param_4,*(undefined1 *)(param_1 + 0x220));
      *(int *)(param_1 + 0x238) = iVar1 + iVar4;
      uVar5 = local_30 >> 1;
      bVar7 = 1 < local_30;
      local_30 = 1;
      if (bVar7) {
        local_30 = uVar5;
      }
      uVar5 = param_4 >> 1;
      bVar7 = 1 < param_4;
      param_4 = 1;
      if (bVar7) {
        param_4 = uVar5;
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(uint *)(param_1 + 0x228));
  }
  FUN_0406d840(param_1);
  return 1;
}

// --- Direct3DTexture9Imp::LockRect @0x040b1200 ---
/* source: direct3dtexture9imp */

undefined4
direct3dtexture9imp_040b1200
          (int param_1,uint param_2,char *param_3,undefined4 param_4,char *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  undefined1 local_4c [12];
  undefined4 uStack_40;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  int *local_20;
  
  ppiVar3 = &local_3c;
  local_20 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_3c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    uStack_40 = 0x40b1227;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x224) == 2) {
    if (iVar2 != (iVar2 / 6) * 6) {
      local_30 = 
      "virtual HRESULT Direct3DTexture9Imp::LockRect(UINT, D3DLOCKED_RECT*, const RECT*, DWORD)";
      local_34 = 0xa0;
      local_38 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
      ;
      local_3c = (int *)0x42f9110;
                    /* try { // try from 040b12c8 to 040b12cc has its CatchHandler @ 040b12fa */
      uStack_40 = 0x40b12cd;
      FUN_0400a810();
      iVar2 = *(int *)(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x224) != 2) goto LAB_040b1236;
    }
    iVar4 = 6;
  }
  else {
LAB_040b1236:
    iVar4 = 1;
  }
  if (param_2 < (uint)(iVar2 / iVar4)) {
    local_3c = *(int **)(param_1 + 0x3c + param_2 * 4);
    local_30 = param_5;
    local_34 = param_4;
    local_38 = param_3;
                    /* try { // try from 040b126a to 040b126c has its CatchHandler @ 040b12fa */
    uStack_40 = 0x40b126d;
    uVar1 = (**(code **)(*local_3c + 0x34))();
    ppiVar3 = (int **)local_4c;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x40b1286;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- Direct3DTexture9Imp::Release @0x040b0ec0 ---
/* source: direct3dtexture9imp */

int direct3dtexture9imp_040b0ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(param_1 + 0x288);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if (*(int *)(param_1 + 0x38) != 0x1ceb00da) {
      FUN_0400a810("mDeleted == 0x1CEB00DA",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
                   ,0xe1,"virtual ULONG Direct3DTexture9Imp::Release()");
    }
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x38) = 0xd15ea5e;
      if (*(int *)(param_1 + 0x1c) == 0) {
        piVar1 = *(int **)(param_1 + 0xc);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x5c))(piVar1);
          return 0;
        }
      }
      else {
        direct3ddevice9imp_0409a7c0
                  (*(int *)(param_1 + 0x1c) + 0x40,1,*(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  return iVar2 + -1;
}

// --- Direct3DTexture9Imp::UnlockRect @0x040b1310 ---
/* source: direct3dtexture9imp */

undefined4 direct3dtexture9imp_040b1310(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 local_40;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  int *local_20;
  
  ppiVar3 = &local_3c;
  local_20 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_3c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    local_40 = 0x40b133d;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x224) == 2) {
    if (iVar2 != (iVar2 / 6) * 6) {
      local_30 = "virtual HRESULT Direct3DTexture9Imp::UnlockRect(UINT)";
      local_34 = 0xb5;
      local_38 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dtexture9imp.cpp"
      ;
      local_3c = (int *)0x42f9110;
                    /* try { // try from 040b13d8 to 040b13dc has its CatchHandler @ 040b140a */
      local_40 = 0x40b13dd;
      FUN_0400a810();
      iVar2 = *(int *)(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x224) != 2) goto LAB_040b134c;
    }
    iVar4 = 6;
  }
  else {
LAB_040b134c:
    iVar4 = 1;
  }
  if (param_2 < (uint)(iVar2 / iVar4)) {
    local_3c = *(int **)(param_1 + 0x3c + param_2 * 4);
                    /* try { // try from 040b136b to 040b136d has its CatchHandler @ 040b140a */
    local_40 = 0x40b136e;
    uVar1 = (**(code **)(*local_3c + 0x38))();
    ppiVar3 = (int **)&local_40;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x40b1387;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

