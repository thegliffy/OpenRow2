// Recovered source: eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DCubeTexture9Imp::AddDirtyRect @0x0406f120 ---
/* source: direct3dcubetexture9imp */

undefined4 Direct3DCubeTexture9Imp__AddDirtyRect(int param_1,uint param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (5 < param_2) {
                    /* try { // try from 0406f16a to 0406f187 has its CatchHandler @ 0406f1a5 */
    FUN_0400a810("(DWORD) FaceType < 6",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                 ,0xc4,
                 "virtual HRESULT Direct3DCubeTexture9Imp::AddDirtyRect(D3DCUBEMAP_FACES, const RECT*)"
                );
  }
  FUN_0406df80(param_1 + 0x290 + param_2 * 0x1c,param_3);
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return 0;
}

// --- Direct3DCubeTexture9Imp::GetCubeMapSurface @0x0406ef30 ---
/* source: direct3dcubetexture9imp */

undefined4
Direct3DCubeTexture9Imp__GetCubeMapSurface(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
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
    local_40 = 0x406ef5a;
    direct3ddevice9imp_040803c0();
  }
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != (iVar1 / 6) * 6) {
    local_30 = 
    "virtual HRESULT Direct3DCubeTexture9Imp::GetCubeMapSurface(D3DCUBEMAP_FACES, UINT, IDirect3DSurface9**)"
    ;
    local_34 = 0x84;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
    ;
    local_3c = (int *)0x42efa18;
                    /* try { // try from 0406efef to 0406eff3 has its CatchHandler @ 0406f007 */
    local_40 = 0x406eff4;
    FUN_0400a810();
    iVar1 = *(int *)(param_1 + 0x1bc);
  }
  if ((param_3 < (uint)(iVar1 / 6)) && (param_2 < 6)) {
    local_3c = *(int **)(param_1 + 0xc + (param_2 + 0xc + param_3 * 6) * 4);
    *param_4 = local_3c;
                    /* try { // try from 0406efa5 to 0406efa7 has its CatchHandler @ 0406f007 */
    local_40 = 0x406efa8;
    (**(code **)(*local_3c + 4))();
    ppiVar3 = (int **)&local_40;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x406efc1;
    direct3ddevice9imp_04080490();
  }
  return uVar2;
}

// --- Direct3DCubeTexture9Imp::GetLevelDesc @0x0406ee50 ---
/* source: direct3dcubetexture9imp */

undefined4 direct3dcubetexture9imp_0406ee50(int param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined1 local_34 [4];
  undefined4 uStack_30;
  int *local_2c;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  int *local_10;
  
  ppiVar3 = &local_2c;
  local_10 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_2c = (int *)(*(int *)(param_1 + 0x1c) + 0x40);
    uStack_30 = 0x406ee76;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (iVar2 != (iVar2 / 6) * 6) {
    local_20 = "virtual HRESULT Direct3DCubeTexture9Imp::GetLevelDesc(UINT, D3DSURFACE_DESC*)";
    local_24 = 0x6f;
    local_28 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
    ;
    local_2c = (int *)0x42efa18;
                    /* try { // try from 0406eeff to 0406ef03 has its CatchHandler @ 0406ef17 */
    uStack_30 = 0x406ef04;
    FUN_0400a810();
    iVar2 = *(int *)(param_1 + 0x1bc);
  }
  if (param_2 < (uint)(iVar2 / 6)) {
    local_2c = *(int **)(param_1 + 0x3c + param_2 * 0x18);
    local_28 = param_3;
                    /* try { // try from 0406eeba to 0406eebc has its CatchHandler @ 0406ef17 */
    uStack_30 = 0x406eebd;
    uVar1 = (**(code **)(*local_2c + 0x30))();
    ppiVar3 = (int **)local_34;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_10 != 0) {
    *ppiVar3 = (int *)(*local_10 + 0x40);
    ppiVar3[-1] = (int *)0x406eed6;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- Direct3DCubeTexture9Imp::Initialize @0x0406e540 ---
/* source: direct3dcubetexture9imp */

undefined4
direct3dcubetexture9imp_0406e540
          (int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,undefined4 param_6,
          undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  
  *(undefined4 *)(param_1 + 0x224) = 2;
  *(uint *)(param_1 + 0x20c) = param_5;
  *(undefined4 *)(param_1 + 0x210) = param_6;
  direct3dbasetexture9imp_0406d770(param_1,param_2,param_7);
  if ((param_5 & 0x400) == 0) {
    uVar6 = 1;
    uVar1 = param_3;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((param_4 <= uVar6) && (param_4 != 0)) {
      uVar6 = param_4;
    }
    *(uint *)(param_1 + 0x228) = uVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = param_3;
  local_20 = param_3;
  FUN_0406df10(param_1 + 0x290,&local_2c);
  FUN_0406df10(param_1 + 0x2ac,&local_2c);
  FUN_0406df10(param_1 + 0x2c8,&local_2c);
  FUN_0406df10(param_1 + 0x2e4,&local_2c);
  FUN_0406df10(param_1 + 0x300,&local_2c);
  FUN_0406df10(param_1 + 0x31c,&local_2c);
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(uint *)(param_1 + 0x230) = param_3;
  *(uint *)(param_1 + 0x22c) = param_3;
  *(undefined4 *)(param_1 + 0x234) = 1;
  *(undefined4 *)(param_1 + 0x238) = 0;
  uVar2 = D3D9_FormatToPixelSize(*(undefined4 *)(param_1 + 0x210));
  local_34 = 0;
  if (*(int *)(param_1 + 0x228) == 0) {
    iVar3 = *(int *)(param_1 + 0x28c);
  }
  else {
    do {
      iVar3 = *(int *)(param_1 + 0x238);
      iVar4 = FUN_0406dec0(uVar2,param_3,param_3,*(undefined1 *)(param_1 + 0x220));
      *(int *)(param_1 + 0x238) = iVar3 + iVar4;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406ea6d to 0406ea71 has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x8515);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (puVar5[0x33] == 0) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar3;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406e6ea to 0406e6ee has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x8516);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      iVar4 = puVar5[0x33];
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar3;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406e78d to 0406e791 has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x8517);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      iVar4 = puVar5[0x33];
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar3;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406e830 to 0406e834 has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x8518);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (puVar5[0x33] == 0) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar3;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406e8d3 to 0406e8d7 has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x8519);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      iVar4 = puVar5[0x33];
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + iVar3;
      puVar5 = operator_new(0xdc);
      *puVar5 = &PTR_FUN_042efbe8;
                    /* try { // try from 0406e976 to 0406e97a has its CatchHandler @ 0406ec4a */
      Direct3DSurface9Imp__Direct3DSurface9Imp(puVar5 + 1,puVar5);
      FUN_040ad8f0(puVar5 + 1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),param_3
                   ,param_3,param_6,param_5,param_7,local_34,0x851a);
      iVar3 = *(int *)(param_1 + 0x1bc);
      if (0x5f < iVar3) {
        FUN_0400a810("mD3DSurfacesCount < (6*16)",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
                     ,0x55,
                     "virtual bool Direct3DCubeTexture9Imp::Initialize(IDirect3DDevice9*, UINT, UINT, DWORD, D3DFORMAT, D3DPOOL)"
                    );
        iVar3 = *(int *)(param_1 + 0x1bc);
      }
      iVar4 = puVar5[0x33];
      *(undefined4 **)(param_1 + 0x3c + iVar3 * 4) = puVar5;
      *(int *)(param_1 + 0x1bc) = iVar3 + 1;
      iVar3 = puVar5[0x30];
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      uVar6 = param_3 >> 1;
      iVar3 = iVar3 + *(int *)(param_1 + 0x28c);
      bVar7 = 1 < param_3;
      param_3 = 1;
      if (bVar7) {
        param_3 = uVar6;
      }
      local_34 = local_34 + 1;
      *(int *)(param_1 + 0x28c) = iVar3;
    } while (local_34 < *(uint *)(param_1 + 0x228));
  }
  DAT_04468c18 = DAT_04468c18 + iVar3;
  DAT_04468c14 = DAT_04468c14 + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) * 6;
  FUN_0406d840(param_1);
  return 1;
}

// --- Direct3DCubeTexture9Imp::LockRect @0x0406f020 ---
/* source: direct3dcubetexture9imp */

undefined4
direct3dcubetexture9imp_0406f020
          (int param_1,int param_2,uint param_3,char *param_4,undefined4 param_5,char *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
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
    uStack_40 = 0x406f04a;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (iVar2 != (iVar2 / 6) * 6) {
    local_30 = 
    "virtual HRESULT Direct3DCubeTexture9Imp::LockRect(D3DCUBEMAP_FACES, UINT, D3DLOCKED_RECT*, const RECT*, DWORD)"
    ;
    local_34 = 0x9c;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
    ;
    local_3c = (int *)0x42efa18;
                    /* try { // try from 0406f0ef to 0406f0f3 has its CatchHandler @ 0406f107 */
    uStack_40 = 0x406f0f4;
    FUN_0400a810();
    iVar2 = *(int *)(param_1 + 0x1bc);
  }
  if ((param_3 < (uint)(iVar2 / 6)) && (param_2 < 6)) {
    local_3c = *(int **)(param_1 + 0xc + (param_2 + 0xc + param_3 * 6) * 4);
    local_30 = param_6;
    local_34 = param_5;
    local_38 = param_4;
                    /* try { // try from 0406f0a9 to 0406f0ab has its CatchHandler @ 0406f107 */
    uStack_40 = 0x406f0ac;
    uVar1 = (**(code **)(*local_3c + 0x34))();
    ppiVar3 = (int **)local_4c;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x406f0c5;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

// --- Direct3DCubeTexture9Imp::UnlockRect @0x0406ed60 ---
/* source: direct3dcubetexture9imp */

undefined4 direct3dcubetexture9imp_0406ed60(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
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
    local_40 = 0x406ed8a;
    direct3ddevice9imp_040803c0();
  }
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (iVar2 != (iVar2 / 6) * 6) {
    local_30 = "virtual HRESULT Direct3DCubeTexture9Imp::UnlockRect(D3DCUBEMAP_FACES, UINT)";
    local_34 = 0xb0;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dcubetexture9imp.cpp"
    ;
    local_3c = (int *)0x42efa18;
                    /* try { // try from 0406ee1f to 0406ee23 has its CatchHandler @ 0406ee37 */
    local_40 = 0x406ee24;
    FUN_0400a810();
    iVar2 = *(int *)(param_1 + 0x1bc);
  }
  if ((param_3 < (uint)(iVar2 / 6)) && (param_2 < 6)) {
    local_3c = *(int **)(param_1 + 0xc + (param_2 + 0xc + param_3 * 6) * 4);
                    /* try { // try from 0406edd0 to 0406edd2 has its CatchHandler @ 0406ee37 */
    local_40 = 0x406edd3;
    uVar1 = (**(code **)(*local_3c + 0x38))();
    ppiVar3 = (int **)&local_40;
  }
  else {
    uVar1 = 0x8876086c;
  }
  if (*local_20 != 0) {
    *ppiVar3 = (int *)(*local_20 + 0x40);
    ppiVar3[-1] = (int *)0x406edec;
    direct3ddevice9imp_04080490();
  }
  return uVar1;
}

