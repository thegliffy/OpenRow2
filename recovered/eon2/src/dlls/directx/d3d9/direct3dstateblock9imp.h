// Recovered source: eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DDevice9Imp::CreateStateBlock @0x0407a460 ---
/* source: direct3dstateblock9imp */

undefined4 d3d9device_CreateStateBlock(int *param_1,int param_2,int param_3)

{
  _Rb_tree_node_base _Var1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  _Rb_tree_node_base *p_Var8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  size_t *psVar19;
  _Rb_tree_node_base *p_Var20;
  int *piVar21;
  bool bVar22;
  byte bVar23;
  size_t asStackY_1d0 [81];
  int *local_60;
  int *local_58;
  int aiStack_44 [8];
  int local_24;
  undefined1 local_20 [16];
  
  bVar23 = 0;
  psVar19 = (size_t *)&stack0xffffff74;
  if (2 < param_2 - 1U) {
    return 0x8876086c;
  }
  local_24 = param_1[3];
  asStackY_1d0[0x50] = 0x407a48f;
  direct3ddevice9imp_040704e0();
  iVar4 = param_1[0x1d7b];
  param_1[0x1d7b] = 0;
                    /* try { // try from 0407a4aa to 0407ade5 has its CatchHandler @ 0407ef2b */
  asStackY_1d0[0x50] = 0x407a4b0;
  (**(code **)(*param_1 + 0xf8))();
  iVar14 = DAT_042f7eec;
  iVar17 = param_1[0x1d7b];
  iVar18 = iVar17 + 4;
  *(int *)(iVar17 + 0x598) = param_1[0x11e];
  iVar16 = param_1[0x132];
  *(uint *)(iVar17 + 0x554) = *(uint *)(iVar17 + 0x554) | 0x20000200;
  *(int *)(iVar17 + 0x5e8) = iVar16;
  *(int *)(iVar17 + 0x604) = param_1[0x139];
  *(int *)(iVar17 + 0x608) = param_1[0x13a];
  iVar16 = param_1[0x13b];
  *(uint *)(iVar17 + 0x558) = *(uint *)(iVar17 + 0x558) | 0x70;
  *(int *)(iVar17 + 0x60c) = iVar16;
  if (iVar14 == -1) {
    iVar16 = param_1[0x397];
    asStackY_1d0[0x50] = 0x407dfda;
    FUN_0400a810();
    *(uint *)(iVar17 + 3000) = *(uint *)(iVar17 + 3000) | 0x400;
    *(int *)(iVar17 + 0xbd4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar14 = DAT_042f7f20;
    iVar16 = param_1[0x398];
    if (DAT_042f7f20 == -1) {
      asStackY_1d0[0x50] = 0x407e654;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 3000) = *(uint *)(iVar17 + 3000) | 0x800000;
    *(int *)(iVar17 + 0xbd8 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3a9];
    asStackY_1d0[0x50] = 0x407e05a;
    FUN_0400a810();
    *(int *)(iVar17 + 0xc20) = iVar16;
    *(uint *)(iVar17 + 0xbbc) = *(uint *)(iVar17 + 0xbbc) | 0x400;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3aa];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e62b;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbbc) = *(uint *)(iVar17 + 0xbbc) | 0x800000;
    *(int *)(iVar17 + 0xc24 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3bb];
    asStackY_1d0[0x50] = 0x407e0d1;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbc0) = *(uint *)(iVar17 + 0xbc0) | 0x400;
    *(int *)(iVar17 + 0xc6c) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3bc];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e602;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc0) = *(uint *)(iVar17 + 0xbc0) | 0x800000;
    *(int *)(iVar17 + 0xc70 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3cd];
    asStackY_1d0[0x50] = 0x407e148;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbc4) = *(uint *)(iVar17 + 0xbc4) | 0x400;
    *(int *)(iVar17 + 0xcb8) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3ce];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e5d9;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc4) = *(uint *)(iVar17 + 0xbc4) | 0x800000;
    *(int *)(iVar17 + 0xcbc + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3df];
    asStackY_1d0[0x50] = 0x407e1c2;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbc8) = *(uint *)(iVar17 + 0xbc8) | 0x400;
    *(int *)(iVar17 + 0xd04) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3e0];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e5b0;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc8) = *(uint *)(iVar17 + 0xbc8) | 0x800000;
    *(int *)(iVar17 + 0xd08 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3f1];
    asStackY_1d0[0x50] = 0x407e23c;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbcc) = *(uint *)(iVar17 + 0xbcc) | 0x400;
    *(int *)(iVar17 + 0xd50) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x3f2];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e587;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbcc) = *(uint *)(iVar17 + 0xbcc) | 0x800000;
    *(int *)(iVar17 + 0xd54 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x403];
    asStackY_1d0[0x50] = 0x407e2b6;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbd0) = *(uint *)(iVar17 + 0xbd0) | 0x400;
    *(int *)(iVar17 + 0xd9c) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x404];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e55e;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbd0) = *(uint *)(iVar17 + 0xbd0) | 0x800000;
    *(int *)(iVar17 + 0xda0 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x415];
    asStackY_1d0[0x50] = 0x407e330;
    FUN_0400a810();
    *(uint *)(iVar17 + 0xbd4) = *(uint *)(iVar17 + 0xbd4) | 0x400;
    *(int *)(iVar17 + 0xde8) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar16 = param_1[0x416];
    if (iVar14 == -1) {
      asStackY_1d0[0x50] = 0x407e67d;
      FUN_0400a810();
    }
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbd4) = *(uint *)(iVar17 + 0xbd4) | 0x800000;
    *(int *)(iVar17 + 0xdec + iVar14 * 4) = iVar16;
  }
  else {
    iVar16 = param_1[0x397];
    *(uint *)(iVar17 + 3000) = *(uint *)(iVar17 + 3000) | 0x400;
    *(int *)(iVar17 + 0xbd8 + iVar14 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    iVar6 = DAT_042f7f20;
    iVar16 = param_1[0x398];
    if (DAT_042f7f20 == -1) {
      asStackY_1d0[0x50] = 0x407e4c3;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 3000) = *(uint *)(iVar17 + 3000) | 0x800000;
    *(int *)(iVar17 + 0xbd8 + iVar6 * 4) = iVar16;
    iVar16 = param_1[0x3a9];
    iVar5 = param_1[0x3aa];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbbc) = *(uint *)(iVar17 + 0xbbc) | 0x400;
    *(int *)(iVar17 + 0xc24 + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e3cd;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbbc) = *(uint *)(iVar17 + 0xbbc) | 0x800000;
    *(int *)(iVar17 + 0xc24 + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x3bb];
    iVar5 = param_1[0x3bc];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbc0) = *(uint *)(iVar17 + 0xbc0) | 0x400;
    *(int *)(iVar17 + 0xc70 + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e3f6;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc0) = *(uint *)(iVar17 + 0xbc0) | 0x800000;
    *(int *)(iVar17 + 0xc70 + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x3cd];
    iVar5 = param_1[0x3ce];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbc4) = *(uint *)(iVar17 + 0xbc4) | 0x400;
    *(int *)(iVar17 + 0xcbc + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e471;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc4) = *(uint *)(iVar17 + 0xbc4) | 0x800000;
    *(int *)(iVar17 + 0xcbc + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x3df];
    iVar5 = param_1[0x3e0];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbc8) = *(uint *)(iVar17 + 0xbc8) | 0x400;
    *(int *)(iVar17 + 0xd08 + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e49a;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbc8) = *(uint *)(iVar17 + 0xbc8) | 0x800000;
    *(int *)(iVar17 + 0xd08 + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x3f1];
    iVar5 = param_1[0x3f2];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbcc) = *(uint *)(iVar17 + 0xbcc) | 0x400;
    *(int *)(iVar17 + 0xd54 + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e41f;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbcc) = *(uint *)(iVar17 + 0xbcc) | 0x800000;
    *(int *)(iVar17 + 0xd54 + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x403];
    iVar5 = param_1[0x404];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbd0) = *(uint *)(iVar17 + 0xbd0) | 0x400;
    *(int *)(iVar17 + 0xda0 + iVar14 * 4) = iVar16;
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e448;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbd0) = *(uint *)(iVar17 + 0xbd0) | 0x800000;
    *(int *)(iVar17 + 0xda0 + iVar6 * 4) = iVar5;
    iVar16 = param_1[0x415];
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
    *(uint *)(iVar17 + 0xbd4) = *(uint *)(iVar17 + 0xbd4) | 0x400;
    *(int *)(iVar17 + 0xdec + iVar14 * 4) = iVar16;
    iVar16 = param_1[0x416];
    if (iVar6 == -1) {
      asStackY_1d0[0x50] = 0x407e4ec;
      FUN_0400a810();
    }
    *(uint *)(iVar17 + 0xbd4) = *(uint *)(iVar17 + 0xbd4) | 0x800000;
    *(int *)(iVar17 + 0xdec + iVar6 * 4) = iVar16;
    *(undefined4 *)(iVar17 + 0xbb4) = 1;
  }
  if ((param_2 != 3) && (param_2 != 1)) goto LAB_0407adc7;
  iVar16 = param_1[299];
  *(int *)(iVar17 + 0x7b0) = param_1[0x1a4];
  *(int *)(iVar17 + 0x5cc) = iVar16;
  *(int *)(iVar17 + 0x5fc) = param_1[0x137];
  *(int *)(iVar17 + 0x600) = param_1[0x138];
  iVar16 = param_1[0x145];
  *(uint *)(iVar17 + 0x558) = *(uint *)(iVar17 + 0x558) | 0x1000c;
  iVar14 = param_1[0x1a0];
  *(int *)(iVar17 + 0x634) = iVar16;
  *(int *)(iVar17 + 0x7a0) = iVar14;
  *(int *)(iVar17 + 0x7a8) = param_1[0x1a2];
  *(int *)(iVar17 + 0x7a4) = param_1[0x1a1];
  *(int *)(iVar17 + 0x794) = param_1[0x19d];
  *(int *)(iVar17 + 0x798) = param_1[0x19e];
  *(int *)(iVar17 + 2000) = param_1[0x1ac];
  *(int *)(iVar17 + 0x7d4) = param_1[0x1ad];
  *(int *)(iVar17 + 0x7dc) = param_1[0x1af];
  *(int *)(iVar17 + 0x7e0) = param_1[0x1b0];
  iVar16 = param_1[0x1b5];
  *(int *)(iVar17 + 0x7e4) = param_1[0x1b1];
  *(int *)(iVar17 + 0x7e8) = param_1[0x1b2];
  *(int *)(iVar17 + 0x7ec) = param_1[0x1b3];
  iVar14 = param_1[0x1b4];
  *(int *)(iVar17 + 0x7f4) = iVar16;
  iVar16 = param_1[0x1b6];
  *(int *)(iVar17 + 0x7f0) = iVar14;
  *(int *)(iVar17 + 0x7f8) = iVar16;
  *(int *)(iVar17 + 0x7fc) = param_1[0x1b7];
  *(int *)(iVar17 + 0x800) = param_1[0x1b8];
  *(int *)(iVar17 + 0x80c) = param_1[0x1bb];
  *(int *)(iVar17 + 0x810) = param_1[0x1bc];
  *(int *)(iVar17 + 0x81c) = param_1[0x1bf];
  *(int *)(iVar17 + 0x824) = param_1[0x1c1];
  *(int *)(iVar17 + 0x828) = param_1[0x1c2];
  *(int *)(iVar17 + 0x83c) = param_1[0x1c7];
  *(int *)(iVar17 + 0x840) = param_1[0x1c8];
  *(int *)(iVar17 + 0x844) = param_1[0x1c9];
  *(int *)(iVar17 + 0x848) = param_1[0x1ca];
  *(int *)(iVar17 + 0x84c) = param_1[0x1cb];
  *(int *)(iVar17 + 0x850) = param_1[0x1cc];
  iVar16 = param_1[0x1cd];
  *(uint *)(iVar17 + 0x568) = *(uint *)(iVar17 + 0x568) | 0x1fc34cf;
  iVar14 = param_1[0x131];
  *(uint *)(iVar17 + 0x554) = *(uint *)(iVar17 + 0x554) | 0x10400000;
  iVar6 = param_1[0x1a3];
  *(int *)(iVar17 + 0x854) = iVar16;
  *(int *)(iVar17 + 0x5e4) = iVar14;
  *(int *)(iVar17 + 0x7ac) = iVar6;
  *(int *)(iVar17 + 0x7c4) = param_1[0x1a9];
  *(int *)(iVar17 + 0x7c0) = param_1[0x1a8];
  *(int *)(iVar17 + 0x7b8) = param_1[0x1a6];
  iVar16 = param_1[0x1a7];
  *(uint *)(iVar17 + 0x564) = *(uint *)(iVar17 + 0x564) | 0xfd9efb00;
  *(int *)(iVar17 + 0x7bc) = iVar16;
  iVar16 = param_1[0x237];
  *(ushort *)(iVar17 + 0x11c) = *(ushort *)(iVar17 + 0x11c) | 0x1000;
  *(int *)(iVar17 + 0x174) = iVar16;
  iVar16 = param_1[0x244];
  *(ushort *)(iVar17 + 0x11e) = *(ushort *)(iVar17 + 0x11e) | 0x1000;
  *(int *)(iVar17 + 0x1a8) = iVar16;
  iVar16 = param_1[0x251];
  *(ushort *)(iVar17 + 0x120) = *(ushort *)(iVar17 + 0x120) | 0x1000;
  *(int *)(iVar17 + 0x1dc) = iVar16;
  iVar16 = param_1[0x25e];
  *(ushort *)(iVar17 + 0x122) = *(ushort *)(iVar17 + 0x122) | 0x1000;
  *(int *)(iVar17 + 0x210) = iVar16;
  iVar16 = param_1[0x26b];
  *(ushort *)(iVar17 + 0x124) = *(ushort *)(iVar17 + 0x124) | 0x1000;
  *(int *)(iVar17 + 0x244) = iVar16;
  iVar16 = param_1[0x278];
  *(ushort *)(iVar17 + 0x126) = *(ushort *)(iVar17 + 0x126) | 0x1000;
  *(int *)(iVar17 + 0x278) = iVar16;
  iVar16 = param_1[0x285];
  *(ushort *)(iVar17 + 0x128) = *(ushort *)(iVar17 + 0x128) | 0x1000;
  *(int *)(iVar17 + 0x2ac) = iVar16;
  iVar16 = param_1[0x292];
  *(ushort *)(iVar17 + 0x12a) = *(ushort *)(iVar17 + 0x12a) | 0x1000;
  *(int *)(iVar17 + 0x2e0) = iVar16;
  iVar16 = param_1[0x29f];
  *(ushort *)(iVar17 + 300) = *(ushort *)(iVar17 + 300) | 0x1000;
  *(int *)(iVar17 + 0x314) = iVar16;
  iVar16 = param_1[0x2ac];
  *(ushort *)(iVar17 + 0x12e) = *(ushort *)(iVar17 + 0x12e) | 0x1000;
  *(int *)(iVar17 + 0x348) = iVar16;
  iVar16 = param_1[0x2b9];
  *(ushort *)(iVar17 + 0x130) = *(ushort *)(iVar17 + 0x130) | 0x1000;
  *(int *)(iVar17 + 0x37c) = iVar16;
  iVar16 = param_1[0x2c6];
  *(ushort *)(iVar17 + 0x132) = *(ushort *)(iVar17 + 0x132) | 0x1000;
  *(int *)(iVar17 + 0x3b0) = iVar16;
  iVar16 = param_1[0x2d3];
  *(ushort *)(iVar17 + 0x136) = *(ushort *)(iVar17 + 0x136) | 0x1000;
  *(ushort *)(iVar17 + 0x138) = *(ushort *)(iVar17 + 0x138) | 0x1000;
  *(ushort *)(iVar17 + 0x13a) = *(ushort *)(iVar17 + 0x13a) | 0x1000;
  *(ushort *)(iVar17 + 0x134) = *(ushort *)(iVar17 + 0x134) | 0x1000;
  *(int *)(iVar17 + 0x3e4) = iVar16;
  iVar16 = param_1[0x307];
  *(ushort *)(iVar17 + 0x136) = *(ushort *)(iVar17 + 0x136) | 0x1000;
  *(int *)(iVar17 + 0x418) = iVar16;
  iVar16 = param_1[0x314];
  *(ushort *)(iVar17 + 0x138) = *(ushort *)(iVar17 + 0x138) | 0x1000;
  *(int *)(iVar17 + 0x44c) = iVar16;
  iVar16 = param_1[0x321];
  *(ushort *)(iVar17 + 0x13a) = *(ushort *)(iVar17 + 0x13a) | 0x1000;
  *(int *)(iVar17 + 0x480) = iVar16;
  iVar16 = param_1[0x32e];
  *(ushort *)(iVar17 + 0x13c) = *(ushort *)(iVar17 + 0x13c) | 0x1000;
  *(undefined4 *)(iVar17 + 0x118) = 1;
  *(int *)(iVar17 + 0x4b4) = iVar16;
  iVar16 = param_1[0x228];
  *(undefined4 *)(iVar17 + 0xdc) = 1;
  p_Var8 = (_Rb_tree_node_base *)param_1[0x1d72];
  *(int *)(iVar17 + 0xe0) = iVar16;
  if ((_Rb_tree_node_base *)(param_1 + 0x1d70) != p_Var8) {
    local_58 = (int *)0x0;
LAB_0407abc0:
    p_Var20 = p_Var8 + 0x18;
    iVar16 = *(int *)(p_Var8 + 0x10);
    piVar12 = *(int **)(iVar17 + 0x1c);
    if (*(int **)(iVar17 + 0x1c) != (int *)0x0) {
LAB_0407abed:
      piVar21 = piVar12;
      if (iVar16 != *piVar21) goto LAB_0407abe0;
      piVar12 = piVar21 + 1;
      uVar11 = 0x68;
      bVar22 = ((uint)piVar12 & 1) != 0;
      if (bVar22) {
        _Var1 = *p_Var20;
        piVar12 = (int *)((int)piVar21 + 5);
        p_Var20 = p_Var8 + 0x19;
        *(_Rb_tree_node_base *)(piVar21 + 1) = _Var1;
        uVar11 = 0x67;
      }
      if (((uint)piVar12 & 2) != 0) {
        uVar3 = *(undefined2 *)p_Var20;
        uVar11 = uVar11 - 2;
        p_Var20 = p_Var20 + 2;
        *(undefined2 *)piVar12 = uVar3;
        piVar12 = (int *)((int)piVar12 + 2);
      }
      iVar16 = 0;
      for (uVar15 = uVar11 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *piVar12 = *(int *)p_Var20;
        p_Var20 = p_Var20 + (uint)bVar23 * -8 + 4;
        piVar12 = piVar12 + (uint)bVar23 * -2 + 1;
      }
      if ((uVar11 & 2) != 0) {
        *(undefined2 *)piVar12 = *(undefined2 *)p_Var20;
        iVar16 = 2;
      }
      if (bVar22) {
        *(_Rb_tree_node_base *)((int)piVar12 + iVar16) = p_Var20[iVar16];
      }
      goto LAB_0407ac38;
    }
    asStackY_1d0[0x50] = 0x407dc1b;
    piVar12 = malloc(0x70);
    *(int **)(iVar17 + 0x1c) = piVar12;
    *piVar12 = iVar16;
    piVar12 = piVar12 + 1;
    for (iVar16 = 0x1a; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar12 = *(int *)p_Var20;
      p_Var20 = p_Var20 + (uint)bVar23 * -8 + 4;
      piVar12 = piVar12 + (uint)bVar23 * -2 + 1;
    }
    *(undefined4 *)(*(int *)(iVar17 + 0x1c) + 0x6c) = 0;
LAB_0407ac38:
    iVar16 = *(int *)(p_Var8 + 0x14);
    goto joined_r0x0407ae47;
  }
  goto LAB_0407aca8;
LAB_0407abe0:
  piVar12 = (int *)piVar21[0x1b];
  if ((int *)piVar21[0x1b] == (int *)0x0) goto LAB_0407ae10;
  goto LAB_0407abed;
LAB_0407ae10:
  asStackY_1d0[0x50] = 0x407ae1f;
  piVar10 = malloc(0x70);
  *piVar10 = iVar16;
  piVar21[0x1b] = (int)piVar10;
  piVar12 = piVar10 + 1;
  for (iVar16 = 0x1a; iVar16 != 0; iVar16 = iVar16 + -1) {
    *piVar12 = *(int *)p_Var20;
    p_Var20 = p_Var20 + (uint)bVar23 * -8 + 4;
    piVar12 = piVar12 + (uint)bVar23 * -2 + 1;
  }
  iVar16 = *(int *)(p_Var8 + 0x14);
  piVar10[0x1b] = 0;
joined_r0x0407ae47:
  if (iVar16 == -1) {
    iVar16 = *(int *)(p_Var8 + 0x10);
    piVar12 = *(int **)(iVar17 + 0x18);
    if (*(int **)(iVar17 + 0x18) == (int *)0x0) {
      asStackY_1d0[0x50] = 0x407e68e;
      piVar12 = malloc(0xc);
      *(int **)(iVar17 + 0x18) = piVar12;
      *piVar12 = iVar16;
      piVar12[1] = 0;
      piVar12[2] = 0;
    }
    else {
      do {
        piVar21 = piVar12;
        if (iVar16 == *piVar21) {
          piVar21[1] = 0;
          goto LAB_0407ac52;
        }
        piVar12 = (int *)piVar21[2];
      } while ((int *)piVar21[2] != (int *)0x0);
      asStackY_1d0[0x50] = 0x407aeb0;
      piVar12 = malloc(0xc);
      piVar21[2] = (int)piVar12;
      *piVar12 = iVar16;
      piVar12[1] = 0;
      piVar12[2] = 0;
    }
  }
  else {
    aiStack_44[(int)local_58] = *(int *)(p_Var8 + 0x10);
    local_58 = (int *)((int)local_58 + 1);
  }
LAB_0407ac52:
  asStackY_1d0[0x50] = 0x407ac5a;
  p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var8);
  if ((_Rb_tree_node_base *)(param_1 + 0x1d70) == p_Var8) goto code_r0x0407ac65;
  goto LAB_0407abc0;
code_r0x0407ac65:
  if (local_58 != (int *)0x0) {
    iVar16 = 0;
    do {
      iVar14 = aiStack_44[iVar16];
      piVar12 = *(int **)(iVar17 + 0x18);
      if (*(int **)(iVar17 + 0x18) == (int *)0x0) {
        asStackY_1d0[0x50] = 0x407e38e;
        piVar12 = malloc(0xc);
        *(int **)(iVar17 + 0x18) = piVar12;
        *piVar12 = iVar14;
        piVar12[1] = 1;
        piVar12[2] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (iVar14 == *piVar21) {
            piVar21[1] = 1;
            goto LAB_0407aca0;
          }
          piVar12 = (int *)piVar21[2];
        } while ((int *)piVar21[2] != (int *)0x0);
        asStackY_1d0[0x50] = 0x407ae8c;
        piVar12 = malloc(0xc);
        piVar21[2] = (int)piVar12;
        *piVar12 = iVar14;
        piVar12[1] = 1;
        piVar12[2] = 0;
      }
LAB_0407aca0:
      iVar16 = iVar16 + 1;
    } while ((int *)iVar16 != local_58);
  }
LAB_0407aca8:
  piVar12 = (int *)param_1[0x22a];
  psVar19 = (size_t *)&stack0xffffff74;
  if (piVar12 != (int *)0x0) {
    asStackY_1d0[0x50] = 0x407acbd;
    (**(code **)(*piVar12 + 4))();
    psVar19 = asStackY_1d0 + 0x50;
  }
  if ((*(int *)(iVar17 + 0x984) != 0) &&
     (piVar21 = *(int **)(iVar17 + 0x988), piVar21 != (int *)0x0)) {
    iVar16 = *piVar21;
    *psVar19 = (size_t)piVar21;
    pcVar7 = *(code **)(iVar16 + 8);
    psVar19[-1] = 0x407acdf;
    (*pcVar7)();
    psVar19 = psVar19 + -1;
  }
  *(int **)(iVar17 + 0x988) = piVar12;
  *(undefined4 *)(iVar17 + 0x984) = 1;
  *(undefined4 *)(iVar17 + 0xe38) = 1;
  if ((param_1[0x1d67] & 0xfffffffU) != 0) {
    *psVar19 = (size_t)(param_1 + 0x1917);
    psVar19[-1] = 0x407ad26;
    direct3dstateblock9imp_0406fc70();
  }
  if ((param_1[0x1d68] & 0xfffffffU) != 0) {
    *psVar19 = (size_t)(param_1 + 0x1d17);
    psVar19[-1] = 0x407ad50;
    direct3dstateblock9imp_0406fc70();
  }
  if ((param_1[0x1d69] & 0x3fffffffU) != 0) {
    *psVar19 = (size_t)(param_1 + 0x1d57);
    psVar19[-1] = 0x407ad7a;
    direct3dstateblock9imp_0406fc70();
  }
  piVar12 = (int *)param_1[0x14be];
  if (piVar12 != (int *)0x0) {
    iVar16 = *piVar12;
    *psVar19 = (size_t)piVar12;
    pcVar7 = *(code **)(iVar16 + 4);
    psVar19[-1] = 0x407ad8f;
    (*pcVar7)();
    psVar19 = psVar19 + -1;
  }
  if ((*(int *)(iVar17 + 0x98c) != 0) &&
     (piVar21 = *(int **)(iVar17 + 0x990), piVar21 != (int *)0x0)) {
    iVar16 = *piVar21;
    *psVar19 = (size_t)piVar21;
    pcVar7 = *(code **)(iVar16 + 8);
    psVar19[-1] = 0x407adb1;
    (*pcVar7)();
    psVar19 = psVar19 + -1;
  }
  *(undefined4 *)(iVar17 + 0x98c) = 1;
  *(int **)(iVar17 + 0x990) = piVar12;
LAB_0407adc7:
  if (param_2 - 1U != 2) {
    *(int *)(iVar17 + 0x590) = param_1[0x11c];
    *(int *)(iVar17 + 0x594) = param_1[0x11d];
    *(int *)(iVar17 + 0x5ac) = param_1[0x123];
    *(int *)(iVar17 + 0x5b0) = param_1[0x124];
    *(int *)(iVar17 + 0x5b4) = param_1[0x125];
    *(int *)(iVar17 + 0x5c0) = param_1[0x128];
    *(int *)(iVar17 + 0x5c4) = param_1[0x129];
    *(int *)(iVar17 + 0x5d0) = param_1[300];
    *(int *)(iVar17 + 0x5d4) = param_1[0x12d];
    *(int *)(iVar17 + 0x5d8) = param_1[0x12e];
    *(int *)(iVar17 + 0x5dc) = param_1[0x12f];
    iVar16 = param_1[0x130];
    *(uint *)(iVar17 + 0x554) = *(uint *)(iVar17 + 0x554) | 0xf99c180;
    *(int *)(iVar17 + 0x5e0) = iVar16;
    *(int *)(iVar17 + 0x880) = param_1[0x1d8];
    *(int *)(iVar17 + 0x644) = param_1[0x149];
    *(int *)(iVar17 + 0x648) = param_1[0x14a];
    *(int *)(iVar17 + 0x64c) = param_1[0x14b];
    *(int *)(iVar17 + 0x650) = param_1[0x14c];
    *(int *)(iVar17 + 0x654) = param_1[0x14d];
    *(int *)(iVar17 + 0x658) = param_1[0x14e];
    *(int *)(iVar17 + 0x65c) = param_1[0x14f];
    *(int *)(iVar17 + 0x660) = param_1[0x150];
    iVar16 = param_1[0x151];
    *(uint *)(iVar17 + 0x558) = *(uint *)(iVar17 + 0x558) | 0x1ff00000;
    *(int *)(iVar17 + 0x664) = iVar16;
    *(int *)(iVar17 + 0x774) = param_1[0x195];
    *(int *)(iVar17 + 0x778) = param_1[0x196];
    *(int *)(iVar17 + 0x77c) = param_1[0x197];
    *(int *)(iVar17 + 0x780) = param_1[0x198];
    *(int *)(iVar17 + 0x784) = param_1[0x199];
    *(int *)(iVar17 + 0x788) = param_1[0x19a];
    *(int *)(iVar17 + 0x78c) = param_1[0x19b];
    iVar16 = param_1[0x19c];
    *(uint *)(iVar17 + 0x564) = CONCAT31((int3)((uint)*(undefined4 *)(iVar17 + 0x564) >> 8),0xff);
    *(int *)(iVar17 + 0x790) = iVar16;
    *(int *)(iVar17 + 0x88c) = param_1[0x1db];
    *(int *)(iVar17 + 0x890) = param_1[0x1dc];
    *(int *)(iVar17 + 0x894) = param_1[0x1dd];
    *(int *)(iVar17 + 0x898) = param_1[0x1de];
    *(int *)(iVar17 + 0x89c) = param_1[0x1df];
    *(int *)(iVar17 + 0x8a0) = param_1[0x1e0];
    *(int *)(iVar17 + 0x8a4) = param_1[0x1e1];
    *(int *)(iVar17 + 0x8a8) = param_1[0x1e2];
    *(int *)(iVar17 + 0x814) = param_1[0x1bd];
    *(int *)(iVar17 + 0x820) = param_1[0x1c0];
    *(int *)(iVar17 + 0x82c) = param_1[0x1c3];
    *(int *)(iVar17 + 0x830) = param_1[0x1c4];
    *(int *)(iVar17 + 0x834) = param_1[0x1c5];
    *(int *)(iVar17 + 0x858) = param_1[0x1ce];
    *(int *)(iVar17 + 0x85c) = param_1[0x1cf];
    *(int *)(iVar17 + 0x860) = param_1[0x1d0];
    *(int *)(iVar17 + 0x864) = param_1[0x1d1];
    *(int *)(iVar17 + 0x868) = param_1[0x1d2];
    *(int *)(iVar17 + 0x86c) = param_1[0x1d3];
    iVar16 = param_1[0x1d4];
    *(uint *)(iVar17 + 0x568) = *(uint *)(iVar17 + 0x568) | 0xfe01c900;
    *(int *)(iVar17 + 0x870) = iVar16;
    *(int *)(iVar17 + 0x874) = param_1[0x1d5];
    local_60 = (int *)0x0;
    *(int *)(iVar17 + 0x878) = param_1[0x1d6];
    *(int *)(iVar17 + 0x87c) = param_1[0x1d7];
    *(int *)(iVar17 + 0x8ac) = param_1[0x1e3];
    *(int *)(iVar17 + 0x8b0) = param_1[0x1e4];
    *(int *)(iVar17 + 0x8b4) = param_1[0x1e5];
    iVar16 = param_1[0x1e6];
    *(uint *)(iVar17 + 0x56c) = *(uint *)(iVar17 + 0x56c) | 0x3ffcf;
    *(int *)(iVar17 + 0x8b8) = iVar16;
    local_58 = param_1;
    iVar16 = iVar18;
    iVar14 = iVar18;
    piVar12 = param_1;
    do {
      uVar2 = *(ushort *)(iVar16 + 0x118);
      iVar6 = piVar12[0x22b];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 1;
      *(int *)(iVar14 + 0x140) = iVar6;
      iVar6 = piVar12[0x22c];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 3;
      *(int *)(iVar14 + 0x144) = iVar6;
      iVar6 = piVar12[0x22d];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 7;
      *(int *)(iVar14 + 0x148) = iVar6;
      iVar6 = piVar12[0x22e];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0xf;
      *(int *)(iVar14 + 0x14c) = iVar6;
      iVar6 = piVar12[0x22f];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x1f;
      *(int *)(iVar14 + 0x150) = iVar6;
      iVar6 = piVar12[0x230];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x3f;
      *(int *)(iVar14 + 0x154) = iVar6;
      iVar6 = piVar12[0x231];
      *(undefined4 *)(iVar17 + 0x118) = 1;
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x7f;
      *(int *)(iVar14 + 0x158) = iVar6;
      iVar6 = piVar12[0x232];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0xff;
      *(int *)(iVar14 + 0x15c) = iVar6;
      iVar6 = piVar12[0x233];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x1ff;
      *(int *)(iVar14 + 0x160) = iVar6;
      iVar6 = piVar12[0x234];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x3ff;
      *(int *)(iVar14 + 0x164) = iVar6;
      iVar6 = piVar12[0x235];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0x7ff;
      local_60 = (int *)((int)local_60 + 1);
      *(int *)(iVar14 + 0x168) = iVar6;
      iVar6 = piVar12[0x236];
      *(ushort *)(iVar16 + 0x118) = uVar2 | 0xfff;
      piVar12 = piVar12 + 0xd;
      iVar16 = iVar16 + 2;
      *(int *)(iVar14 + 0x16c) = iVar6;
      iVar14 = iVar14 + 0x34;
    } while (local_60 != (int *)0x10);
    uVar2 = *(ushort *)(iVar17 + 0x13c);
    *(int *)(iVar17 + 0x484) = param_1[0x2fb];
    *(int *)(iVar17 + 0x488) = param_1[0x2fc];
    *(int *)(iVar17 + 0x48c) = param_1[0x2fd];
    *(int *)(iVar17 + 0x490) = param_1[0x2fe];
    *(int *)(iVar17 + 0x494) = param_1[0x2ff];
    *(int *)(iVar17 + 0x498) = param_1[0x300];
    iVar16 = param_1[0x301];
    *(ushort *)(iVar17 + 0x13c) = uVar2 | 0x7f;
    *(int *)(iVar17 + 0x49c) = iVar16;
    *(undefined4 *)(iVar17 + 0x118) = 1;
    *(int *)(iVar17 + 0x4a0) = param_1[0x302];
    *(int *)(iVar17 + 0x4a4) = param_1[0x303];
    *(int *)(iVar17 + 0x4a8) = param_1[0x304];
    *(int *)(iVar17 + 0x4ac) = param_1[0x305];
    iVar16 = param_1[0x306];
    *(ushort *)(iVar17 + 0x13c) = uVar2 | 0xfff;
    uVar2 = *(ushort *)(iVar17 + 0x13e);
    *(int *)(iVar17 + 0x4b0) = iVar16;
    *(int *)(iVar17 + 0x4b8) = param_1[0x308];
    *(int *)(iVar17 + 0x4bc) = param_1[0x309];
    *(int *)(iVar17 + 0x4c0) = param_1[0x30a];
    *(int *)(iVar17 + 0x4c4) = param_1[0x30b];
    *(int *)(iVar17 + 0x4c8) = param_1[0x30c];
    *(int *)(iVar17 + 0x4cc) = param_1[0x30d];
    iVar16 = param_1[0x30e];
    *(ushort *)(iVar17 + 0x13e) = uVar2 | 0x7f;
    *(int *)(iVar17 + 0x4d0) = iVar16;
    *(int *)(iVar17 + 0x4d4) = param_1[0x30f];
    *(int *)(iVar17 + 0x4d8) = param_1[0x310];
    *(int *)(iVar17 + 0x4dc) = param_1[0x311];
    *(int *)(iVar17 + 0x4e0) = param_1[0x312];
    iVar16 = param_1[0x313];
    *(ushort *)(iVar17 + 0x13e) = uVar2 | 0xfff;
    *(int *)(iVar17 + 0x4e4) = iVar16;
    uVar2 = *(ushort *)(iVar17 + 0x140);
    *(int *)(iVar17 + 0x4ec) = param_1[0x315];
    *(int *)(iVar17 + 0x4f0) = param_1[0x316];
    *(int *)(iVar17 + 0x4f4) = param_1[0x317];
    *(int *)(iVar17 + 0x4f8) = param_1[0x318];
    *(int *)(iVar17 + 0x4fc) = param_1[0x319];
    *(int *)(iVar17 + 0x500) = param_1[0x31a];
    iVar16 = param_1[0x31b];
    *(ushort *)(iVar17 + 0x140) = uVar2 | 0x7f;
    *(int *)(iVar17 + 0x504) = iVar16;
    *(int *)(iVar17 + 0x508) = param_1[0x31c];
    *(int *)(iVar17 + 0x50c) = param_1[0x31d];
    *(int *)(iVar17 + 0x510) = param_1[0x31e];
    *(int *)(iVar17 + 0x514) = param_1[799];
    iVar16 = param_1[800];
    *(ushort *)(iVar17 + 0x140) = uVar2 | 0xfff;
    uVar2 = *(ushort *)(iVar17 + 0x142);
    *(int *)(iVar17 + 0x518) = iVar16;
    *(int *)(iVar17 + 0x520) = param_1[0x322];
    *(int *)(iVar17 + 0x524) = param_1[0x323];
    *(int *)(iVar17 + 0x528) = param_1[0x324];
    *(int *)(iVar17 + 0x52c) = param_1[0x325];
    *(int *)(iVar17 + 0x530) = param_1[0x326];
    *(int *)(iVar17 + 0x534) = param_1[0x327];
    iVar16 = param_1[0x328];
    *(ushort *)(iVar17 + 0x142) = uVar2 | 0x7f;
    *(int *)(iVar17 + 0x538) = iVar16;
    *(int *)(iVar17 + 0x53c) = param_1[0x329];
    *(int *)(iVar17 + 0x540) = param_1[0x32a];
    *(int *)(iVar17 + 0x544) = param_1[0x32b];
    *(int *)(iVar17 + 0x548) = param_1[0x32c];
    iVar16 = param_1[0x32d];
    *(ushort *)(iVar17 + 0x142) = uVar2 | 0xfff;
    *(int *)(iVar17 + 0x54c) = iVar16;
    local_60 = (int *)(iVar17 + 0xbd8 + DAT_042f7ec4 * 4);
    iVar16 = 0;
    do {
      iVar14 = local_58[0x388];
      if (DAT_042f7ec4 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
                    /* try { // try from 0407bcc7 to 0407e67c has its CatchHandler @ 0407ef2b */
        psVar19[-1] = 0x407bccc;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 1;
      *local_60 = iVar14;
      iVar14 = local_58[0x389];
      if (DAT_042f7f28 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bf0a;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7f28;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x2000000;
      *(int *)(iVar17 + 8 + (iVar16 * 0x13 + 0x2f4 + iVar6) * 4) = iVar14;
      iVar14 = local_58[0x38a];
      if (DAT_042f7ec8 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bee1;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7ec8;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 2;
      *(int *)(iVar17 + 8 + (iVar16 * 0x13 + 0x2f4 + iVar6) * 4) = iVar14;
      iVar14 = local_58[0x38b];
      if (DAT_042f7ecc == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407beb8;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7ecc;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 4;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar14 = local_58[0x38c];
      if (DAT_042f7ed0 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407be8f;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7ed0;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 8;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar14 = local_58[0x38d];
      if (DAT_042f7f2c == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407be66;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7f2c;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x4000000;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar14 = local_58[0x38e];
      if (DAT_042f7ed4 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407be3d;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7ed4;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x10;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7ed8;
      iVar14 = local_58[0x38f];
      if (DAT_042f7ed8 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407be14;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x20;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7edc;
      iVar14 = param_1[iVar16 * 0x12 + 0x391];
      if (DAT_042f7edc == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bdeb;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x40;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7ee0;
      iVar14 = param_1[iVar16 * 0x12 + 0x392];
      if (DAT_042f7ee0 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bdc2;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x80;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7ee4;
      iVar14 = param_1[iVar16 * 0x12 + 0x393];
      if (DAT_042f7ee4 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bd99;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x100;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7ee8;
      iVar14 = param_1[iVar16 * 0x12 + 0x394];
      if (DAT_042f7ee8 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bd70;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x200;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar6 = DAT_042f7f18;
      iVar14 = param_1[iVar16 * 0x12 + 0x395];
      if (DAT_042f7f18 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bd47;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x200000;
      bVar22 = DAT_042f7f1c == -1;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar14 = param_1[iVar16 * 0x12 + 0x396];
      if (bVar22) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bd1e;
        FUN_0400a810();
      }
      iVar6 = DAT_042f7f1c;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x400000;
      *(int *)(iVar17 + 8 + (iVar6 + 0x2f4 + iVar16 * 0x13) * 4) = iVar14;
      iVar14 = local_58[0x390];
      if (DAT_042f7f30 == -1) {
        psVar19[3] = (size_t)
                     "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
        ;
        psVar19[2] = 0x19b;
        psVar19[1] = (size_t)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *psVar19 = (size_t)"index != (DWORD) -1";
        psVar19[-1] = 0x407bcf5;
        FUN_0400a810();
      }
      iVar5 = iVar16 * 0x13;
      iVar16 = iVar16 + 1;
      local_58 = local_58 + 0x12;
      local_60 = local_60 + 0x13;
      iVar6 = DAT_042f7f30 + 0x2f4;
      *(undefined4 *)(iVar17 + 0xbb4) = 1;
      *(uint *)(iVar18 + 0xbb4) = *(uint *)(iVar18 + 0xbb4) | 0x8000000;
      iVar18 = iVar18 + 4;
      *(int *)(iVar17 + 8 + (iVar6 + iVar5) * 4) = iVar14;
    } while (iVar16 != 8);
    piVar12 = (int *)param_1[0x229];
    if (piVar12 != (int *)0x0) {
      iVar16 = *piVar12;
      *psVar19 = (size_t)piVar12;
      pcVar7 = *(code **)(iVar16 + 4);
      psVar19[-1] = 0x407bf24;
      (*pcVar7)();
      psVar19 = psVar19 + -1;
    }
    if ((*(int *)(iVar17 + 0x97c) != 0) &&
       (piVar21 = *(int **)(iVar17 + 0x980), piVar21 != (int *)0x0)) {
      iVar16 = *piVar21;
      *psVar19 = (size_t)piVar21;
      pcVar7 = *(code **)(iVar16 + 8);
      psVar19[-1] = 0x407bf46;
      (*pcVar7)();
      psVar19 = psVar19 + -1;
    }
    *(int **)(iVar17 + 0x980) = piVar12;
    *(undefined4 *)(iVar17 + 0x97c) = 1;
    *(undefined4 *)(iVar17 + 0xe38) = 1;
    if ((param_1[0x1d6a] & 0xfffffffU) != 0) {
      *psVar19 = (size_t)(param_1 + 0x14c7);
      psVar19[-1] = 0x407bf8d;
      direct3dstateblock9imp_0406fc70();
    }
    if ((param_1[0x1d6b] & 0xfffffffU) != 0) {
      *psVar19 = (size_t)(param_1 + 0x18c7);
      psVar19[-1] = 0x407bfb7;
      direct3dstateblock9imp_0406fc70();
    }
    if ((param_1[0x1d6c] & 0x3fffffffU) != 0) {
      *psVar19 = (size_t)(param_1 + 0x1907);
      psVar19[-1] = 0x407bfe1;
      direct3dstateblock9imp_0406fc70();
    }
    if (param_2 == 1) {
      piVar12 = (int *)param_1[0x373];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c000;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb14) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb64), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c022;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb64) = piVar12;
      *(undefined4 *)(iVar17 + 0xb14) = 1;
      piVar12 = (int *)param_1[0x374];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c04d;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb18) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb68), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c06f;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb68) = piVar12;
      *(undefined4 *)(iVar17 + 0xb18) = 1;
      piVar12 = (int *)param_1[0x375];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c09a;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb1c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb6c), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c0bc;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb6c) = piVar12;
      *(undefined4 *)(iVar17 + 0xb1c) = 1;
      piVar12 = (int *)param_1[0x376];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c0e7;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb20) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb70), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c109;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb70) = piVar12;
      *(undefined4 *)(iVar17 + 0xb20) = 1;
      piVar12 = (int *)param_1[0x377];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c134;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb24) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb74), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c156;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb74) = piVar12;
      *(undefined4 *)(iVar17 + 0xb24) = 1;
      piVar12 = (int *)param_1[0x378];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c181;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb28) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb78), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c1a3;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb78) = piVar12;
      *(undefined4 *)(iVar17 + 0xb28) = 1;
      piVar12 = (int *)param_1[0x379];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c1ce;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb2c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb7c), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c1f0;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb7c) = piVar12;
      *(undefined4 *)(iVar17 + 0xb2c) = 1;
      piVar12 = (int *)param_1[0x37a];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c21b;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb30) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb80), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c23d;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb80) = piVar12;
      *(undefined4 *)(iVar17 + 0xb30) = 1;
      piVar12 = (int *)param_1[0x37b];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c268;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb34) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb84), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c28a;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb84) = piVar12;
      *(undefined4 *)(iVar17 + 0xb34) = 1;
      piVar12 = (int *)param_1[0x37c];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c2b5;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb38) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb88), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c2d7;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb88) = piVar12;
      *(undefined4 *)(iVar17 + 0xb38) = 1;
      piVar12 = (int *)param_1[0x37d];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c302;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb3c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb8c), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c324;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb8c) = piVar12;
      *(undefined4 *)(iVar17 + 0xb3c) = 1;
      piVar12 = (int *)param_1[0x37e];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c34f;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb40) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb90), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c371;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb90) = piVar12;
      *(undefined4 *)(iVar17 + 0xb40) = 1;
      piVar12 = (int *)param_1[0x37f];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c39c;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb44) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb94), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c3be;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb94) = piVar12;
      *(undefined4 *)(iVar17 + 0xb44) = 1;
      piVar12 = (int *)param_1[0x380];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c3e9;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb48) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb98), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c40b;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb98) = piVar12;
      *(undefined4 *)(iVar17 + 0xb48) = 1;
      piVar12 = (int *)param_1[0x381];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c436;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb4c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb9c), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c458;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb9c) = piVar12;
      *(undefined4 *)(iVar17 + 0xb4c) = 1;
      piVar12 = (int *)param_1[0x382];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c483;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb50) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xba0), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c4a5;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xba0) = piVar12;
      *(undefined4 *)(iVar17 + 0xb50) = 1;
      piVar12 = (int *)param_1[899];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c4d0;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb54) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xba4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c4f2;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xba4) = piVar12;
      *(undefined4 *)(iVar17 + 0xb54) = 1;
      piVar12 = (int *)param_1[900];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c51d;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb58) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xba8), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c53f;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xba8) = piVar12;
      *(undefined4 *)(iVar17 + 0xb58) = 1;
      piVar12 = (int *)param_1[0x385];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c56a;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb5c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xbac), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c58c;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xbac) = piVar12;
      *(undefined4 *)(iVar17 + 0xb5c) = 1;
      piVar12 = (int *)param_1[0x386];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c5b7;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0xb60) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xbb0), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c5d9;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xbb0) = piVar12;
      *(undefined4 *)(iVar17 + 0xb60) = 1;
      iVar16 = param_1[0x215];
      *(undefined4 *)(iVar17 + 0x84) = 1;
      piVar12 = (int *)param_1[0x333];
      *(int *)(iVar17 + 0x88) = iVar16;
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c61a;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x994) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa14), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c63c;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa14) = piVar12;
      *(undefined4 *)(iVar17 + 0x994) = 1;
      iVar16 = param_1[0x336];
      *(undefined4 *)(iVar17 + 0x9d4) = 1;
      *(int *)(iVar17 + 0xa20) = iVar16;
      piVar12 = (int *)param_1[0x337];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c683;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x998) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa24), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c6a5;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa24) = piVar12;
      *(undefined4 *)(iVar17 + 0x998) = 1;
      iVar16 = param_1[0x33a];
      *(undefined4 *)(iVar17 + 0x9d8) = 1;
      *(int *)(iVar17 + 0xa30) = iVar16;
      piVar12 = (int *)param_1[0x33b];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c6ec;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x99c) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa34), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c70e;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa34) = piVar12;
      *(undefined4 *)(iVar17 + 0x99c) = 1;
      iVar16 = param_1[0x33e];
      *(undefined4 *)(iVar17 + 0x9dc) = 1;
      *(int *)(iVar17 + 0xa40) = iVar16;
      piVar12 = (int *)param_1[0x33f];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c755;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9a0) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa44), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c777;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa44) = piVar12;
      *(undefined4 *)(iVar17 + 0x9a0) = 1;
      iVar16 = param_1[0x342];
      *(undefined4 *)(iVar17 + 0x9e0) = 1;
      *(int *)(iVar17 + 0xa50) = iVar16;
      piVar12 = (int *)param_1[0x343];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c7be;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9a4) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa54), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c7e0;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa54) = piVar12;
      *(undefined4 *)(iVar17 + 0x9a4) = 1;
      iVar16 = param_1[0x346];
      *(undefined4 *)(iVar17 + 0x9e4) = 1;
      *(int *)(iVar17 + 0xa60) = iVar16;
      piVar12 = (int *)param_1[0x347];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c827;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9a8) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa64), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c849;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa64) = piVar12;
      *(undefined4 *)(iVar17 + 0x9a8) = 1;
      iVar16 = param_1[0x34a];
      *(undefined4 *)(iVar17 + 0x9e8) = 1;
      *(int *)(iVar17 + 0xa70) = iVar16;
      piVar12 = (int *)param_1[0x34b];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c890;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9ac) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa74), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c8b2;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa74) = piVar12;
      *(undefined4 *)(iVar17 + 0x9ac) = 1;
      iVar16 = param_1[0x34e];
      *(undefined4 *)(iVar17 + 0x9ec) = 1;
      *(int *)(iVar17 + 0xa80) = iVar16;
      piVar12 = (int *)param_1[0x34f];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c8f9;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9b0) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa84), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c91b;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa84) = piVar12;
      *(undefined4 *)(iVar17 + 0x9b0) = 1;
      iVar16 = param_1[0x352];
      *(undefined4 *)(iVar17 + 0x9f0) = 1;
      *(int *)(iVar17 + 0xa90) = iVar16;
      piVar12 = (int *)param_1[0x353];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c962;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9b4) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xa94), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c984;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xa94) = piVar12;
      *(undefined4 *)(iVar17 + 0x9b4) = 1;
      iVar16 = param_1[0x356];
      *(undefined4 *)(iVar17 + 0x9f4) = 1;
      *(int *)(iVar17 + 0xaa0) = iVar16;
      piVar12 = (int *)param_1[0x357];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407c9cb;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9b8) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xaa4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407c9ed;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xaa4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9b8) = 1;
      iVar16 = param_1[0x35a];
      *(undefined4 *)(iVar17 + 0x9f8) = 1;
      *(int *)(iVar17 + 0xab0) = iVar16;
      piVar12 = (int *)param_1[0x35b];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407ca34;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9bc) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xab4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407ca56;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xab4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9bc) = 1;
      iVar16 = param_1[0x35e];
      *(undefined4 *)(iVar17 + 0x9fc) = 1;
      *(int *)(iVar17 + 0xac0) = iVar16;
      piVar12 = (int *)param_1[0x35f];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407ca9d;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9c0) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xac4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cabf;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xac4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9c0) = 1;
      iVar16 = param_1[0x362];
      *(undefined4 *)(iVar17 + 0xa00) = 1;
      *(int *)(iVar17 + 0xad0) = iVar16;
      piVar12 = (int *)param_1[0x363];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407cb06;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9c4) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xad4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cb28;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xad4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9c4) = 1;
      iVar16 = param_1[0x366];
      *(undefined4 *)(iVar17 + 0xa04) = 1;
      *(int *)(iVar17 + 0xae0) = iVar16;
      piVar12 = (int *)param_1[0x367];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407cb6f;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9c8) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xae4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cb91;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xae4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9c8) = 1;
      iVar16 = param_1[0x36a];
      *(undefined4 *)(iVar17 + 0xa08) = 1;
      *(int *)(iVar17 + 0xaf0) = iVar16;
      piVar12 = (int *)param_1[0x36b];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407cbd8;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9cc) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xaf4), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cbfa;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xaf4) = piVar12;
      *(undefined4 *)(iVar17 + 0x9cc) = 1;
      iVar16 = param_1[0x36e];
      *(undefined4 *)(iVar17 + 0xa0c) = 1;
      *(int *)(iVar17 + 0xb00) = iVar16;
      piVar12 = (int *)param_1[0x36f];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407cc41;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x9d0) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0xb04), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cc63;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0xb04) = piVar12;
      *(undefined4 *)(iVar17 + 0x9d0) = 1;
      iVar16 = param_1[0x372];
      *(undefined4 *)(iVar17 + 0xa10) = 1;
      *(int *)(iVar17 + 0xb10) = iVar16;
      piVar12 = (int *)param_1[0x216];
      if (piVar12 != (int *)0x0) {
        iVar16 = *piVar12;
        *psVar19 = (size_t)piVar12;
        pcVar7 = *(code **)(iVar16 + 4);
        psVar19[-1] = 0x407ccaa;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      if ((*(int *)(iVar17 + 0x974) != 0) &&
         (piVar21 = *(int **)(iVar17 + 0x978), piVar21 != (int *)0x0)) {
        iVar16 = *piVar21;
        *psVar19 = (size_t)piVar21;
        pcVar7 = *(code **)(iVar16 + 8);
        psVar19[-1] = 0x407cccc;
        (*pcVar7)();
        psVar19 = psVar19 + -1;
      }
      *(int **)(iVar17 + 0x978) = piVar12;
      *(undefined4 *)(iVar17 + 0x974) = 1;
      *(undefined4 *)(iVar17 + 0xe4) = 1;
      *(int *)(iVar17 + 0xe8) = param_1[0x14b8];
      *(int *)(iVar17 + 0xec) = param_1[0x14b9];
      *(int *)(iVar17 + 0xf0) = param_1[0x14ba];
      *(int *)(iVar17 + 0xf4) = param_1[0x14bb];
      *(int *)(iVar17 + 0xf8) = param_1[0x14bc];
      iVar16 = param_1[0x14bd];
      *(undefined4 *)(iVar17 + 0x100) = 1;
      *(int *)(iVar17 + 0xfc) = iVar16;
      *(int *)(iVar17 + 0x104) = param_1[0x32f];
      *(int *)(iVar17 + 0x108) = param_1[0x330];
      *(int *)(iVar17 + 0x10c) = param_1[0x331];
      *(int *)(iVar17 + 0x110) = param_1[0x332];
      piVar12 = *(int **)(iVar17 + 0x114);
      if (*(int **)(iVar17 + 0x114) == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407eea1;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 2;
        puVar13[1] = param_1[0x418];
        puVar13[2] = param_1[0x419];
        puVar13[3] = param_1[0x41a];
        puVar13[4] = param_1[0x41b];
        puVar13[5] = param_1[0x41c];
        puVar13[6] = param_1[0x41d];
        puVar13[7] = param_1[0x41e];
        puVar13[8] = param_1[0x41f];
        puVar13[9] = param_1[0x420];
        puVar13[10] = param_1[0x421];
        puVar13[0xb] = param_1[0x422];
        puVar13[0xc] = param_1[0x423];
        puVar13[0xd] = param_1[0x424];
        puVar13[0xe] = param_1[0x425];
        puVar13[0xf] = param_1[0x426];
        puVar13[0x10] = param_1[0x427];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 2) {
            piVar21[1] = param_1[0x418];
            piVar21[2] = param_1[0x419];
            piVar21[3] = param_1[0x41a];
            piVar21[4] = param_1[0x41b];
            piVar21[5] = param_1[0x41c];
            piVar21[6] = param_1[0x41d];
            piVar21[7] = param_1[0x41e];
            piVar21[8] = param_1[0x41f];
            piVar21[9] = param_1[0x420];
            piVar21[10] = param_1[0x421];
            piVar21[0xb] = param_1[0x422];
            piVar21[0xc] = param_1[0x423];
            piVar21[0xd] = param_1[0x424];
            piVar21[0xe] = param_1[0x425];
            piVar21[0xf] = param_1[0x426];
            piVar21[0x10] = param_1[0x427];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407ce23;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407dc4d;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 2;
        puVar13[1] = param_1[0x418];
        puVar13[2] = param_1[0x419];
        puVar13[3] = param_1[0x41a];
        puVar13[4] = param_1[0x41b];
        puVar13[5] = param_1[0x41c];
        puVar13[6] = param_1[0x41d];
        puVar13[7] = param_1[0x41e];
        puVar13[8] = param_1[0x41f];
        puVar13[9] = param_1[0x420];
        puVar13[10] = param_1[0x421];
        puVar13[0xb] = param_1[0x422];
        puVar13[0xc] = param_1[0x423];
        puVar13[0xd] = param_1[0x424];
        puVar13[0xe] = param_1[0x425];
        puVar13[0xf] = param_1[0x426];
        puVar13[0x10] = param_1[0x427];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407ce23:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e6b5;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x100;
        puVar13[1] = param_1[0x4b8];
        puVar13[2] = param_1[0x4b9];
        puVar13[3] = param_1[0x4ba];
        puVar13[4] = param_1[0x4bb];
        puVar13[5] = param_1[0x4bc];
        puVar13[6] = param_1[0x4bd];
        puVar13[7] = param_1[0x4be];
        puVar13[8] = param_1[0x4bf];
        puVar13[9] = param_1[0x4c0];
        puVar13[10] = param_1[0x4c1];
        puVar13[0xb] = param_1[0x4c2];
        puVar13[0xc] = param_1[0x4c3];
        puVar13[0xd] = param_1[0x4c4];
        puVar13[0xe] = param_1[0x4c5];
        puVar13[0xf] = param_1[0x4c6];
        puVar13[0x10] = param_1[0x4c7];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x100) {
            piVar21[1] = param_1[0x4b8];
            piVar21[2] = param_1[0x4b9];
            piVar21[3] = param_1[0x4ba];
            piVar21[4] = param_1[0x4bb];
            piVar21[5] = param_1[0x4bc];
            piVar21[6] = param_1[0x4bd];
            piVar21[7] = param_1[0x4be];
            piVar21[8] = param_1[0x4bf];
            piVar21[9] = param_1[0x4c0];
            piVar21[10] = param_1[0x4c1];
            piVar21[0xb] = param_1[0x4c2];
            piVar21[0xc] = param_1[0x4c3];
            piVar21[0xd] = param_1[0x4c4];
            piVar21[0xe] = param_1[0x4c5];
            piVar21[0xf] = param_1[0x4c6];
            piVar21[0x10] = param_1[0x4c7];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407cebe;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407dce0;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x100;
        puVar13[1] = param_1[0x4b8];
        puVar13[2] = param_1[0x4b9];
        puVar13[3] = param_1[0x4ba];
        puVar13[4] = param_1[0x4bb];
        puVar13[5] = param_1[0x4bc];
        puVar13[6] = param_1[0x4bd];
        puVar13[7] = param_1[0x4be];
        puVar13[8] = param_1[0x4bf];
        puVar13[9] = param_1[0x4c0];
        puVar13[10] = param_1[0x4c1];
        puVar13[0xb] = param_1[0x4c2];
        puVar13[0xc] = param_1[0x4c3];
        puVar13[0xd] = param_1[0x4c4];
        puVar13[0xe] = param_1[0x4c5];
        puVar13[0xf] = param_1[0x4c6];
        puVar13[0x10] = param_1[0x4c7];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407cebe:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e751;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x101;
        puVar13[1] = param_1[0x4c8];
        puVar13[2] = param_1[0x4c9];
        puVar13[3] = param_1[0x4ca];
        puVar13[4] = param_1[0x4cb];
        puVar13[5] = param_1[0x4cc];
        puVar13[6] = param_1[0x4cd];
        puVar13[7] = param_1[0x4ce];
        puVar13[8] = param_1[0x4cf];
        puVar13[9] = param_1[0x4d0];
        puVar13[10] = param_1[0x4d1];
        puVar13[0xb] = param_1[0x4d2];
        puVar13[0xc] = param_1[0x4d3];
        puVar13[0xd] = param_1[0x4d4];
        puVar13[0xe] = param_1[0x4d5];
        puVar13[0xf] = param_1[0x4d6];
        puVar13[0x10] = param_1[0x4d7];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x101) {
            piVar21[1] = param_1[0x4c8];
            piVar21[2] = param_1[0x4c9];
            piVar21[3] = param_1[0x4ca];
            piVar21[4] = param_1[0x4cb];
            piVar21[5] = param_1[0x4cc];
            piVar21[6] = param_1[0x4cd];
            piVar21[7] = param_1[0x4ce];
            piVar21[8] = param_1[0x4cf];
            piVar21[9] = param_1[0x4d0];
            piVar21[10] = param_1[0x4d1];
            piVar21[0xb] = param_1[0x4d2];
            piVar21[0xc] = param_1[0x4d3];
            piVar21[0xd] = param_1[0x4d4];
            piVar21[0xe] = param_1[0x4d5];
            piVar21[0xf] = param_1[0x4d6];
            piVar21[0x10] = param_1[0x4d7];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407cf56;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407d783;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x101;
        puVar13[1] = param_1[0x4c8];
        puVar13[2] = param_1[0x4c9];
        puVar13[3] = param_1[0x4ca];
        puVar13[4] = param_1[0x4cb];
        puVar13[5] = param_1[0x4cc];
        puVar13[6] = param_1[0x4cd];
        puVar13[7] = param_1[0x4ce];
        puVar13[8] = param_1[0x4cf];
        puVar13[9] = param_1[0x4d0];
        puVar13[10] = param_1[0x4d1];
        puVar13[0xb] = param_1[0x4d2];
        puVar13[0xc] = param_1[0x4d3];
        puVar13[0xd] = param_1[0x4d4];
        puVar13[0xe] = param_1[0x4d5];
        puVar13[0xf] = param_1[0x4d6];
        puVar13[0x10] = param_1[0x4d7];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407cf56:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e7ed;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x102;
        puVar13[1] = param_1[0x4d8];
        puVar13[2] = param_1[0x4d9];
        puVar13[3] = param_1[0x4da];
        puVar13[4] = param_1[0x4db];
        puVar13[5] = param_1[0x4dc];
        puVar13[6] = param_1[0x4dd];
        puVar13[7] = param_1[0x4de];
        puVar13[8] = param_1[0x4df];
        puVar13[9] = param_1[0x4e0];
        puVar13[10] = param_1[0x4e1];
        puVar13[0xb] = param_1[0x4e2];
        puVar13[0xc] = param_1[0x4e3];
        puVar13[0xd] = param_1[0x4e4];
        puVar13[0xe] = param_1[0x4e5];
        puVar13[0xf] = param_1[0x4e6];
        puVar13[0x10] = param_1[0x4e7];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x102) {
            piVar21[1] = param_1[0x4d8];
            piVar21[2] = param_1[0x4d9];
            piVar21[3] = param_1[0x4da];
            piVar21[4] = param_1[0x4db];
            piVar21[5] = param_1[0x4dc];
            piVar21[6] = param_1[0x4dd];
            piVar21[7] = param_1[0x4de];
            piVar21[8] = param_1[0x4df];
            piVar21[9] = param_1[0x4e0];
            piVar21[10] = param_1[0x4e1];
            piVar21[0xb] = param_1[0x4e2];
            piVar21[0xc] = param_1[0x4e3];
            piVar21[0xd] = param_1[0x4e4];
            piVar21[0xe] = param_1[0x4e5];
            piVar21[0xf] = param_1[0x4e6];
            piVar21[0x10] = param_1[0x4e7];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407cfee;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407d816;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x102;
        puVar13[1] = param_1[0x4d8];
        puVar13[2] = param_1[0x4d9];
        puVar13[3] = param_1[0x4da];
        puVar13[4] = param_1[0x4db];
        puVar13[5] = param_1[0x4dc];
        puVar13[6] = param_1[0x4dd];
        puVar13[7] = param_1[0x4de];
        puVar13[8] = param_1[0x4df];
        puVar13[9] = param_1[0x4e0];
        puVar13[10] = param_1[0x4e1];
        puVar13[0xb] = param_1[0x4e2];
        puVar13[0xc] = param_1[0x4e3];
        puVar13[0xd] = param_1[0x4e4];
        puVar13[0xe] = param_1[0x4e5];
        puVar13[0xf] = param_1[0x4e6];
        puVar13[0x10] = param_1[0x4e7];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407cfee:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e889;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x103;
        puVar13[1] = param_1[0x4e8];
        puVar13[2] = param_1[0x4e9];
        puVar13[3] = param_1[0x4ea];
        puVar13[4] = param_1[0x4eb];
        puVar13[5] = param_1[0x4ec];
        puVar13[6] = param_1[0x4ed];
        puVar13[7] = param_1[0x4ee];
        puVar13[8] = param_1[0x4ef];
        puVar13[9] = param_1[0x4f0];
        puVar13[10] = param_1[0x4f1];
        puVar13[0xb] = param_1[0x4f2];
        puVar13[0xc] = param_1[0x4f3];
        puVar13[0xd] = param_1[0x4f4];
        puVar13[0xe] = param_1[0x4f5];
        puVar13[0xf] = param_1[0x4f6];
        puVar13[0x10] = param_1[0x4f7];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x103) {
            piVar21[1] = param_1[0x4e8];
            piVar21[2] = param_1[0x4e9];
            piVar21[3] = param_1[0x4ea];
            piVar21[4] = param_1[0x4eb];
            piVar21[5] = param_1[0x4ec];
            piVar21[6] = param_1[0x4ed];
            piVar21[7] = param_1[0x4ee];
            piVar21[8] = param_1[0x4ef];
            piVar21[9] = param_1[0x4f0];
            piVar21[10] = param_1[0x4f1];
            piVar21[0xb] = param_1[0x4f2];
            piVar21[0xc] = param_1[0x4f3];
            piVar21[0xd] = param_1[0x4f4];
            piVar21[0xe] = param_1[0x4f5];
            piVar21[0xf] = param_1[0x4f6];
            piVar21[0x10] = param_1[0x4f7];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d086;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407d8a9;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x103;
        puVar13[1] = param_1[0x4e8];
        puVar13[2] = param_1[0x4e9];
        puVar13[3] = param_1[0x4ea];
        puVar13[4] = param_1[0x4eb];
        puVar13[5] = param_1[0x4ec];
        puVar13[6] = param_1[0x4ed];
        puVar13[7] = param_1[0x4ee];
        puVar13[8] = param_1[0x4ef];
        puVar13[9] = param_1[0x4f0];
        puVar13[10] = param_1[0x4f1];
        puVar13[0xb] = param_1[0x4f2];
        puVar13[0xc] = param_1[0x4f3];
        puVar13[0xd] = param_1[0x4f4];
        puVar13[0xe] = param_1[0x4f5];
        puVar13[0xf] = param_1[0x4f6];
        puVar13[0x10] = param_1[0x4f7];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d086:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e925;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 3;
        puVar13[1] = param_1[0x428];
        puVar13[2] = param_1[0x429];
        puVar13[3] = param_1[0x42a];
        puVar13[4] = param_1[0x42b];
        puVar13[5] = param_1[0x42c];
        puVar13[6] = param_1[0x42d];
        puVar13[7] = param_1[0x42e];
        puVar13[8] = param_1[0x42f];
        puVar13[9] = param_1[0x430];
        puVar13[10] = param_1[0x431];
        puVar13[0xb] = param_1[0x432];
        puVar13[0xc] = param_1[0x433];
        puVar13[0xd] = param_1[0x434];
        puVar13[0xe] = param_1[0x435];
        puVar13[0xf] = param_1[0x436];
        puVar13[0x10] = param_1[0x437];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 3) {
            piVar21[1] = param_1[0x428];
            piVar21[2] = param_1[0x429];
            piVar21[3] = param_1[0x42a];
            piVar21[4] = param_1[0x42b];
            piVar21[5] = param_1[0x42c];
            piVar21[6] = param_1[0x42d];
            piVar21[7] = param_1[0x42e];
            piVar21[8] = param_1[0x42f];
            piVar21[9] = param_1[0x430];
            piVar21[10] = param_1[0x431];
            piVar21[0xb] = param_1[0x432];
            piVar21[0xc] = param_1[0x433];
            piVar21[0xd] = param_1[0x434];
            piVar21[0xe] = param_1[0x435];
            piVar21[0xf] = param_1[0x436];
            piVar21[0x10] = param_1[0x437];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d11b;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407d93c;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 3;
        puVar13[1] = param_1[0x428];
        puVar13[2] = param_1[0x429];
        puVar13[3] = param_1[0x42a];
        puVar13[4] = param_1[0x42b];
        puVar13[5] = param_1[0x42c];
        puVar13[6] = param_1[0x42d];
        puVar13[7] = param_1[0x42e];
        puVar13[8] = param_1[0x42f];
        puVar13[9] = param_1[0x430];
        puVar13[10] = param_1[0x431];
        puVar13[0xb] = param_1[0x432];
        puVar13[0xc] = param_1[0x433];
        puVar13[0xd] = param_1[0x434];
        puVar13[0xe] = param_1[0x435];
        puVar13[0xf] = param_1[0x436];
        puVar13[0x10] = param_1[0x437];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d11b:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407e9c1;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x10;
        puVar13[1] = param_1[0x438];
        puVar13[2] = param_1[0x439];
        puVar13[3] = param_1[0x43a];
        puVar13[4] = param_1[0x43b];
        puVar13[5] = param_1[0x43c];
        puVar13[6] = param_1[0x43d];
        puVar13[7] = param_1[0x43e];
        puVar13[8] = param_1[0x43f];
        puVar13[9] = param_1[0x440];
        puVar13[10] = param_1[0x441];
        puVar13[0xb] = param_1[0x442];
        puVar13[0xc] = param_1[0x443];
        puVar13[0xd] = param_1[0x444];
        puVar13[0xe] = param_1[0x445];
        puVar13[0xf] = param_1[0x446];
        puVar13[0x10] = param_1[0x447];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x10) {
            piVar21[1] = param_1[0x438];
            piVar21[2] = param_1[0x439];
            piVar21[3] = param_1[0x43a];
            piVar21[4] = param_1[0x43b];
            piVar21[5] = param_1[0x43c];
            piVar21[6] = param_1[0x43d];
            piVar21[7] = param_1[0x43e];
            piVar21[8] = param_1[0x43f];
            piVar21[9] = param_1[0x440];
            piVar21[10] = param_1[0x441];
            piVar21[0xb] = param_1[0x442];
            piVar21[0xc] = param_1[0x443];
            piVar21[0xd] = param_1[0x444];
            piVar21[0xe] = param_1[0x445];
            piVar21[0xf] = param_1[0x446];
            piVar21[0x10] = param_1[0x447];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d1b3;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407d9cf;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x10;
        puVar13[1] = param_1[0x438];
        puVar13[2] = param_1[0x439];
        puVar13[3] = param_1[0x43a];
        puVar13[4] = param_1[0x43b];
        puVar13[5] = param_1[0x43c];
        puVar13[6] = param_1[0x43d];
        puVar13[7] = param_1[0x43e];
        puVar13[8] = param_1[0x43f];
        puVar13[9] = param_1[0x440];
        puVar13[10] = param_1[0x441];
        puVar13[0xb] = param_1[0x442];
        puVar13[0xc] = param_1[0x443];
        puVar13[0xd] = param_1[0x444];
        puVar13[0xe] = param_1[0x445];
        puVar13[0xf] = param_1[0x446];
        puVar13[0x10] = param_1[0x447];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d1b3:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407ea5d;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x11;
        puVar13[1] = param_1[0x448];
        puVar13[2] = param_1[0x449];
        puVar13[3] = param_1[0x44a];
        puVar13[4] = param_1[1099];
        puVar13[5] = param_1[0x44c];
        puVar13[6] = param_1[0x44d];
        puVar13[7] = param_1[0x44e];
        puVar13[8] = param_1[0x44f];
        puVar13[9] = param_1[0x450];
        puVar13[10] = param_1[0x451];
        puVar13[0xb] = param_1[0x452];
        puVar13[0xc] = param_1[0x453];
        puVar13[0xd] = param_1[0x454];
        puVar13[0xe] = param_1[0x455];
        puVar13[0xf] = param_1[0x456];
        puVar13[0x10] = param_1[0x457];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x11) {
            piVar21[1] = param_1[0x448];
            piVar21[2] = param_1[0x449];
            piVar21[3] = param_1[0x44a];
            piVar21[4] = param_1[1099];
            piVar21[5] = param_1[0x44c];
            piVar21[6] = param_1[0x44d];
            piVar21[7] = param_1[0x44e];
            piVar21[8] = param_1[0x44f];
            piVar21[9] = param_1[0x450];
            piVar21[10] = param_1[0x451];
            piVar21[0xb] = param_1[0x452];
            piVar21[0xc] = param_1[0x453];
            piVar21[0xd] = param_1[0x454];
            piVar21[0xe] = param_1[0x455];
            piVar21[0xf] = param_1[0x456];
            piVar21[0x10] = param_1[0x457];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d24b;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407da62;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x11;
        puVar13[1] = param_1[0x448];
        puVar13[2] = param_1[0x449];
        puVar13[3] = param_1[0x44a];
        puVar13[4] = param_1[1099];
        puVar13[5] = param_1[0x44c];
        puVar13[6] = param_1[0x44d];
        puVar13[7] = param_1[0x44e];
        puVar13[8] = param_1[0x44f];
        puVar13[9] = param_1[0x450];
        puVar13[10] = param_1[0x451];
        puVar13[0xb] = param_1[0x452];
        puVar13[0xc] = param_1[0x453];
        puVar13[0xd] = param_1[0x454];
        puVar13[0xe] = param_1[0x455];
        puVar13[0xf] = param_1[0x456];
        puVar13[0x10] = param_1[0x457];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d24b:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407eaf9;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x12;
        puVar13[1] = param_1[0x458];
        puVar13[2] = param_1[0x459];
        puVar13[3] = param_1[0x45a];
        puVar13[4] = param_1[0x45b];
        puVar13[5] = param_1[0x45c];
        puVar13[6] = param_1[0x45d];
        puVar13[7] = param_1[0x45e];
        puVar13[8] = param_1[0x45f];
        puVar13[9] = param_1[0x460];
        puVar13[10] = param_1[0x461];
        puVar13[0xb] = param_1[0x462];
        puVar13[0xc] = param_1[0x463];
        puVar13[0xd] = param_1[0x464];
        puVar13[0xe] = param_1[0x465];
        puVar13[0xf] = param_1[0x466];
        puVar13[0x10] = param_1[0x467];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x12) {
            piVar21[1] = param_1[0x458];
            piVar21[2] = param_1[0x459];
            piVar21[3] = param_1[0x45a];
            piVar21[4] = param_1[0x45b];
            piVar21[5] = param_1[0x45c];
            piVar21[6] = param_1[0x45d];
            piVar21[7] = param_1[0x45e];
            piVar21[8] = param_1[0x45f];
            piVar21[9] = param_1[0x460];
            piVar21[10] = param_1[0x461];
            piVar21[0xb] = param_1[0x462];
            piVar21[0xc] = param_1[0x463];
            piVar21[0xd] = param_1[0x464];
            piVar21[0xe] = param_1[0x465];
            piVar21[0xf] = param_1[0x466];
            piVar21[0x10] = param_1[0x467];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d2e3;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407daf5;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x12;
        puVar13[1] = param_1[0x458];
        puVar13[2] = param_1[0x459];
        puVar13[3] = param_1[0x45a];
        puVar13[4] = param_1[0x45b];
        puVar13[5] = param_1[0x45c];
        puVar13[6] = param_1[0x45d];
        puVar13[7] = param_1[0x45e];
        puVar13[8] = param_1[0x45f];
        puVar13[9] = param_1[0x460];
        puVar13[10] = param_1[0x461];
        puVar13[0xb] = param_1[0x462];
        puVar13[0xc] = param_1[0x463];
        puVar13[0xd] = param_1[0x464];
        puVar13[0xe] = param_1[0x465];
        puVar13[0xf] = param_1[0x466];
        puVar13[0x10] = param_1[0x467];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d2e3:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407eb95;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x13;
        puVar13[1] = param_1[0x468];
        puVar13[2] = param_1[0x469];
        puVar13[3] = param_1[0x46a];
        puVar13[4] = param_1[0x46b];
        puVar13[5] = param_1[0x46c];
        puVar13[6] = param_1[0x46d];
        puVar13[7] = param_1[0x46e];
        puVar13[8] = param_1[0x46f];
        puVar13[9] = param_1[0x470];
        puVar13[10] = param_1[0x471];
        puVar13[0xb] = param_1[0x472];
        puVar13[0xc] = param_1[0x473];
        puVar13[0xd] = param_1[0x474];
        puVar13[0xe] = param_1[0x475];
        puVar13[0xf] = param_1[0x476];
        puVar13[0x10] = param_1[0x477];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x13) {
            piVar21[1] = param_1[0x468];
            piVar21[2] = param_1[0x469];
            piVar21[3] = param_1[0x46a];
            piVar21[4] = param_1[0x46b];
            piVar21[5] = param_1[0x46c];
            piVar21[6] = param_1[0x46d];
            piVar21[7] = param_1[0x46e];
            piVar21[8] = param_1[0x46f];
            piVar21[9] = param_1[0x470];
            piVar21[10] = param_1[0x471];
            piVar21[0xb] = param_1[0x472];
            piVar21[0xc] = param_1[0x473];
            piVar21[0xd] = param_1[0x474];
            piVar21[0xe] = param_1[0x475];
            piVar21[0xf] = param_1[0x476];
            piVar21[0x10] = param_1[0x477];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d37b;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407db88;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x13;
        puVar13[1] = param_1[0x468];
        puVar13[2] = param_1[0x469];
        puVar13[3] = param_1[0x46a];
        puVar13[4] = param_1[0x46b];
        puVar13[5] = param_1[0x46c];
        puVar13[6] = param_1[0x46d];
        puVar13[7] = param_1[0x46e];
        puVar13[8] = param_1[0x46f];
        puVar13[9] = param_1[0x470];
        puVar13[10] = param_1[0x471];
        puVar13[0xb] = param_1[0x472];
        puVar13[0xc] = param_1[0x473];
        puVar13[0xd] = param_1[0x474];
        puVar13[0xe] = param_1[0x475];
        puVar13[0xf] = param_1[0x476];
        puVar13[0x10] = param_1[0x477];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d37b:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407ec31;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x14;
        puVar13[1] = param_1[0x478];
        puVar13[2] = param_1[0x479];
        puVar13[3] = param_1[0x47a];
        puVar13[4] = param_1[0x47b];
        puVar13[5] = param_1[0x47c];
        puVar13[6] = param_1[0x47d];
        puVar13[7] = param_1[0x47e];
        puVar13[8] = param_1[0x47f];
        puVar13[9] = param_1[0x480];
        puVar13[10] = param_1[0x481];
        puVar13[0xb] = param_1[0x482];
        puVar13[0xc] = param_1[0x483];
        puVar13[0xd] = param_1[0x484];
        puVar13[0xe] = param_1[0x485];
        puVar13[0xf] = param_1[0x486];
        puVar13[0x10] = param_1[0x487];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x14) {
            piVar21[1] = param_1[0x478];
            piVar21[2] = param_1[0x479];
            piVar21[3] = param_1[0x47a];
            piVar21[4] = param_1[0x47b];
            piVar21[5] = param_1[0x47c];
            piVar21[6] = param_1[0x47d];
            piVar21[7] = param_1[0x47e];
            piVar21[8] = param_1[0x47f];
            piVar21[9] = param_1[0x480];
            piVar21[10] = param_1[0x481];
            piVar21[0xb] = param_1[0x482];
            piVar21[0xc] = param_1[0x483];
            piVar21[0xd] = param_1[0x484];
            piVar21[0xe] = param_1[0x485];
            piVar21[0xf] = param_1[0x486];
            piVar21[0x10] = param_1[0x487];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d413;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407dd73;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x14;
        puVar13[1] = param_1[0x478];
        puVar13[2] = param_1[0x479];
        puVar13[3] = param_1[0x47a];
        puVar13[4] = param_1[0x47b];
        puVar13[5] = param_1[0x47c];
        puVar13[6] = param_1[0x47d];
        puVar13[7] = param_1[0x47e];
        puVar13[8] = param_1[0x47f];
        puVar13[9] = param_1[0x480];
        puVar13[10] = param_1[0x481];
        puVar13[0xb] = param_1[0x482];
        puVar13[0xc] = param_1[0x483];
        puVar13[0xd] = param_1[0x484];
        puVar13[0xe] = param_1[0x485];
        puVar13[0xf] = param_1[0x486];
        puVar13[0x10] = param_1[0x487];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d413:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407eccd;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x15;
        puVar13[1] = param_1[0x488];
        puVar13[2] = param_1[0x489];
        puVar13[3] = param_1[0x48a];
        puVar13[4] = param_1[0x48b];
        puVar13[5] = param_1[0x48c];
        puVar13[6] = param_1[0x48d];
        puVar13[7] = param_1[0x48e];
        puVar13[8] = param_1[0x48f];
        puVar13[9] = param_1[0x490];
        puVar13[10] = param_1[0x491];
        puVar13[0xb] = param_1[0x492];
        puVar13[0xc] = param_1[0x493];
        puVar13[0xd] = param_1[0x494];
        puVar13[0xe] = param_1[0x495];
        puVar13[0xf] = param_1[0x496];
        puVar13[0x10] = param_1[0x497];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x15) {
            piVar21[1] = param_1[0x488];
            piVar21[2] = param_1[0x489];
            piVar21[3] = param_1[0x48a];
            piVar21[4] = param_1[0x48b];
            piVar21[5] = param_1[0x48c];
            piVar21[6] = param_1[0x48d];
            piVar21[7] = param_1[0x48e];
            piVar21[8] = param_1[0x48f];
            piVar21[9] = param_1[0x490];
            piVar21[10] = param_1[0x491];
            piVar21[0xb] = param_1[0x492];
            piVar21[0xc] = param_1[0x493];
            piVar21[0xd] = param_1[0x494];
            piVar21[0xe] = param_1[0x495];
            piVar21[0xf] = param_1[0x496];
            piVar21[0x10] = param_1[0x497];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d4ab;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407de06;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x15;
        puVar13[1] = param_1[0x488];
        puVar13[2] = param_1[0x489];
        puVar13[3] = param_1[0x48a];
        puVar13[4] = param_1[0x48b];
        puVar13[5] = param_1[0x48c];
        puVar13[6] = param_1[0x48d];
        puVar13[7] = param_1[0x48e];
        puVar13[8] = param_1[0x48f];
        puVar13[9] = param_1[0x490];
        puVar13[10] = param_1[0x491];
        puVar13[0xb] = param_1[0x492];
        puVar13[0xc] = param_1[0x493];
        puVar13[0xd] = param_1[0x494];
        puVar13[0xe] = param_1[0x495];
        puVar13[0xf] = param_1[0x496];
        puVar13[0x10] = param_1[0x497];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d4ab:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407ed69;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x16;
        puVar13[1] = param_1[0x498];
        puVar13[2] = param_1[0x499];
        puVar13[3] = param_1[0x49a];
        puVar13[4] = param_1[0x49b];
        puVar13[5] = param_1[0x49c];
        puVar13[6] = param_1[0x49d];
        puVar13[7] = param_1[0x49e];
        puVar13[8] = param_1[0x49f];
        puVar13[9] = param_1[0x4a0];
        puVar13[10] = param_1[0x4a1];
        puVar13[0xb] = param_1[0x4a2];
        puVar13[0xc] = param_1[0x4a3];
        puVar13[0xd] = param_1[0x4a4];
        puVar13[0xe] = param_1[0x4a5];
        puVar13[0xf] = param_1[0x4a6];
        puVar13[0x10] = param_1[0x4a7];
        piVar12 = *(int **)(iVar17 + 0x114);
        piVar12[0x11] = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x16) {
            piVar21[1] = param_1[0x498];
            piVar21[2] = param_1[0x499];
            piVar21[3] = param_1[0x49a];
            piVar21[4] = param_1[0x49b];
            piVar21[5] = param_1[0x49c];
            piVar21[6] = param_1[0x49d];
            piVar21[7] = param_1[0x49e];
            piVar21[8] = param_1[0x49f];
            piVar21[9] = param_1[0x4a0];
            piVar21[10] = param_1[0x4a1];
            piVar21[0xb] = param_1[0x4a2];
            piVar21[0xc] = param_1[0x4a3];
            piVar21[0xd] = param_1[0x4a4];
            piVar21[0xe] = param_1[0x4a5];
            piVar21[0xf] = param_1[0x4a6];
            piVar21[0x10] = param_1[0x4a7];
            piVar12 = *(int **)(iVar17 + 0x114);
            goto LAB_0407d543;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407de99;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x16;
        puVar13[1] = param_1[0x498];
        puVar13[2] = param_1[0x499];
        puVar13[3] = param_1[0x49a];
        puVar13[4] = param_1[0x49b];
        puVar13[5] = param_1[0x49c];
        puVar13[6] = param_1[0x49d];
        puVar13[7] = param_1[0x49e];
        puVar13[8] = param_1[0x49f];
        puVar13[9] = param_1[0x4a0];
        puVar13[10] = param_1[0x4a1];
        puVar13[0xb] = param_1[0x4a2];
        puVar13[0xc] = param_1[0x4a3];
        puVar13[0xd] = param_1[0x4a4];
        puVar13[0xe] = param_1[0x4a5];
        puVar13[0xf] = param_1[0x4a6];
        puVar13[0x10] = param_1[0x4a7];
        puVar13[0x11] = 0;
        piVar12 = *(int **)(iVar17 + 0x114);
      }
LAB_0407d543:
      if (piVar12 == (int *)0x0) {
        *psVar19 = 0x48;
        psVar19[-1] = 0x407ee05;
        puVar13 = malloc(*psVar19);
        *(undefined4 **)(iVar17 + 0x114) = puVar13;
        *puVar13 = 0x17;
        puVar13[1] = param_1[0x4a8];
        puVar13[2] = param_1[0x4a9];
        puVar13[3] = param_1[0x4aa];
        puVar13[4] = param_1[0x4ab];
        puVar13[5] = param_1[0x4ac];
        puVar13[6] = param_1[0x4ad];
        puVar13[7] = param_1[0x4ae];
        puVar13[8] = param_1[0x4af];
        puVar13[9] = param_1[0x4b0];
        puVar13[10] = param_1[0x4b1];
        puVar13[0xb] = param_1[0x4b2];
        puVar13[0xc] = param_1[0x4b3];
        puVar13[0xd] = param_1[0x4b4];
        puVar13[0xe] = param_1[0x4b5];
        puVar13[0xf] = param_1[0x4b6];
        puVar13[0x10] = param_1[0x4b7];
        *(undefined4 *)(*(int *)(iVar17 + 0x114) + 0x44) = 0;
      }
      else {
        do {
          piVar21 = piVar12;
          if (*piVar21 == 0x17) {
            piVar21[1] = param_1[0x4a8];
            piVar21[2] = param_1[0x4a9];
            piVar21[3] = param_1[0x4aa];
            piVar21[4] = param_1[0x4ab];
            piVar21[5] = param_1[0x4ac];
            piVar21[6] = param_1[0x4ad];
            piVar21[7] = param_1[0x4ae];
            piVar21[8] = param_1[0x4af];
            piVar21[9] = param_1[0x4b0];
            piVar21[10] = param_1[0x4b1];
            piVar21[0xb] = param_1[0x4b2];
            piVar21[0xc] = param_1[0x4b3];
            piVar21[0xd] = param_1[0x4b4];
            piVar21[0xe] = param_1[0x4b5];
            piVar21[0xf] = param_1[0x4b6];
            piVar21[0x10] = param_1[0x4b7];
            goto LAB_0407d5d5;
          }
          piVar12 = (int *)piVar21[0x11];
        } while ((int *)piVar21[0x11] != (int *)0x0);
        *psVar19 = 0x48;
        psVar19[-1] = 0x407df2c;
        puVar13 = malloc(*psVar19);
        piVar21[0x11] = (int)puVar13;
        *puVar13 = 0x17;
        puVar13[1] = param_1[0x4a8];
        puVar13[2] = param_1[0x4a9];
        puVar13[3] = param_1[0x4aa];
        puVar13[4] = param_1[0x4ab];
        puVar13[5] = param_1[0x4ac];
        puVar13[6] = param_1[0x4ad];
        puVar13[7] = param_1[0x4ae];
        puVar13[8] = param_1[0x4af];
        puVar13[9] = param_1[0x4b0];
        puVar13[10] = param_1[0x4b1];
        puVar13[0xb] = param_1[0x4b2];
        puVar13[0xc] = param_1[0x4b3];
        puVar13[0xd] = param_1[0x4b4];
        puVar13[0xe] = param_1[0x4b5];
        puVar13[0xf] = param_1[0x4b6];
        puVar13[0x10] = param_1[0x4b7];
        puVar13[0x11] = 0;
      }
LAB_0407d5d5:
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 1;
      piVar12 = (int *)(iVar17 + 0x98);
      *(int *)(iVar17 + 0x24) = param_1[0xfd];
      *(int *)(iVar17 + 0x28) = param_1[0xfe];
      *(int *)(iVar17 + 0x2c) = param_1[0xff];
      iVar16 = param_1[0x100];
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 2;
      *(int *)(iVar17 + 0x30) = iVar16;
      *(int *)(iVar17 + 0x34) = param_1[0x101];
      *(int *)(iVar17 + 0x38) = param_1[0x102];
      *(int *)(iVar17 + 0x3c) = param_1[0x103];
      iVar16 = param_1[0x104];
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 4;
      *(int *)(iVar17 + 0x40) = iVar16;
      *(int *)(iVar17 + 0x44) = param_1[0x105];
      *(int *)(iVar17 + 0x48) = param_1[0x106];
      *(int *)(iVar17 + 0x4c) = param_1[0x107];
      iVar16 = param_1[0x108];
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 8;
      *(int *)(iVar17 + 0x50) = iVar16;
      *(int *)(iVar17 + 0x54) = param_1[0x109];
      *(int *)(iVar17 + 0x58) = param_1[0x10a];
      piVar21 = param_1 + 0x217;
      *(int *)(iVar17 + 0x5c) = param_1[0x10b];
      iVar16 = param_1[0x10c];
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 0x10;
      *(int *)(iVar17 + 0x60) = iVar16;
      *(int *)(iVar17 + 100) = param_1[0x10d];
      *(int *)(iVar17 + 0x68) = param_1[0x10e];
      *(int *)(iVar17 + 0x6c) = param_1[0x10f];
      iVar16 = param_1[0x110];
      *(uint *)(iVar17 + 0x20) = *(uint *)(iVar17 + 0x20) | 0x20;
      *(int *)(iVar17 + 0x70) = iVar16;
      *(int *)(iVar17 + 0x74) = param_1[0x111];
      *(int *)(iVar17 + 0x78) = param_1[0x112];
      bVar22 = ((uint)piVar12 & 1) != 0;
      *(int *)(iVar17 + 0x7c) = param_1[0x113];
      iVar16 = param_1[0x114];
      *(undefined4 *)(iVar17 + 0x94) = 1;
      *(int *)(iVar17 + 0x80) = iVar16;
      uVar11 = 0x44;
      if (bVar22) {
        *(char *)(iVar17 + 0x98) = (char)param_1[0x217];
        uVar11 = 0x43;
        piVar12 = (int *)(iVar17 + 0x99);
        piVar21 = (int *)((int)param_1 + 0x85d);
      }
      if (((uint)piVar12 & 2) != 0) {
        iVar17 = *piVar21;
        uVar11 = uVar11 - 2;
        piVar21 = (int *)((int)piVar21 + 2);
        *(short *)piVar12 = (short)iVar17;
        piVar12 = (int *)((int)piVar12 + 2);
      }
      iVar17 = 0;
      for (uVar15 = uVar11 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *piVar12 = *piVar21;
        piVar21 = piVar21 + (uint)bVar23 * -2 + 1;
        piVar12 = piVar12 + (uint)bVar23 * -2 + 1;
      }
      if ((uVar11 & 2) != 0) {
        *(short *)piVar12 = (short)*piVar21;
        iVar17 = 2;
      }
      if (bVar22) {
        *(undefined1 *)((int)piVar12 + iVar17) = *(undefined1 *)((int)piVar21 + iVar17);
      }
    }
  }
  iVar17 = *param_1;
  *psVar19 = (size_t)param_1;
  psVar19[1] = param_3;
  pcVar7 = *(code **)(iVar17 + 0xfc);
  psVar19[-1] = 0x407ade6;
  uVar9 = (*pcVar7)();
  param_1[0x1d7b] = iVar4;
  *psVar19 = (size_t)local_20;
  psVar19[-1] = 0x407adff;
  direct3ddevice9imp_040a2df0();
  return uVar9;
}

// --- Direct3DDevice9Imp::StateBlock_GetTextureStageState @0x040a8290 ---
/* WARNING: Type propagation algorithm not settling */
/* source: direct3ddevice9imp, direct3dstateblock9imp */

uint Direct3DDevice9Imp__StateBlock_GetTextureStageState(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  size_t *psVar16;
  uint uVar17;
  size_t sVar18;
  undefined4 *puVar19;
  uint uVar20;
  size_t sVar21;
  undefined4 *puVar22;
  bool bVar23;
  byte bVar24;
  size_t asStackY_210 [81];
  size_t local_50;
  size_t local_4c;
  size_t local_48;
  void *local_44;
  int local_40;
  void *local_3c;
  int local_38;
  int local_34;
  size_t local_30;
  
  bVar24 = 0;
  psVar16 = (size_t *)&stack0xffffff34;
  if (*(int *)(param_1 + 0x10) != 0) {
    asStackY_210[0x50] = 0x40a82be;
    direct3ddevice9imp_040803c0();
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      for (iVar7 = *(int *)(param_1 + 0x14); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
                    /* try { // try from 040a82ec to 040a8346 has its CatchHandler @ 040abaec */
        asStackY_210[0x50] = 0x40a82f1;
        uVar6 = FUN_04088240();
        *(undefined4 *)(iVar7 + 4) = uVar6;
      }
      for (iVar7 = *(int *)(param_1 + 0x18); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x6c)) {
        while( true ) {
          asStackY_210[0x50] = 0x40a832f;
          iVar13 = FUN_04087a10();
          if (iVar13 != 0) break;
          asStackY_210[0x50] = 0x40a8347;
          FUN_0402cd10();
          asStackY_210[0x50] = 0x40a8357;
          bzero((void *)(iVar7 + 4),0x68);
          *(undefined4 *)(iVar7 + 4) = 3;
          *(undefined4 *)(iVar7 + 8) = 0x3f800000;
          *(undefined4 *)(iVar7 + 0xc) = 0x3f800000;
          *(undefined4 *)(iVar7 + 0x10) = 0x3f800000;
          *(undefined4 *)(iVar7 + 0x4c) = 0x3f800000;
          iVar7 = *(int *)(iVar7 + 0x6c);
          if (iVar7 == 0) goto LAB_040a8381;
        }
      }
LAB_040a8381:
      uVar11 = *(uint *)(param_1 + 0x1c);
      if ((uVar11 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar3 + 0x434);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar3 + 0x438);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x43c);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar3 + 0x440);
      }
      if ((uVar11 & 2) != 0) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x444);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x448);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x44c);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar3 + 0x450);
      }
      if ((uVar11 & 4) != 0) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x454);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar3 + 0x458);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar3 + 0x45c);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x460);
      }
      if ((uVar11 & 8) != 0) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x464);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x468);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x46c);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x470);
      }
      if ((uVar11 & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x474);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar3 + 0x478);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar3 + 0x47c);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar3 + 0x480);
      }
      if ((uVar11 & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar3 + 0x484);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar3 + 0x488);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar3 + 0x48c);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar3 + 0x490);
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar3 + 0x894);
      }
      if (*(int *)(param_1 + 0x88) != 0) {
        asStackY_210[0x50] = 0x40aa3a9;
        uVar6 = FUN_04098530();
        *(undefined4 *)(param_1 + 0x8c) = uVar6;
      }
      if (*(int *)(param_1 + 0x90) != 0) {
        puVar22 = (undefined4 *)(param_1 + 0x94);
        uVar11 = 0x44;
        bVar23 = ((uint)puVar22 & 1) != 0;
        puVar19 = (undefined4 *)(iVar3 + 0x89c);
        if (bVar23) {
          uVar11 = 0x43;
          *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(iVar3 + 0x89c);
          puVar22 = (undefined4 *)(param_1 + 0x95);
          puVar19 = (undefined4 *)(iVar3 + 0x89d);
        }
        if (((uint)puVar22 & 2) != 0) {
          uVar2 = *(undefined2 *)puVar19;
          uVar11 = uVar11 - 2;
          puVar19 = (undefined4 *)((int)puVar19 + 2);
          *(undefined2 *)puVar22 = uVar2;
          puVar22 = (undefined4 *)((int)puVar22 + 2);
        }
        iVar7 = 0;
        for (uVar15 = uVar11 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar22 = *puVar19;
          puVar19 = puVar19 + (uint)bVar24 * -2 + 1;
          puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
        }
        if ((uVar11 & 2) != 0) {
          *(undefined2 *)puVar22 = *(undefined2 *)puVar19;
          iVar7 = 2;
        }
        if (bVar23) {
          *(undefined1 *)((int)puVar22 + iVar7) = *(undefined1 *)((int)puVar19 + iVar7);
        }
      }
      if (*(int *)(param_1 + 0xd8) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar3 + 0x8e0);
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar3 + 0x5320);
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(iVar3 + 0x5324);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(iVar3 + 0x5328);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(iVar3 + 0x532c);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(iVar3 + 0x5330);
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar3 + 0x5334);
      }
      if (*(int *)(param_1 + 0xfc) != 0) {
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar3 + 0xcfc);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar3 + 0xd00);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar3 + 0xd04);
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar3 + 0xd08);
      }
      for (piVar9 = *(int **)(param_1 + 0x110); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[0x11])
      {
        iVar7 = *piVar9;
        if (iVar7 == 2) {
          piVar8 = (int *)(iVar3 + 0x10a0);
        }
        else if (iVar7 == 0x100) {
          piVar8 = (int *)(iVar3 + 0x1320);
        }
        else if (iVar7 == 3) {
          piVar8 = (int *)(iVar3 + 0x10e0);
        }
        else if (iVar7 - 0x10U < 8) {
          piVar8 = (int *)(iVar3 + 0x1120 + (iVar7 - 0x10U) * 0x40);
        }
        else {
          if (0xfe < iVar7 - 0x101U) goto LAB_040a84f8;
          piVar8 = (int *)(iVar3 + -0x2ce0 + iVar7 * 0x40);
        }
        piVar9[1] = *piVar8;
        piVar9[2] = piVar8[1];
        piVar9[3] = piVar8[2];
        piVar9[4] = piVar8[3];
        piVar9[5] = piVar8[4];
        piVar9[6] = piVar8[5];
        piVar9[7] = piVar8[6];
        piVar9[8] = piVar8[7];
        piVar9[9] = piVar8[8];
        piVar9[10] = piVar8[9];
        piVar9[0xb] = piVar8[10];
        piVar9[0xc] = piVar8[0xb];
        piVar9[0xd] = piVar8[0xc];
        piVar9[0xe] = piVar8[0xd];
        piVar9[0xf] = piVar8[0xe];
        piVar9[0x10] = piVar8[0xf];
      }
      if (*(int *)(param_1 + 0x114) != 0) {
        local_40 = param_1;
        iVar7 = 0;
        do {
          while (iVar13 = iVar7, uVar1 = *(ushort *)(param_1 + 0x118 + iVar13 * 2), uVar1 == 0) {
LAB_040a85e6:
            local_40 = local_40 + 0x34;
            iVar7 = iVar13 + 1;
            if (iVar13 + 1 == 0x10) goto LAB_040a8764;
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(local_40 + 0x140) = *(undefined4 *)(iVar3 + 0x8ec + iVar13 * 0x34);
          }
          if ((uVar1 & 2) != 0) {
            *(undefined4 *)(param_1 + 0x144 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x8f0 + iVar13 * 0x34);
          }
          if ((uVar1 & 4) != 0) {
            *(undefined4 *)(param_1 + 0x148 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x8f4 + iVar13 * 0x34);
          }
          if ((uVar1 & 8) != 0) {
            *(undefined4 *)(param_1 + 0x14c + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x8f8 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x10) != 0) {
            *(undefined4 *)(param_1 + 0x150 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x8fc + iVar13 * 0x34);
          }
          if ((uVar1 & 0x20) != 0) {
            *(undefined4 *)(param_1 + 0x154 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x900 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x40) != 0) {
            *(undefined4 *)(param_1 + 0x158 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x904 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x80) != 0) {
            *(undefined4 *)(param_1 + 0x15c + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x908 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x100) != 0) {
            *(undefined4 *)(param_1 + 0x160 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x90c + iVar13 * 0x34);
          }
          if ((uVar1 & 0x200) != 0) {
            *(undefined4 *)(param_1 + 0x164 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x910 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x400) != 0) {
            *(undefined4 *)(param_1 + 0x168 + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x914 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x800) != 0) {
            *(undefined4 *)(param_1 + 0x16c + iVar13 * 0x34) =
                 *(undefined4 *)(iVar3 + 0x918 + iVar13 * 0x34);
          }
          if ((uVar1 & 0x1000) == 0) goto LAB_040a85e6;
          *(undefined4 *)(local_40 + 0x170) = *(undefined4 *)(iVar3 + 0x91c + iVar13 * 0x34);
          iVar7 = iVar13 + 1;
          local_40 = local_40 + 0x34;
        } while (iVar13 + 1 != 0x10);
LAB_040a8764:
        uVar11 = iVar13 + 1U & 0xffffff00;
        local_30 = param_1;
        do {
          while( true ) {
            iVar7 = uVar11 + 0x10;
            uVar1 = *(ushort *)(param_1 + 0x138 + uVar11 * 2);
            if (uVar1 != 0) break;
LAB_040a87df:
            local_30 = local_30 + 0x34;
            uVar11 = uVar11 + 1;
            if (uVar11 == 4) goto LAB_040a89cb;
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(local_30 + 0x480) = *(undefined4 *)(iVar3 + 0xc2c + uVar11 * 0x34);
          }
          if ((uVar1 & 2) != 0) {
            *(undefined4 *)(param_1 + 0x144 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc30 + uVar11 * 0x34);
          }
          if ((uVar1 & 4) != 0) {
            *(undefined4 *)(param_1 + 0x148 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc34 + uVar11 * 0x34);
          }
          if ((uVar1 & 8) != 0) {
            *(undefined4 *)(param_1 + 0x14c + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc38 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x10) != 0) {
            *(undefined4 *)(param_1 + 0x150 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc3c + uVar11 * 0x34);
          }
          if ((uVar1 & 0x20) != 0) {
            *(undefined4 *)(param_1 + 0x154 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc40 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x40) != 0) {
            *(undefined4 *)(param_1 + 0x158 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc44 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x80) != 0) {
            *(undefined4 *)(param_1 + 0x15c + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc48 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x100) != 0) {
            *(undefined4 *)(param_1 + 0x160 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc4c + uVar11 * 0x34);
          }
          if ((uVar1 & 0x200) != 0) {
            *(undefined4 *)(param_1 + 0x164 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc50 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x400) != 0) {
            *(undefined4 *)(param_1 + 0x168 + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc54 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x800) != 0) {
            *(undefined4 *)(param_1 + 0x16c + iVar7 * 0x34) =
                 *(undefined4 *)(iVar3 + 0xc58 + uVar11 * 0x34);
          }
          if ((uVar1 & 0x1000) == 0) goto LAB_040a87df;
          iVar7 = uVar11 * 0x34;
          uVar11 = uVar11 + 1;
          *(undefined4 *)(local_30 + 0x4b0) = *(undefined4 *)(iVar3 + 0xc5c + iVar7);
          local_30 = local_30 + 0x34;
        } while (uVar11 != 4);
      }
LAB_040a89cb:
      local_38 = 0;
      do {
        uVar11 = *(uint *)(param_1 + 0x550 + local_38 * 4);
        if (uVar11 != 0) {
          iVar7 = 0;
          do {
            if ((1 << ((byte)iVar7 & 0x1f) & uVar11) != 0) {
              *(undefined4 *)(local_38 * 0x80 + param_1 + 0x570 + iVar7 * 4) =
                   *(undefined4 *)(iVar3 + 0x44 + (local_38 * 0x20 + 0x114 + iVar7) * 4);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x20);
        }
        local_38 = local_38 + 1;
      } while (local_38 != 8);
      psVar16 = (size_t *)&stack0xffffff34;
      if (*(int *)(param_1 + 0x970) != 0) {
        piVar9 = *(int **)(param_1 + 0x974);
        piVar8 = *(int **)(iVar3 + 0x898);
        psVar16 = (size_t *)&stack0xffffff34;
        if (piVar9 != piVar8) {
          psVar16 = (size_t *)&stack0xffffff34;
          if (piVar8 != (int *)0x0) {
                    /* try { // try from 040a8a65 to 040abae0 has its CatchHandler @ 040abaec */
            asStackY_210[0x50] = 0x40a8a68;
            (**(code **)(*piVar8 + 4))();
            piVar9 = *(int **)(param_1 + 0x974);
            psVar16 = asStackY_210 + 0x50;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8a7d;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0x974) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0x978) != 0) {
        piVar9 = *(int **)(param_1 + 0x97c);
        piVar8 = *(int **)(iVar3 + 0x8e4);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8ab7;
            (*pcVar4)();
            piVar9 = *(int **)(param_1 + 0x97c);
            psVar16 = psVar16 + -1;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8acc;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0x97c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0x980) != 0) {
        piVar9 = *(int **)(param_1 + 0x984);
        piVar8 = *(int **)(iVar3 + 0x8e8);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8b06;
            (*pcVar4)();
            piVar9 = *(int **)(param_1 + 0x984);
            psVar16 = psVar16 + -1;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8b1b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0x984) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0x988) != 0) {
        piVar9 = *(int **)(param_1 + 0x98c);
        piVar8 = *(int **)(iVar3 + 0x5338);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8b55;
            (*pcVar4)();
            piVar9 = *(int **)(param_1 + 0x98c);
            psVar16 = psVar16 + -1;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8b6a;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0x98c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0x990) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd0c);
        piVar8 = *(int **)(param_1 + 0xa10);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8ba5;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa10);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8bbd;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(iVar3 + 0xd0c);
        }
        *(undefined4 *)(param_1 + 0xa14) = *(undefined4 *)(iVar3 + 0xd10);
        *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(iVar3 + 0xd14);
      }
      if (*(int *)(param_1 + 0x9d0) != 0) {
        *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(iVar3 + 0xd18);
      }
      if (*(int *)(param_1 + 0x994) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd1c);
        piVar8 = *(int **)(param_1 + 0xa20);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8c3e;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa20);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8c56;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(iVar3 + 0xd1c);
        }
        *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(iVar3 + 0xd20);
        *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(iVar3 + 0xd24);
      }
      if (*(int *)(param_1 + 0x9d4) != 0) {
        *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(iVar3 + 0xd28);
      }
      if (*(int *)(param_1 + 0x998) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd2c);
        piVar8 = *(int **)(param_1 + 0xa30);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8cd7;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa30);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8cef;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(iVar3 + 0xd2c);
        }
        *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(iVar3 + 0xd30);
        *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(iVar3 + 0xd34);
      }
      if (*(int *)(param_1 + 0x9d8) != 0) {
        *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(iVar3 + 0xd38);
      }
      if (*(int *)(param_1 + 0x99c) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd3c);
        piVar8 = *(int **)(param_1 + 0xa40);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8d70;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa40);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8d88;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(iVar3 + 0xd3c);
        }
        *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(iVar3 + 0xd40);
        *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(iVar3 + 0xd44);
      }
      if (*(int *)(param_1 + 0x9dc) != 0) {
        *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(iVar3 + 0xd48);
      }
      if (*(int *)(param_1 + 0x9a0) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd4c);
        piVar8 = *(int **)(param_1 + 0xa50);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8e09;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa50);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8e21;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(iVar3 + 0xd4c);
        }
        *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(iVar3 + 0xd50);
        *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(iVar3 + 0xd54);
      }
      if (*(int *)(param_1 + 0x9e0) != 0) {
        *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(iVar3 + 0xd58);
      }
      if (*(int *)(param_1 + 0x9a4) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd5c);
        piVar8 = *(int **)(param_1 + 0xa60);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8ea2;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa60);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8eba;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(iVar3 + 0xd5c);
        }
        *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(iVar3 + 0xd60);
        *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(iVar3 + 0xd64);
      }
      if (*(int *)(param_1 + 0x9e4) != 0) {
        *(undefined4 *)(param_1 + 0xa6c) = *(undefined4 *)(iVar3 + 0xd68);
      }
      if (*(int *)(param_1 + 0x9a8) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd6c);
        piVar8 = *(int **)(param_1 + 0xa70);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8f3b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa70);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8f53;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa70) = *(undefined4 *)(iVar3 + 0xd6c);
        }
        *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(iVar3 + 0xd70);
        *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(iVar3 + 0xd74);
      }
      if (*(int *)(param_1 + 0x9e8) != 0) {
        *(undefined4 *)(param_1 + 0xa7c) = *(undefined4 *)(iVar3 + 0xd78);
      }
      if (*(int *)(param_1 + 0x9ac) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd7c);
        piVar8 = *(int **)(param_1 + 0xa80);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a8fd4;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa80);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a8fec;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa80) = *(undefined4 *)(iVar3 + 0xd7c);
        }
        *(undefined4 *)(param_1 + 0xa84) = *(undefined4 *)(iVar3 + 0xd80);
        *(undefined4 *)(param_1 + 0xa88) = *(undefined4 *)(iVar3 + 0xd84);
      }
      if (*(int *)(param_1 + 0x9ec) != 0) {
        *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(iVar3 + 0xd88);
      }
      if (*(int *)(param_1 + 0x9b0) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd8c);
        piVar8 = *(int **)(param_1 + 0xa90);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a906d;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xa90);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9085;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(iVar3 + 0xd8c);
        }
        *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(iVar3 + 0xd90);
        *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(iVar3 + 0xd94);
      }
      if (*(int *)(param_1 + 0x9f0) != 0) {
        *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(iVar3 + 0xd98);
      }
      if (*(int *)(param_1 + 0x9b4) != 0) {
        piVar9 = *(int **)(iVar3 + 0xd9c);
        piVar8 = *(int **)(param_1 + 0xaa0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9106;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xaa0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a911e;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(iVar3 + 0xd9c);
        }
        *(undefined4 *)(param_1 + 0xaa4) = *(undefined4 *)(iVar3 + 0xda0);
        *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(iVar3 + 0xda4);
      }
      if (*(int *)(param_1 + 0x9f4) != 0) {
        *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(iVar3 + 0xda8);
      }
      if (*(int *)(param_1 + 0x9b8) != 0) {
        piVar9 = *(int **)(iVar3 + 0xdac);
        piVar8 = *(int **)(param_1 + 0xab0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a919f;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xab0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a91b7;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xab0) = *(undefined4 *)(iVar3 + 0xdac);
        }
        *(undefined4 *)(param_1 + 0xab4) = *(undefined4 *)(iVar3 + 0xdb0);
        *(undefined4 *)(param_1 + 0xab8) = *(undefined4 *)(iVar3 + 0xdb4);
      }
      if (*(int *)(param_1 + 0x9f8) != 0) {
        *(undefined4 *)(param_1 + 0xabc) = *(undefined4 *)(iVar3 + 0xdb8);
      }
      if (*(int *)(param_1 + 0x9bc) != 0) {
        piVar9 = *(int **)(iVar3 + 0xdbc);
        piVar8 = *(int **)(param_1 + 0xac0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9238;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xac0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9250;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(iVar3 + 0xdbc);
        }
        *(undefined4 *)(param_1 + 0xac4) = *(undefined4 *)(iVar3 + 0xdc0);
        *(undefined4 *)(param_1 + 0xac8) = *(undefined4 *)(iVar3 + 0xdc4);
      }
      if (*(int *)(param_1 + 0x9fc) != 0) {
        *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(iVar3 + 0xdc8);
      }
      if (*(int *)(param_1 + 0x9c0) != 0) {
        piVar9 = *(int **)(iVar3 + 0xdcc);
        piVar8 = *(int **)(param_1 + 0xad0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a92d1;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xad0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a92e9;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(iVar3 + 0xdcc);
        }
        *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(iVar3 + 0xdd0);
        *(undefined4 *)(param_1 + 0xad8) = *(undefined4 *)(iVar3 + 0xdd4);
      }
      if (*(int *)(param_1 + 0xa00) != 0) {
        *(undefined4 *)(param_1 + 0xadc) = *(undefined4 *)(iVar3 + 0xdd8);
      }
      if (*(int *)(param_1 + 0x9c4) != 0) {
        piVar9 = *(int **)(iVar3 + 0xddc);
        piVar8 = *(int **)(param_1 + 0xae0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a936a;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xae0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9382;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(iVar3 + 0xddc);
        }
        *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(iVar3 + 0xde0);
        *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(iVar3 + 0xde4);
      }
      if (*(int *)(param_1 + 0xa04) != 0) {
        *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(iVar3 + 0xde8);
      }
      if (*(int *)(param_1 + 0x9c8) != 0) {
        piVar9 = *(int **)(iVar3 + 0xdec);
        piVar8 = *(int **)(param_1 + 0xaf0);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9403;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar8 = *(int **)(param_1 + 0xaf0);
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a941b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(iVar3 + 0xdec);
        }
        *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(iVar3 + 0xdf0);
        *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(iVar3 + 0xdf4);
      }
      if (*(int *)(param_1 + 0xa08) != 0) {
        *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(iVar3 + 0xdf8);
      }
      if (*(int *)(param_1 + 0x9cc) != 0) {
        piVar9 = *(int **)(iVar3 + 0xdfc);
        piVar8 = *(int **)(param_1 + 0xb00);
        if (piVar9 != piVar8) {
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a949c;
            (*pcVar4)();
            piVar8 = *(int **)(param_1 + 0xb00);
            psVar16 = psVar16 + -1;
          }
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a94b1;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(iVar3 + 0xdfc);
        }
        *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(iVar3 + 0xe00);
        *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(iVar3 + 0xe04);
      }
      if (*(int *)(param_1 + 0xa0c) != 0) {
        *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(iVar3 + 0xe08);
      }
      if (*(int *)(param_1 + 0xb10) != 0) {
        piVar9 = *(int **)(param_1 + 0xb60);
        piVar8 = *(int **)(iVar3 + 0xe0c);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9531;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb60);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9549;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb60) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb14) != 0) {
        piVar9 = *(int **)(param_1 + 0xb64);
        piVar8 = *(int **)(iVar3 + 0xe10);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9583;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb64);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a959b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb64) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb18) != 0) {
        piVar9 = *(int **)(param_1 + 0xb68);
        piVar8 = *(int **)(iVar3 + 0xe14);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a95d5;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb68);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a95ed;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb68) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb1c) != 0) {
        piVar9 = *(int **)(param_1 + 0xb6c);
        piVar8 = *(int **)(iVar3 + 0xe18);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9627;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb6c);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a963f;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb6c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb20) != 0) {
        piVar9 = *(int **)(param_1 + 0xb70);
        piVar8 = *(int **)(iVar3 + 0xe1c);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9679;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb70);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9691;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb70) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb24) != 0) {
        piVar9 = *(int **)(param_1 + 0xb74);
        piVar8 = *(int **)(iVar3 + 0xe20);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a96cb;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb74);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a96e3;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb74) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb28) != 0) {
        piVar9 = *(int **)(param_1 + 0xb78);
        piVar8 = *(int **)(iVar3 + 0xe24);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a971d;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb78);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9735;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb78) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb2c) != 0) {
        piVar9 = *(int **)(param_1 + 0xb7c);
        piVar8 = *(int **)(iVar3 + 0xe28);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a976f;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb7c);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9787;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb7c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb30) != 0) {
        piVar9 = *(int **)(param_1 + 0xb80);
        piVar8 = *(int **)(iVar3 + 0xe2c);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a97c1;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb80);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a97d9;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb80) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb34) != 0) {
        piVar9 = *(int **)(param_1 + 0xb84);
        piVar8 = *(int **)(iVar3 + 0xe30);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9813;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb84);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a982b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb84) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb38) != 0) {
        piVar9 = *(int **)(param_1 + 0xb88);
        piVar8 = *(int **)(iVar3 + 0xe34);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9865;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb88);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a987d;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb88) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb3c) != 0) {
        piVar9 = *(int **)(param_1 + 0xb8c);
        piVar8 = *(int **)(iVar3 + 0xe38);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a98b7;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb8c);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a98cf;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb8c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb40) != 0) {
        piVar9 = *(int **)(param_1 + 0xb90);
        piVar8 = *(int **)(iVar3 + 0xe3c);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9909;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb90);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9921;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb90) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb44) != 0) {
        piVar9 = *(int **)(param_1 + 0xb94);
        piVar8 = *(int **)(iVar3 + 0xe40);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a995b;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb94);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9973;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb94) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb48) != 0) {
        piVar9 = *(int **)(param_1 + 0xb98);
        piVar8 = *(int **)(iVar3 + 0xe44);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a99ad;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xb98);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a99c5;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb98) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb4c) != 0) {
        piVar9 = *(int **)(param_1 + 0xb9c);
        piVar8 = *(int **)(iVar3 + 0xe48);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a99ff;
            (*pcVar4)();
            piVar9 = *(int **)(param_1 + 0xb9c);
            psVar16 = psVar16 + -1;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9a14;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xb9c) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb50) != 0) {
        piVar9 = *(int **)(param_1 + 0xba0);
        piVar8 = *(int **)(iVar3 + 0xe4c);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9a4e;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xba0);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9a66;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xba0) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb54) != 0) {
        piVar9 = *(int **)(param_1 + 0xba4);
        piVar8 = *(int **)(iVar3 + 0xe50);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9aa0;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xba4);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9ab8;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xba4) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb58) != 0) {
        piVar9 = *(int **)(param_1 + 0xba8);
        piVar8 = *(int **)(iVar3 + 0xe54);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9af2;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
            piVar9 = *(int **)(param_1 + 0xba8);
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9b0a;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xba8) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xb5c) != 0) {
        piVar9 = *(int **)(param_1 + 0xbac);
        piVar8 = *(int **)(iVar3 + 0xe58);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            iVar7 = *piVar8;
            *psVar16 = (size_t)piVar8;
            pcVar4 = *(code **)(iVar7 + 4);
            psVar16[-1] = 0x40a9b44;
            (*pcVar4)();
            piVar9 = *(int **)(param_1 + 0xbac);
            psVar16 = psVar16 + -1;
          }
          if (piVar9 != (int *)0x0) {
            iVar7 = *piVar9;
            *psVar16 = (size_t)piVar9;
            pcVar4 = *(code **)(iVar7 + 8);
            psVar16[-1] = 0x40a9b59;
            (*pcVar4)();
            psVar16 = psVar16 + -1;
          }
          *(int **)(param_1 + 0xbac) = piVar8;
        }
      }
      if (*(int *)(param_1 + 0xbb0) != 0) {
        local_30 = param_1;
        iVar7 = 0;
        do {
          uVar11 = *(uint *)(param_1 + 0xbb4 + iVar7 * 4);
          if (uVar11 != 0) {
            iVar13 = 0;
            while( true ) {
              if ((1 << ((byte)iVar13 & 0x1f) & uVar11) != 0) {
                if ((uint)(&DAT_042f7f60)[iVar13] < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x040aa0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar11 = (**(code **)(&UNK_042f7e20 + (&DAT_042f7f60)[iVar13] * 4))();
                  return uVar11;
                }
                psVar16[3] = (size_t)
                             "DWORD Direct3DDevice9Imp::StateBlock_GetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE)"
                ;
                psVar16[2] = 0x23b;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.h"
                ;
                *psVar16 = (size_t)"false";
                psVar16[-1] = 0x40a9bfb;
                FUN_0400a810();
                *(undefined4 *)(local_30 + 0xbd4 + iVar13 * 4) = 0;
              }
              if (iVar13 == 0x12) break;
              iVar13 = iVar13 + 1;
              uVar11 = *(uint *)(param_1 + 0xbb4 + iVar7 * 4);
            }
          }
          local_30 = local_30 + 0x4c;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 8);
      }
      iVar7 = *(int *)(param_1 + 0xe38);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0xe38 + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffff0;
          *psVar16 = uVar6;
          psVar16[1] = (uVar11 & 0xfffffff0) + iVar3 + 0x649c;
          psVar16[-1] = 0x40a9c7b;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) != 0) {
        iVar14 = 0;
        iVar7 = *(int *)(param_1 + 0xe38);
        iVar13 = *(int *)(iVar3 + 0x75dc);
        if (iVar7 != 0) {
          iVar14 = iVar7 * 3 + -3;
          iVar14 = *(int *)(param_1 + 0xe40 + iVar14 * 4) + *(int *)(param_1 + 0xe3c + iVar14 * 4);
        }
        local_4c = iVar13 * 0x10 - iVar14;
        if (local_4c != 0) {
          iVar14 = 0;
          uVar11 = 0;
          if (iVar7 != 0) {
            iVar7 = iVar7 * 3 + -3;
            uVar11 = (uint)(*(int *)(param_1 + 0xe40 + iVar7 * 4) +
                           *(int *)(param_1 + 0xe3c + iVar7 * 4)) >> 4;
            iVar14 = uVar11 << 4;
          }
          *psVar16 = local_4c;
          psVar16[-1] = 0x40aa61d;
          pvVar10 = malloc(*psVar16);
          psVar16[2] = (iVar13 - uVar11) * 0x10;
          psVar16[1] = iVar3 + 0x649c + iVar14;
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa63d;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar7 = *(int *)(param_1 + 0xe38);
          if (iVar7 == 0) {
            uVar11 = 0;
            *psVar16 = local_4c;
            psVar16[-1] = 0x40ab4cd;
            local_44 = malloc(*psVar16);
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (size_t)local_44;
            psVar16[-1] = 0x40ab4e6;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            local_40 = -1;
LAB_040ab4ed:
            uVar15 = *(int *)(param_1 + 0xe38) + 1;
            *(uint *)(param_1 + 0xe38) = uVar15;
            if (0x10 < uVar15) {
              psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
              psVar16[2] = 0x89;
              psVar16[1] = (size_t)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
              ;
              *psVar16 = (size_t)"mChunkCount <= 16";
              psVar16[-1] = 0x40abae1;
              FUN_0400a810();
              uVar15 = *(uint *)(param_1 + 0xe38);
            }
            if (local_40 == -1) {
              iVar7 = param_1 + 0xe38 + (uVar15 * 3 + -3) * 4;
              *(uint *)(iVar7 + 4) = uVar11;
              *(size_t *)(iVar7 + 8) = local_4c;
              *(void **)(iVar7 + 0xc) = local_44;
            }
            else {
              iVar7 = param_1 + 0xe38 + local_40 * 0xc;
              psVar16[2] = (uVar15 - local_40) * 0xc - 0xc;
              psVar16[1] = iVar7 + 4;
              *psVar16 = param_1 + 0xe3c + (local_40 * 3 + 3) * 4;
              psVar16[-1] = 0x40aba7a;
              memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              *(uint *)(iVar7 + 4) = uVar11;
              *(void **)(iVar7 + 0xc) = local_44;
              *(size_t *)(iVar7 + 8) = local_4c;
            }
          }
          else {
            iVar13 = iVar7 * 3 + -3;
            local_48 = -1;
            local_38 = -1;
            local_40 = 0;
            uVar15 = *(int *)(param_1 + 0xe40 + iVar13 * 4) + *(int *)(param_1 + 0xe3c + iVar13 * 4)
            ;
            puVar12 = (uint *)(param_1 + 0xe3c);
            uVar11 = uVar15;
            local_30 = local_4c;
            do {
              uVar5 = *puVar12;
              uVar17 = puVar12[1] + uVar5;
              if (uVar11 <= uVar17) {
                uVar20 = local_30 + uVar11;
                if (uVar20 < uVar5) goto LAB_040ab2f2;
                if (local_38 == -1) {
                  local_38 = local_40;
                }
                if (uVar5 < uVar11) {
                  local_30 = uVar20 - uVar5;
                  uVar11 = uVar5;
                }
                if (uVar20 < uVar17) {
                  local_30 = uVar17 - uVar11;
                }
                local_48 = local_40;
                if ((uVar5 == uVar11) && (uVar17 == local_30 + uVar5)) {
                  iVar7 = *(int *)(param_1 + 0xe44 + local_40 * 0xc);
                  psVar16[2] = local_4c;
                  psVar16[1] = (size_t)pvVar10;
                  *psVar16 = (uVar15 - uVar5) + iVar7;
                  psVar16[-1] = 0x40aaa7a;
                  memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
                  goto LAB_040aaa7a;
                }
              }
              local_40 = local_40 + 1;
              puVar12 = puVar12 + 3;
            } while (local_40 != iVar7);
            local_40 = -1;
LAB_040ab2f2:
            *psVar16 = local_30;
            psVar16[-1] = 0x40ab2fd;
            local_44 = malloc(*psVar16);
            sVar18 = uVar15 - uVar11;
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (int)local_44 + sVar18;
            psVar16[-1] = 0x40ab31d;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            if (local_38 == -1) {
              local_4c = local_30;
              goto LAB_040ab4ed;
            }
            if (sVar18 != 0) {
              sVar21 = *(size_t *)(param_1 + 0xe44 + local_38 * 0xc);
              psVar16[2] = sVar18;
              psVar16[1] = sVar21;
              *psVar16 = (size_t)local_44;
              psVar16[-1] = 0x40ab82b;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            sVar21 = (local_30 + uVar11) - (uVar15 + local_4c);
            if (sVar21 != 0) {
              iVar7 = param_1 + local_48 * 0xc;
              iVar13 = *(int *)(iVar7 + 0xe40);
              if (local_30 + uVar11 != *(int *)(iVar7 + 0xe3c) + iVar13) {
                psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
                psVar16[2] = 0x71;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                ;
                *psVar16 = (size_t)
                           "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                ;
                psVar16[-1] = 0x40ab382;
                FUN_0400a810();
                iVar13 = *(int *)(param_1 + 0xe40 + local_48 * 0xc);
              }
              iVar7 = *(int *)(param_1 + 0xe44 + local_48 * 0xc);
              psVar16[2] = sVar21;
              *psVar16 = local_4c + sVar18 + (int)local_44;
              psVar16[1] = (iVar13 - sVar21) + iVar7;
              psVar16[-1] = 0x40ab3bc;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            if (local_38 <= (int)local_48) {
              puVar22 = (undefined4 *)(param_1 + 0xe44 + local_38 * 0xc);
              iVar7 = local_38;
              do {
                uVar6 = *puVar22;
                iVar7 = iVar7 + 1;
                puVar22 = puVar22 + 3;
                *psVar16 = uVar6;
                psVar16[-1] = 0x40ab3f7;
                free((void *)*psVar16);
              } while (iVar7 <= (int)local_48);
            }
            uVar15 = (local_48 + 1) - local_38;
            iVar7 = param_1 + 0xe38 + local_38 * 0xc;
            *(uint *)(iVar7 + 4) = uVar11;
            *(size_t *)(iVar7 + 8) = local_30;
            *(void **)(iVar7 + 0xc) = local_44;
            if (1 < uVar15) {
              if (local_40 != -1) {
                psVar16[2] = (*(int *)(param_1 + 0xe38) - local_40) * 0xc;
                psVar16[1] = param_1 + 0xe3c + local_40 * 0xc;
                *psVar16 = param_1 + 0xe3c + (local_38 * 3 + 3) * 4;
                psVar16[-1] = 0x40ab46b;
                memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              }
              *(uint *)(param_1 + 0xe38) = (*(int *)(param_1 + 0xe38) + 1) - uVar15;
            }
          }
LAB_040aaa7a:
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aaa85;
          free((void *)*psVar16);
        }
      }
      iVar7 = *(int *)(param_1 + 0xefc);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0xefc + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffff0;
          *psVar16 = uVar6;
          psVar16[1] = (uVar11 & 0xfffffff0) + iVar3 + 0x749c;
          psVar16[-1] = 0x40a9d1b;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) != 0) {
        iVar14 = 0;
        iVar7 = *(int *)(param_1 + 0xefc);
        iVar13 = *(int *)(iVar3 + 0x75e0);
        if (iVar7 != 0) {
          iVar14 = iVar7 * 3 + -3;
          iVar14 = *(int *)(param_1 + 0xf04 + iVar14 * 4) + *(int *)(param_1 + 0xf00 + iVar14 * 4);
        }
        local_4c = iVar13 * 0x10 - iVar14;
        if (local_4c != 0) {
          iVar14 = 0;
          uVar11 = 0;
          if (iVar7 != 0) {
            iVar7 = iVar7 * 3 + -3;
            uVar11 = (uint)(*(int *)(param_1 + 0xf04 + iVar7 * 4) +
                           *(int *)(param_1 + 0xf00 + iVar7 * 4)) >> 4;
            iVar14 = uVar11 << 4;
          }
          *psVar16 = local_4c;
          psVar16[-1] = 0x40aa727;
          pvVar10 = malloc(*psVar16);
          psVar16[2] = (iVar13 - uVar11) * 0x10;
          psVar16[1] = iVar3 + 0x749c + iVar14;
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa747;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar7 = *(int *)(param_1 + 0xefc);
          if (iVar7 == 0) {
            uVar11 = 0;
            *psVar16 = local_4c;
            psVar16[-1] = 0x40ab284;
            local_44 = malloc(*psVar16);
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (size_t)local_44;
            psVar16[-1] = 0x40ab29d;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            local_40 = -1;
LAB_040ab2a4:
            uVar15 = *(int *)(param_1 + 0xefc) + 1;
            *(uint *)(param_1 + 0xefc) = uVar15;
            if (0x10 < uVar15) {
              psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
              psVar16[2] = 0x89;
              psVar16[1] = (size_t)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
              ;
              *psVar16 = (size_t)"mChunkCount <= 16";
              psVar16[-1] = 0x40abab2;
              FUN_0400a810();
              uVar15 = *(uint *)(param_1 + 0xefc);
            }
            if (local_40 == -1) {
              iVar7 = param_1 + 0xefc + (uVar15 * 3 + -3) * 4;
              *(uint *)(iVar7 + 4) = uVar11;
              *(size_t *)(iVar7 + 8) = local_4c;
              *(void **)(iVar7 + 0xc) = local_44;
            }
            else {
              iVar7 = param_1 + 0xefc + local_40 * 0xc;
              psVar16[2] = (uVar15 - local_40) * 0xc - 0xc;
              psVar16[1] = iVar7 + 4;
              *psVar16 = param_1 + 0xf00 + (local_40 * 3 + 3) * 4;
              psVar16[-1] = 0x40ab9d9;
              memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              *(uint *)(iVar7 + 4) = uVar11;
              *(void **)(iVar7 + 0xc) = local_44;
              *(size_t *)(iVar7 + 8) = local_4c;
            }
          }
          else {
            iVar13 = iVar7 * 3 + -3;
            local_48 = -1;
            local_38 = -1;
            local_40 = 0;
            uVar15 = *(int *)(param_1 + 0xf04 + iVar13 * 4) + *(int *)(param_1 + 0xf00 + iVar13 * 4)
            ;
            puVar12 = (uint *)(param_1 + 0xf00);
            uVar11 = uVar15;
            local_30 = local_4c;
            do {
              uVar5 = *puVar12;
              uVar17 = puVar12[1] + uVar5;
              if (uVar11 <= uVar17) {
                uVar20 = local_30 + uVar11;
                if (uVar20 < uVar5) goto LAB_040aaede;
                if (local_38 == -1) {
                  local_38 = local_40;
                }
                if (uVar5 < uVar11) {
                  local_30 = uVar20 - uVar5;
                  uVar11 = uVar5;
                }
                if (uVar20 < uVar17) {
                  local_30 = uVar17 - uVar11;
                }
                local_48 = local_40;
                if ((uVar5 == uVar11) && (uVar17 == local_30 + uVar5)) {
                  iVar7 = *(int *)(param_1 + 0xf08 + local_40 * 0xc);
                  psVar16[2] = local_4c;
                  psVar16[1] = (size_t)pvVar10;
                  *psVar16 = (uVar15 - uVar5) + iVar7;
                  psVar16[-1] = 0x40aa972;
                  memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
                  goto LAB_040aa972;
                }
              }
              local_40 = local_40 + 1;
              puVar12 = puVar12 + 3;
            } while (local_40 != iVar7);
            local_40 = -1;
LAB_040aaede:
            *psVar16 = local_30;
            psVar16[-1] = 0x40aaee9;
            local_44 = malloc(*psVar16);
            sVar18 = uVar15 - uVar11;
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (int)local_44 + sVar18;
            psVar16[-1] = 0x40aaf09;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            if (local_38 == -1) {
              local_4c = local_30;
              goto LAB_040ab2a4;
            }
            if (sVar18 != 0) {
              sVar21 = *(size_t *)(param_1 + 0xf08 + local_38 * 0xc);
              psVar16[2] = sVar18;
              psVar16[1] = sVar21;
              *psVar16 = (size_t)local_44;
              psVar16[-1] = 0x40ab8a4;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            sVar21 = (local_30 + uVar11) - (uVar15 + local_4c);
            if (sVar21 != 0) {
              iVar7 = param_1 + local_48 * 0xc;
              iVar13 = *(int *)(iVar7 + 0xf04);
              if (local_30 + uVar11 != *(int *)(iVar7 + 0xf00) + iVar13) {
                psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
                psVar16[2] = 0x71;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                ;
                *psVar16 = (size_t)
                           "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                ;
                psVar16[-1] = 0x40aaf6e;
                FUN_0400a810();
                iVar13 = *(int *)(param_1 + 0xf04 + local_48 * 0xc);
              }
              iVar7 = *(int *)(param_1 + 0xf08 + local_48 * 0xc);
              psVar16[2] = sVar21;
              *psVar16 = local_4c + sVar18 + (int)local_44;
              psVar16[1] = (iVar13 - sVar21) + iVar7;
              psVar16[-1] = 0x40aafa8;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            if (local_38 <= (int)local_48) {
              puVar22 = (undefined4 *)(param_1 + 0xf08 + local_38 * 0xc);
              iVar7 = local_38;
              do {
                uVar6 = *puVar22;
                iVar7 = iVar7 + 1;
                puVar22 = puVar22 + 3;
                *psVar16 = uVar6;
                psVar16[-1] = 0x40aafe0;
                free((void *)*psVar16);
              } while (iVar7 <= (int)local_48);
            }
            iVar7 = param_1 + 0xefc + local_38 * 0xc;
            *(uint *)(iVar7 + 4) = uVar11;
            uVar11 = (local_48 + 1) - local_38;
            *(size_t *)(iVar7 + 8) = local_30;
            *(void **)(iVar7 + 0xc) = local_44;
            if (1 < uVar11) {
              if (local_40 != -1) {
                psVar16[2] = (*(int *)(param_1 + 0xefc) - local_40) * 0xc;
                psVar16[1] = param_1 + 0xf00 + local_40 * 0xc;
                *psVar16 = param_1 + 0xf00 + (local_38 * 3 + 3) * 4;
                psVar16[-1] = 0x40ab054;
                memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              }
              *(uint *)(param_1 + 0xefc) = (*(int *)(param_1 + 0xefc) + 1) - uVar11;
            }
          }
LAB_040aa972:
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa97d;
          free((void *)*psVar16);
        }
      }
      iVar7 = *(int *)(param_1 + 0xfc0);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0xfc0 + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffffc;
          *psVar16 = uVar6;
          psVar16[1] = iVar3 + 0x759c + (uVar11 & 0xfffffffc);
          psVar16[-1] = 0x40a9db2;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) != 0) {
        iVar14 = 0;
        iVar7 = *(int *)(param_1 + 0xfc0);
        iVar13 = *(int *)(iVar3 + 0x75e4);
        if (iVar7 != 0) {
          iVar14 = iVar7 * 3 + -3;
          iVar14 = *(int *)(param_1 + 0xfc8 + iVar14 * 4) + *(int *)(param_1 + 0xfc4 + iVar14 * 4);
        }
        local_4c = iVar13 * 4 - iVar14;
        if (local_4c != 0) {
          uVar11 = 0;
          if (iVar7 != 0) {
            iVar7 = iVar7 * 3 + -3;
            uVar11 = (uint)(*(int *)(param_1 + 0xfc8 + iVar7 * 4) +
                           *(int *)(param_1 + 0xfc4 + iVar7 * 4)) >> 2;
          }
          *psVar16 = local_4c;
          psVar16[-1] = 0x40aa825;
          pvVar10 = malloc(*psVar16);
          psVar16[2] = (iVar13 - uVar11) * 4;
          psVar16[1] = iVar3 + 0x759c + uVar11 * 4;
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa84c;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar7 = *(int *)(param_1 + 0xfc0);
          if (iVar7 == 0) {
            *psVar16 = local_4c;
            psVar16[-1] = 0x40aae6e;
            local_44 = malloc(*psVar16);
            psVar16[2] = local_4c;
            uVar11 = 0;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (size_t)local_44;
            psVar16[-1] = 0x40aae89;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            local_40 = -1;
LAB_040aae90:
            uVar15 = *(int *)(param_1 + 0xfc0) + 1;
            *(uint *)(param_1 + 0xfc0) = uVar15;
            if (0x10 < uVar15) {
              psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
              psVar16[2] = 0x89;
              psVar16[1] = (size_t)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
              ;
              *psVar16 = (size_t)"mChunkCount <= 16";
                    /* try { // try from 040abb1d to 040abb7f has its CatchHandler @ 040abaec */
              psVar16[-1] = 0x40abb22;
              FUN_0400a810();
              uVar15 = *(uint *)(param_1 + 0xfc0);
            }
            if (local_40 == -1) {
              iVar7 = param_1 + 0xfc0 + (uVar15 * 3 + -3) * 4;
              *(uint *)(iVar7 + 4) = uVar11;
              *(size_t *)(iVar7 + 8) = local_4c;
              *(void **)(iVar7 + 0xc) = local_44;
            }
            else {
              iVar7 = param_1 + 0xfc0 + local_40 * 0xc;
              psVar16[2] = (uVar15 - local_40) * 0xc - 0xc;
              psVar16[1] = iVar7 + 4;
              *psVar16 = param_1 + 0xfc4 + (local_40 * 3 + 3) * 4;
              psVar16[-1] = 0x40ab86d;
              memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              *(uint *)(iVar7 + 4) = uVar11;
              *(void **)(iVar7 + 0xc) = local_44;
              *(size_t *)(iVar7 + 8) = local_4c;
            }
          }
          else {
            iVar13 = iVar7 * 3 + -3;
            local_48 = -1;
            local_40 = 0;
            local_38 = -1;
            uVar15 = *(int *)(param_1 + 0xfc8 + iVar13 * 4) + *(int *)(param_1 + 0xfc4 + iVar13 * 4)
            ;
            puVar12 = (uint *)(param_1 + 0xfc4);
            uVar11 = uVar15;
            local_30 = local_4c;
            do {
              uVar5 = *puVar12;
              uVar17 = puVar12[1] + uVar5;
              if (uVar11 <= uVar17) {
                uVar20 = local_30 + uVar11;
                if (uVar20 < uVar5) goto LAB_040aacd4;
                if (local_38 == -1) {
                  local_38 = local_40;
                }
                if (uVar5 < uVar11) {
                  local_30 = uVar20 - uVar5;
                  uVar11 = uVar5;
                }
                if (uVar20 < uVar17) {
                  local_30 = uVar17 - uVar11;
                }
                local_48 = local_40;
                if ((uVar5 == uVar11) && (uVar17 == local_30 + uVar5)) {
                  iVar7 = *(int *)(param_1 + 0xfcc + local_40 * 0xc);
                  psVar16[2] = local_4c;
                  psVar16[1] = (size_t)pvVar10;
                  *psVar16 = (uVar15 - uVar5) + iVar7;
                  psVar16[-1] = 0x40aa9b4;
                  memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
                  goto LAB_040aa9b4;
                }
              }
              local_40 = local_40 + 1;
              puVar12 = puVar12 + 3;
            } while (local_40 != iVar7);
            local_40 = -1;
LAB_040aacd4:
            *psVar16 = local_30;
            psVar16[-1] = 0x40aacdf;
            local_44 = malloc(*psVar16);
            sVar18 = uVar15 - uVar11;
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (int)local_44 + sVar18;
            psVar16[-1] = 0x40aacff;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            if (local_38 == -1) {
              local_4c = local_30;
              goto LAB_040aae90;
            }
            if (sVar18 != 0) {
              sVar21 = *(size_t *)(param_1 + 0xfcc + local_38 * 0xc);
              psVar16[2] = sVar18;
              psVar16[1] = sVar21;
              *psVar16 = (size_t)local_44;
              psVar16[-1] = 0x40aba10;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            sVar21 = (local_30 + uVar11) - (uVar15 + local_4c);
            if (sVar21 != 0) {
              iVar7 = param_1 + local_48 * 0xc;
              iVar13 = *(int *)(iVar7 + 0xfc8);
              if (local_30 + uVar11 != *(int *)(iVar7 + 0xfc4) + iVar13) {
                psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
                psVar16[2] = 0x71;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                ;
                *psVar16 = (size_t)
                           "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                ;
                psVar16[-1] = 0x40aad64;
                FUN_0400a810();
                iVar13 = *(int *)(param_1 + 0xfc8 + local_48 * 0xc);
              }
              iVar7 = *(int *)(param_1 + 0xfcc + local_48 * 0xc);
              psVar16[2] = sVar21;
              *psVar16 = local_4c + sVar18 + (int)local_44;
              psVar16[1] = (iVar13 - sVar21) + iVar7;
              psVar16[-1] = 0x40aad9e;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            if (local_38 <= (int)local_48) {
              puVar22 = (undefined4 *)(param_1 + 0xfcc + local_38 * 0xc);
              iVar7 = local_38;
              do {
                uVar6 = *puVar22;
                iVar7 = iVar7 + 1;
                puVar22 = puVar22 + 3;
                *psVar16 = uVar6;
                psVar16[-1] = 0x40aadd6;
                free((void *)*psVar16);
              } while (iVar7 <= (int)local_48);
            }
            iVar7 = param_1 + 0xfc0 + local_38 * 0xc;
            *(uint *)(iVar7 + 4) = uVar11;
            uVar11 = (local_48 + 1) - local_38;
            *(size_t *)(iVar7 + 8) = local_30;
            *(void **)(iVar7 + 0xc) = local_44;
            if (1 < uVar11) {
              if (local_40 != -1) {
                psVar16[2] = (*(int *)(param_1 + 0xfc0) - local_40) * 0xc;
                psVar16[1] = param_1 + 0xfc4 + local_40 * 0xc;
                *psVar16 = param_1 + 0xfc4 + (local_38 * 3 + 3) * 4;
                psVar16[-1] = 0x40aae4a;
                memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              }
              *(uint *)(param_1 + 0xfc0) = (*(int *)(param_1 + 0xfc0) + 1) - uVar11;
            }
          }
LAB_040aa9b4:
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa9bf;
          free((void *)*psVar16);
        }
      }
      iVar7 = *(int *)(param_1 + 0x1084);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0x1084 + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffff0;
          *psVar16 = uVar6;
          psVar16[1] = (uVar11 & 0xfffffff0) + iVar3 + 0x535c;
          psVar16[-1] = 0x40a9e53;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) != 0) {
        iVar14 = 0;
        iVar7 = *(int *)(param_1 + 0x1084);
        iVar13 = *(int *)(iVar3 + 0x75e8);
        if (iVar7 != 0) {
          iVar14 = iVar7 * 3 + -3;
          iVar14 = *(int *)(param_1 + 0x108c + iVar14 * 4) + *(int *)(param_1 + 0x1088 + iVar14 * 4)
          ;
        }
        local_4c = iVar13 * 0x10 - iVar14;
        if (local_4c != 0) {
          iVar14 = 0;
          uVar11 = 0;
          if (iVar7 != 0) {
            iVar7 = iVar7 * 3 + -3;
            uVar11 = (uint)(*(int *)(param_1 + 0x108c + iVar7 * 4) +
                           *(int *)(param_1 + 0x1088 + iVar7 * 4)) >> 4;
            iVar14 = uVar11 << 4;
          }
          *psVar16 = local_4c;
          psVar16[-1] = 0x40aa513;
          pvVar10 = malloc(*psVar16);
          psVar16[2] = (iVar13 - uVar11) * 0x10;
          psVar16[1] = iVar3 + 0x535c + iVar14;
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa533;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar7 = *(int *)(param_1 + 0x1084);
          if (iVar7 == 0) {
            uVar11 = 0;
            *psVar16 = local_4c;
            psVar16[-1] = 0x40ab6da;
            local_44 = malloc(*psVar16);
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (size_t)local_44;
            psVar16[-1] = 0x40ab6f3;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            local_40 = -1;
LAB_040ab6fa:
            uVar15 = *(int *)(param_1 + 0x1084) + 1;
            *(uint *)(param_1 + 0x1084) = uVar15;
            if (0x10 < uVar15) {
              psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
              psVar16[2] = 0x89;
              psVar16[1] = (size_t)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
              ;
              *psVar16 = (size_t)"mChunkCount <= 16";
              psVar16[-1] = 0x40abb80;
              FUN_0400a810();
              uVar15 = *(uint *)(param_1 + 0x1084);
            }
            if (local_40 == -1) {
              iVar7 = param_1 + 0x1084 + (uVar15 * 3 + -3) * 4;
              *(uint *)(iVar7 + 4) = uVar11;
              *(size_t *)(iVar7 + 8) = local_4c;
              *(void **)(iVar7 + 0xc) = local_44;
            }
            else {
              iVar7 = param_1 + 0x1084 + local_40 * 0xc;
              psVar16[2] = (uVar15 - local_40) * 0xc - 0xc;
              psVar16[1] = iVar7 + 4;
              *psVar16 = param_1 + 0x1088 + (local_40 * 3 + 3) * 4;
              psVar16[-1] = 0x40ab988;
              memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              *(uint *)(iVar7 + 4) = uVar11;
              *(void **)(iVar7 + 0xc) = local_44;
              *(size_t *)(iVar7 + 8) = local_4c;
            }
          }
          else {
            iVar13 = iVar7 * 3 + -3;
            local_48 = -1;
            local_38 = -1;
            local_40 = 0;
            uVar15 = *(int *)(param_1 + 0x108c + iVar13 * 4) +
                     *(int *)(param_1 + 0x1088 + iVar13 * 4);
            puVar12 = (uint *)(param_1 + 0x1088);
            uVar11 = uVar15;
            local_30 = local_4c;
            do {
              uVar5 = *puVar12;
              uVar17 = puVar12[1] + uVar5;
              if (uVar11 <= uVar17) {
                uVar20 = local_30 + uVar11;
                if (uVar20 < uVar5) goto LAB_040ab53b;
                if (local_38 == -1) {
                  local_38 = local_40;
                }
                if (uVar5 < uVar11) {
                  local_30 = uVar20 - uVar5;
                  uVar11 = uVar5;
                }
                if (uVar20 < uVar17) {
                  local_30 = uVar17 - uVar11;
                }
                local_48 = local_40;
                if ((uVar5 == uVar11) && (uVar17 == local_30 + uVar5)) {
                  iVar7 = *(int *)(param_1 + 0x1090 + local_40 * 0xc);
                  psVar16[2] = local_4c;
                  psVar16[1] = (size_t)pvVar10;
                  *psVar16 = (uVar15 - uVar5) + iVar7;
                  psVar16[-1] = 0x40aaa38;
                  memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
                  goto LAB_040aaa38;
                }
              }
              local_40 = local_40 + 1;
              puVar12 = puVar12 + 3;
            } while (local_40 != iVar7);
            local_40 = -1;
LAB_040ab53b:
            *psVar16 = local_30;
            psVar16[-1] = 0x40ab546;
            local_44 = malloc(*psVar16);
            sVar18 = uVar15 - uVar11;
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (int)local_44 + sVar18;
            psVar16[-1] = 0x40ab566;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            if (local_38 == -1) {
              local_4c = local_30;
              goto LAB_040ab6fa;
            }
            if (sVar18 != 0) {
              sVar21 = *(size_t *)(param_1 + 0x1090 + local_38 * 0xc);
              psVar16[2] = sVar18;
              psVar16[1] = sVar21;
              *psVar16 = (size_t)local_44;
              psVar16[-1] = 0x40aba38;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            sVar21 = (local_30 + uVar11) - (uVar15 + local_4c);
            if (sVar21 != 0) {
              iVar7 = param_1 + local_48 * 0xc;
              iVar13 = *(int *)(iVar7 + 0x108c);
              if (local_30 + uVar11 != *(int *)(iVar7 + 0x1088) + iVar13) {
                psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
                psVar16[2] = 0x71;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                ;
                *psVar16 = (size_t)
                           "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                ;
                psVar16[-1] = 0x40ab5cb;
                FUN_0400a810();
                iVar13 = *(int *)(param_1 + 0x108c + local_48 * 0xc);
              }
              iVar7 = *(int *)(param_1 + 0x1090 + local_48 * 0xc);
              psVar16[2] = sVar21;
              *psVar16 = local_4c + sVar18 + (int)local_44;
              psVar16[1] = (iVar13 - sVar21) + iVar7;
              psVar16[-1] = 0x40ab605;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            if (local_38 <= (int)local_48) {
              puVar22 = (undefined4 *)(param_1 + 0x1090 + local_38 * 0xc);
              iVar7 = local_38;
              do {
                uVar6 = *puVar22;
                iVar7 = iVar7 + 1;
                puVar22 = puVar22 + 3;
                *psVar16 = uVar6;
                psVar16[-1] = 0x40ab640;
                free((void *)*psVar16);
              } while (iVar7 <= (int)local_48);
            }
            uVar15 = (local_48 + 1) - local_38;
            iVar7 = param_1 + 0x1084 + local_38 * 0xc;
            *(uint *)(iVar7 + 4) = uVar11;
            *(size_t *)(iVar7 + 8) = local_30;
            *(void **)(iVar7 + 0xc) = local_44;
            if (1 < uVar15) {
              if (local_40 != -1) {
                psVar16[2] = (*(int *)(param_1 + 0x1084) - local_40) * 0xc;
                psVar16[1] = param_1 + 0x1088 + local_40 * 0xc;
                *psVar16 = param_1 + 0x1088 + (local_38 * 3 + 3) * 4;
                psVar16[-1] = 0x40ab6b4;
                memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              }
              *(uint *)(param_1 + 0x1084) = (*(int *)(param_1 + 0x1084) + 1) - uVar15;
            }
          }
LAB_040aaa38:
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aaa43;
          free((void *)*psVar16);
        }
      }
      iVar7 = *(int *)(param_1 + 0x1148);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0x1148 + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffff0;
          *psVar16 = uVar6;
          psVar16[1] = (uVar11 & 0xfffffff0) + iVar3 + 0x635c;
          psVar16[-1] = 0x40a9eeb;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) != 0) {
        iVar14 = 0;
        iVar7 = *(int *)(param_1 + 0x1148);
        iVar13 = *(int *)(iVar3 + 0x75ec);
        if (iVar7 != 0) {
          iVar14 = iVar7 * 3 + -3;
          iVar14 = *(int *)(param_1 + 0x1150 + iVar14 * 4) + *(int *)(param_1 + 0x114c + iVar14 * 4)
          ;
        }
        local_4c = iVar13 * 0x10 - iVar14;
        if (local_4c != 0) {
          iVar14 = 0;
          uVar11 = 0;
          if (iVar7 != 0) {
            iVar7 = iVar7 * 3 + -3;
            uVar11 = (uint)(*(int *)(param_1 + 0x1150 + iVar7 * 4) +
                           *(int *)(param_1 + 0x114c + iVar7 * 4)) >> 4;
            iVar14 = uVar11 << 4;
          }
          *psVar16 = local_4c;
          psVar16[-1] = 0x40aa409;
          pvVar10 = malloc(*psVar16);
          psVar16[2] = (iVar13 - uVar11) * 0x10;
          psVar16[1] = iVar3 + 0x635c + iVar14;
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aa429;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar7 = *(int *)(param_1 + 0x1148);
          if (iVar7 == 0) {
            uVar11 = 0;
            *psVar16 = local_4c;
            psVar16[-1] = 0x40ab07a;
            local_44 = malloc(*psVar16);
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (size_t)local_44;
            psVar16[-1] = 0x40ab093;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            local_40 = -1;
LAB_040ab09a:
            uVar15 = *(int *)(param_1 + 0x1148) + 1;
            *(uint *)(param_1 + 0x1148) = uVar15;
            if (0x10 < uVar15) {
              psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
              psVar16[2] = 0x89;
              psVar16[1] = (size_t)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
              ;
              *psVar16 = (size_t)"mChunkCount <= 16";
              psVar16[-1] = 0x40abb51;
              FUN_0400a810();
              uVar15 = *(uint *)(param_1 + 0x1148);
            }
            if (local_40 == -1) {
              iVar7 = param_1 + 0x1148 + (uVar15 * 3 + -3) * 4;
              *(uint *)(iVar7 + 4) = uVar11;
              *(size_t *)(iVar7 + 8) = local_4c;
              *(void **)(iVar7 + 0xc) = local_44;
            }
            else {
              iVar7 = param_1 + 0x1148 + local_40 * 0xc;
              psVar16[2] = (uVar15 - local_40) * 0xc - 0xc;
              psVar16[1] = iVar7 + 4;
              *psVar16 = param_1 + 0x114c + (local_40 * 3 + 3) * 4;
              psVar16[-1] = 0x40ab937;
              memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              *(uint *)(iVar7 + 4) = uVar11;
              *(void **)(iVar7 + 0xc) = local_44;
              *(size_t *)(iVar7 + 8) = local_4c;
            }
          }
          else {
            iVar13 = iVar7 * 3 + -3;
            local_48 = -1;
            local_38 = -1;
            local_40 = 0;
            uVar15 = *(int *)(param_1 + 0x1150 + iVar13 * 4) +
                     *(int *)(param_1 + 0x114c + iVar13 * 4);
            puVar12 = (uint *)(param_1 + 0x114c);
            uVar11 = uVar15;
            local_30 = local_4c;
            do {
              uVar5 = *puVar12;
              uVar17 = puVar12[1] + uVar5;
              if (uVar11 <= uVar17) {
                uVar20 = local_30 + uVar11;
                if (uVar20 < uVar5) goto LAB_040ab0e8;
                if (local_38 == -1) {
                  local_38 = local_40;
                }
                if (uVar5 < uVar11) {
                  local_30 = uVar20 - uVar5;
                  uVar11 = uVar5;
                }
                if (uVar20 < uVar17) {
                  local_30 = uVar17 - uVar11;
                }
                local_48 = local_40;
                if ((uVar5 == uVar11) && (uVar17 == local_30 + uVar5)) {
                  iVar7 = *(int *)(param_1 + 0x1154 + local_40 * 0xc);
                  psVar16[2] = local_4c;
                  psVar16[1] = (size_t)pvVar10;
                  *psVar16 = (uVar15 - uVar5) + iVar7;
                  psVar16[-1] = 0x40aa9f6;
                  memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
                  goto LAB_040aa9f6;
                }
              }
              local_40 = local_40 + 1;
              puVar12 = puVar12 + 3;
            } while (local_40 != iVar7);
            local_40 = -1;
LAB_040ab0e8:
            *psVar16 = local_30;
            psVar16[-1] = 0x40ab0f3;
            local_44 = malloc(*psVar16);
            sVar18 = uVar15 - uVar11;
            psVar16[2] = local_4c;
            psVar16[1] = (size_t)pvVar10;
            *psVar16 = (int)local_44 + sVar18;
            psVar16[-1] = 0x40ab113;
            memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            if (local_38 == -1) {
              local_4c = local_30;
              goto LAB_040ab09a;
            }
            if (sVar18 != 0) {
              sVar21 = *(size_t *)(param_1 + 0x1154 + local_38 * 0xc);
              psVar16[2] = sVar18;
              psVar16[1] = sVar21;
              *psVar16 = (size_t)local_44;
              psVar16[-1] = 0x40ab803;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            sVar21 = (local_30 + uVar11) - (uVar15 + local_4c);
            if (sVar21 != 0) {
              iVar7 = param_1 + local_48 * 0xc;
              iVar13 = *(int *)(iVar7 + 0x1150);
              if (local_30 + uVar11 != *(int *)(iVar7 + 0x114c) + iVar13) {
                psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
                psVar16[2] = 0x71;
                psVar16[1] = (size_t)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                ;
                *psVar16 = (size_t)
                           "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                ;
                psVar16[-1] = 0x40ab178;
                FUN_0400a810();
                iVar13 = *(int *)(param_1 + 0x1150 + local_48 * 0xc);
              }
              iVar7 = *(int *)(param_1 + 0x1154 + local_48 * 0xc);
              psVar16[2] = sVar21;
              *psVar16 = local_4c + sVar18 + (int)local_44;
              psVar16[1] = (iVar13 - sVar21) + iVar7;
              psVar16[-1] = 0x40ab1b2;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
            }
            if (local_38 <= (int)local_48) {
              puVar22 = (undefined4 *)(param_1 + 0x1154 + local_38 * 0xc);
              iVar7 = local_38;
              do {
                uVar6 = *puVar22;
                iVar7 = iVar7 + 1;
                puVar22 = puVar22 + 3;
                *psVar16 = uVar6;
                psVar16[-1] = 0x40ab1ea;
                free((void *)*psVar16);
              } while (iVar7 <= (int)local_48);
            }
            iVar7 = param_1 + 0x1148 + local_38 * 0xc;
            *(uint *)(iVar7 + 4) = uVar11;
            uVar11 = (local_48 + 1) - local_38;
            *(size_t *)(iVar7 + 8) = local_30;
            *(void **)(iVar7 + 0xc) = local_44;
            if (1 < uVar11) {
              if (local_40 != -1) {
                psVar16[2] = (*(int *)(param_1 + 0x1148) - local_40) * 0xc;
                psVar16[1] = param_1 + 0x114c + local_40 * 0xc;
                *psVar16 = param_1 + 0x114c + (local_38 * 3 + 3) * 4;
                psVar16[-1] = 0x40ab25e;
                memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              }
              *(uint *)(param_1 + 0x1148) = (*(int *)(param_1 + 0x1148) + 1) - uVar11;
            }
          }
LAB_040aa9f6:
          *psVar16 = (size_t)pvVar10;
          psVar16[-1] = 0x40aaa01;
          free((void *)*psVar16);
        }
      }
      iVar7 = *(int *)(param_1 + 0x120c);
      if (iVar7 != 0) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar13 = param_1 + 0x120c + iVar13 * 0xc;
          uVar6 = *(undefined4 *)(iVar13 + 0xc);
          uVar11 = *(uint *)(iVar13 + 4);
          psVar16[2] = *(uint *)(iVar13 + 8) & 0xfffffffc;
          *psVar16 = uVar6;
          psVar16[1] = iVar3 + 0x645c + (uVar11 & 0xfffffffc);
          psVar16[-1] = 0x40a9f82;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          iVar13 = iVar14;
        } while (iVar14 != iVar7);
      }
      if (*(int *)(param_1 + 0xe34) == 0) {
        uVar11 = 0;
        goto LAB_040a84fd;
      }
      iVar7 = *(int *)(param_1 + 0x120c);
      iVar14 = 0;
      iVar13 = *(int *)(iVar3 + 0x75f0);
      if (iVar7 != 0) {
        iVar14 = iVar7 * 3 + -3;
        iVar14 = *(int *)(param_1 + 0x1214 + iVar14 * 4) + *(int *)(param_1 + 0x1210 + iVar14 * 4);
      }
      uVar11 = 0;
      local_48 = iVar13 * 4 - iVar14;
      if (local_48 == 0) goto LAB_040a84fd;
      if (iVar7 != 0) {
        iVar7 = iVar7 * 3 + -3;
        uVar11 = (uint)(*(int *)(param_1 + 0x1214 + iVar7 * 4) +
                       *(int *)(param_1 + 0x1210 + iVar7 * 4)) >> 2;
      }
      *psVar16 = local_48;
      psVar16[-1] = 0x40a9fff;
      pvVar10 = malloc(*psVar16);
      psVar16[2] = (iVar13 - uVar11) * 4;
      psVar16[1] = iVar3 + 0x645c + uVar11 * 4;
      *psVar16 = (size_t)pvVar10;
      psVar16[-1] = 0x40aa026;
      memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
      iVar3 = *(int *)(param_1 + 0x120c);
      if (iVar3 == 0) {
        uVar11 = 0;
        *psVar16 = local_48;
        psVar16[-1] = 0x40aaa97;
        local_3c = malloc(*psVar16);
        psVar16[2] = local_48;
        psVar16[1] = (size_t)pvVar10;
        *psVar16 = (size_t)local_3c;
        psVar16[-1] = 0x40aaab0;
        memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
        local_34 = -1;
LAB_040aaab7:
        uVar15 = *(int *)(param_1 + 0x120c) + 1;
        *(uint *)(param_1 + 0x120c) = uVar15;
        if (0x10 < uVar15) {
          psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
          psVar16[2] = 0x89;
          psVar16[1] = (size_t)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
          ;
          *psVar16 = (size_t)"mChunkCount <= 16";
          psVar16[-1] = 0x40aab2b;
          FUN_0400a810();
          uVar15 = *(uint *)(param_1 + 0x120c);
        }
        if (local_34 == -1) {
          iVar3 = param_1 + 0x120c + (uVar15 * 3 + -3) * 4;
          *(uint *)(iVar3 + 4) = uVar11;
          *(void **)(iVar3 + 0xc) = local_3c;
          *(size_t *)(iVar3 + 8) = local_48;
        }
        else {
          iVar3 = param_1 + 0x120c + local_34 * 0xc;
          psVar16[2] = (uVar15 - local_34) * 0xc - 0xc;
          psVar16[1] = iVar3 + 4;
          *psVar16 = param_1 + 0x1210 + (local_34 * 3 + 3) * 4;
          psVar16[-1] = 0x40ab8e6;
          memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          *(uint *)(iVar3 + 4) = uVar11;
          *(void **)(iVar3 + 0xc) = local_3c;
          *(size_t *)(iVar3 + 8) = local_48;
        }
      }
      else {
        iVar7 = iVar3 * 3 + -3;
        local_38 = -1;
        local_30 = -1;
        local_34 = 0;
        puVar12 = (uint *)(param_1 + 0x1210);
        uVar15 = *(int *)(param_1 + 0x1214 + iVar7 * 4) + *(int *)(param_1 + 0x1210 + iVar7 * 4);
        uVar11 = uVar15;
        local_50 = local_48;
        do {
          uVar5 = *puVar12;
          uVar17 = puVar12[1] + uVar5;
          if (uVar11 <= uVar17) {
            uVar20 = local_50 + uVar11;
            if (uVar20 < uVar5) goto LAB_040aab42;
            if (local_30 == -1) {
              local_30 = local_34;
            }
            if (uVar5 < uVar11) {
              local_50 = uVar20 - uVar5;
              uVar11 = uVar5;
            }
            if (uVar20 < uVar17) {
              local_50 = uVar17 - uVar11;
            }
            local_38 = local_34;
            if ((uVar5 == uVar11) && (uVar17 == local_50 + uVar5)) {
              iVar3 = *(int *)(param_1 + 0x1218 + local_34 * 0xc);
              psVar16[2] = local_48;
              psVar16[1] = (size_t)pvVar10;
              *psVar16 = (uVar15 - uVar5) + iVar3;
              psVar16[-1] = 0x40aa932;
              memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
              goto LAB_040aaaf5;
            }
          }
          local_34 = local_34 + 1;
          puVar12 = puVar12 + 3;
        } while (local_34 != iVar3);
        local_34 = -1;
LAB_040aab42:
        *psVar16 = local_50;
        psVar16[-1] = 0x40aab4a;
        local_3c = malloc(*psVar16);
        sVar18 = uVar15 - uVar11;
        psVar16[2] = local_48;
        psVar16[1] = (size_t)pvVar10;
        *psVar16 = (int)local_3c + sVar18;
        psVar16[-1] = 0x40aab6a;
        memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
        if (local_30 == -1) {
          local_48 = local_50;
          goto LAB_040aaab7;
        }
        if (sVar18 != 0) {
          sVar21 = *(size_t *)(param_1 + 0x1218 + local_30 * 0xc);
          psVar16[2] = sVar18;
          psVar16[1] = sVar21;
          *psVar16 = (size_t)local_3c;
          psVar16[-1] = 0x40ab787;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
        }
        sVar21 = (local_50 + uVar11) - (uVar15 + local_48);
        if (sVar21 != 0) {
          iVar3 = param_1 + local_38 * 0xc;
          iVar7 = *(int *)(iVar3 + 0x1214);
          if (local_50 + uVar11 != *(int *)(iVar3 + 0x1210) + iVar7) {
            psVar16[3] = (size_t)"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)";
            psVar16[2] = 0x71;
            psVar16[1] = (size_t)
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
            ;
            *psVar16 = (size_t)
                       "mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
            ;
            psVar16[-1] = 0x40aabcf;
            FUN_0400a810();
            iVar7 = *(int *)(param_1 + 0x1214 + local_38 * 0xc);
          }
          iVar3 = *(int *)(param_1 + 0x1218 + local_38 * 0xc);
          psVar16[2] = sVar21;
          *psVar16 = local_48 + sVar18 + (int)local_3c;
          psVar16[1] = (iVar7 - sVar21) + iVar3;
          psVar16[-1] = 0x40aac09;
          memcpy((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
        }
        if ((int)local_30 <= local_38) {
          puVar22 = (undefined4 *)(param_1 + 0x1218 + local_30 * 0xc);
          sVar18 = local_30;
          do {
            uVar6 = *puVar22;
            sVar18 = sVar18 + 1;
            puVar22 = puVar22 + 3;
            *psVar16 = uVar6;
            psVar16[-1] = 0x40aac40;
            free((void *)*psVar16);
          } while ((int)sVar18 <= local_38);
        }
        iVar3 = param_1 + 0x120c + local_30 * 0xc;
        *(uint *)(iVar3 + 4) = uVar11;
        uVar11 = (local_38 + 1) - local_30;
        *(size_t *)(iVar3 + 8) = local_50;
        *(void **)(iVar3 + 0xc) = local_3c;
        if (1 < uVar11) {
          if (local_34 != -1) {
            psVar16[2] = (*(int *)(param_1 + 0x120c) - local_34) * 0xc;
            psVar16[1] = param_1 + 0x1210 + local_34 * 0xc;
            *psVar16 = param_1 + 0x1210 + (local_30 * 3 + 3) * 4;
            psVar16[-1] = 0x40aacb4;
            memmove((void *)*psVar16,(void *)psVar16[1],psVar16[2]);
          }
          *(uint *)(param_1 + 0x120c) = (*(int *)(param_1 + 0x120c) + 1) - uVar11;
        }
      }
LAB_040aaaf5:
      uVar11 = 0;
      *psVar16 = (size_t)pvVar10;
      psVar16[-1] = 0x40aab02;
      free((void *)*psVar16);
      goto LAB_040a84fd;
    }
  }
LAB_040a84f8:
  uVar11 = 0x8876086c;
LAB_040a84fd:
  if (*(int *)(param_1 + 0x10) != 0) {
    *psVar16 = *(int *)(param_1 + 0x10) + 0x40;
    psVar16[-1] = 0x40a8511;
    direct3ddevice9imp_04080490();
  }
  return uVar11;
}

// --- Direct3DStateBlock9Imp::SetSamplerState @0x04073780 ---
/* source: direct3ddevice9imp, direct3dstateblock9imp */

undefined4
Direct3DStateBlock9Imp__SetSamplerState(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uStack_50;
  int local_4c [7];
  int local_30;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  piVar8 = local_4c;
  iVar3 = *(int *)(param_1 + 0xc);
  local_24 = iVar3;
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0xebbc) == '\0') {
      piVar8 = local_4c;
      piVar4 = local_4c;
      if (*(int *)(iVar3 + 0xec64) == 0) goto LAB_040737ba;
LAB_0407391f:
      local_30 = *(int *)(iVar3 + 0xebc0);
      piVar8[-1] = 0x407392d;
      iVar6 = FUN_0415b750();
      if (local_30 != iVar6) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3b3;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        piVar8[-1] = 0x407395a;
        FUN_0400a810();
      }
    }
    else {
      local_4c[0] = iVar3 + 0xebc4;
      uStack_50 = 0x407390e;
      EnterCriticalSection();
      piVar8 = &uStack_50;
      piVar4 = &uStack_50;
      if (*(int *)(iVar3 + 0xec64) != 0) goto LAB_0407391f;
LAB_040737ba:
      piVar8 = piVar4;
      if (*(int *)(iVar3 + 0xebc0) != 0) {
        piVar8[3] = (int)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        piVar8[2] = 0x3ae;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *piVar8 = (int)"!mCurrentD3D9Thread";
        piVar8[-1] = 0x40738f4;
        FUN_0400a810();
      }
      piVar8[-1] = 0x40737cd;
      uVar5 = FUN_0415b750();
      *(undefined4 *)(iVar3 + 0xebc0) = uVar5;
    }
    *(int *)(iVar3 + 0xec64) = *(int *)(iVar3 + 0xec64) + 1;
  }
  if (param_2 < 0x10) {
    iVar6 = *(int *)(param_1 + 0x75ec);
    iVar3 = param_1 + 0x8ac + param_2 * 0x34;
joined_r0x0407386b:
    if (iVar6 != 0) {
      if (0xc < param_3 - 1) {
        piVar8[3] = (int)
                    "void Direct3DStateBlock9Imp::SetSamplerState(DWORD, D3DSAMPLERSTATETYPE, DWORD)"
        ;
        piVar8[2] = 0x13b;
        piVar8[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
        ;
        *piVar8 = (int)"Type-1 < 13";
        piVar8[-1] = 0x40738c4;
        FUN_0400a810();
      }
      *(undefined4 *)(iVar6 + 0x118) = 1;
      puVar2 = (ushort *)(iVar6 + 0x11c + param_2 * 2);
      *puVar2 = *puVar2 | (ushort)(1 << ((byte)(param_3 - 1) & 0x1f));
      *(uint *)(iVar6 + 4 + (param_3 + 0x4f + param_2 * 0xd) * 4) = param_4;
      uVar5 = 0;
      goto LAB_04073830;
    }
    switch(param_3) {
    default:
      piVar8[1] = (int)"Unrecognized sampler state value: %u!";
      *piVar8 = 0xf;
      piVar8[2] = param_3;
                    /* try { // try from 0407388d to 040738c3 has its CatchHandler @ 04073ae4 */
      piVar8[-1] = 0x4073892;
      FUN_0402cd10();
      goto LAB_04073892;
    case 1:
    case 2:
    case 3:
      if (*(uint *)(iVar3 + (param_3 - 1) * 4) != param_4) {
        *(uint *)(iVar3 + (param_3 - 1) * 4) = param_4;
LAB_040739b0:
        piVar8[3] = 0xc;
        piVar8[2] = 0x1f;
        piVar8[1] = param_1;
        *piVar8 = param_1 + 0xec00;
        piVar8[-1] = 0x40739d2;
        puVar7 = (uint *)D3D9CommandQueue__GetNextCommandPointer();
        *puVar7 = param_2;
        puVar7[1] = param_3;
        puVar7[2] = param_4;
        *piVar8 = param_1 + 0xec00;
        piVar8[-1] = 0x40739e8;
        D3D9CommandQueue__CommandSubmitted();
        uVar5 = 0;
        goto LAB_04073830;
      }
      break;
    case 4:
      if (*(uint *)(iVar3 + 0xc) != param_4) {
        *(uint *)(iVar3 + 0xc) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 5:
      if (*(uint *)(iVar3 + 0x10) != param_4) {
        *(uint *)(iVar3 + 0x10) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 6:
      if (*(uint *)(iVar3 + 0x14) != param_4) {
        *(uint *)(iVar3 + 0x14) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 7:
      if (*(uint *)(iVar3 + 0x18) != param_4) {
        *(uint *)(iVar3 + 0x18) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 8:
      if (*(uint *)(iVar3 + 0x1c) != param_4) {
        *(uint *)(iVar3 + 0x1c) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 9:
      if (*(uint *)(iVar3 + 0x20) != param_4) {
        *(uint *)(iVar3 + 0x20) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 10:
      if (*(uint *)(iVar3 + 0x24) != param_4) {
        *(uint *)(iVar3 + 0x24) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 0xb:
      if (*(uint *)(iVar3 + 0x28) != param_4) {
        *(uint *)(iVar3 + 0x28) = param_4;
        goto LAB_040739b0;
      }
      break;
    case 0xc:
      if (*(uint *)(iVar3 + 0x2c) != param_4) {
        *(uint *)(iVar3 + 0x2c) = param_4;
        piVar8[1] = (int)"Unsupported sampler state: D3DSAMP_ELEMENTINDEX!";
        *piVar8 = 0xf;
                    /* try { // try from 0407398a to 04073a46 has its CatchHandler @ 04073ae4 */
        piVar8[-1] = 0x407398f;
        FUN_0402cd10();
      }
      break;
    case 0xd:
      if (((*(uint *)(iVar3 + 0x30) != param_4) &&
          (*(uint *)(iVar3 + 0x30) = param_4, param_4 != 0x100)) && (param_4 != 0)) {
        piVar8[1] = (int)"Unsupported sampler state: D3DSAMP_DMAPOFFSET!";
        *piVar8 = 0xf;
        piVar8[-1] = 0x4073a47;
        FUN_0402cd10();
        uVar5 = 0;
        goto LAB_04073830;
      }
    }
    uVar5 = 0;
  }
  else {
    uVar1 = param_2 - 0x101;
    if (uVar1 < 4) {
      iVar6 = *(int *)(param_1 + 0x75ec);
      param_2 = param_2 - 0xf1;
      iVar3 = param_1 + 0xbec + uVar1 * 0x34;
      goto joined_r0x0407386b;
    }
LAB_04073892:
    uVar5 = 0x8876086c;
  }
LAB_04073830:
  *piVar8 = (int)local_20;
  piVar8[-1] = 0x407383b;
  direct3ddevice9imp_040a2df0();
  return uVar5;
}

// --- Direct3DStateBlock9Imp::SetTextureStageState @0x04073d60 ---
/* source: direct3dstateblock9imp */

undefined4
Direct3DStateBlock9Imp__SetTextureStageState(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined1 local_20 [16];
  
  if (7 < param_2) {
    return 0x8876086c;
  }
  direct3ddevice9imp_040704e0();
  iVar1 = *(int *)(param_1 + 0x75ec);
  if (iVar1 != 0) {
    if (param_3 < 0x21) {
      iVar2 = *(int *)(&DAT_042f7ec0 + param_3 * 4);
    }
    else {
      FUN_0400a810("Type < 33",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                   ,0x198,
                   "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
                  );
      iVar2 = *(int *)(&DAT_042f7ec0 + param_3 * 4);
    }
    if (iVar2 == -1) {
      FUN_0400a810("index != (DWORD) -1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                   ,0x19b,
                   "void Direct3DStateBlock9Imp::SetTextureStageState(DWORD, D3DTEXTURESTAGESTATETYPE, DWORD)"
                  );
    }
    *(undefined4 *)(iVar1 + 0xbb4) = 1;
    puVar3 = (uint *)(iVar1 + 3000 + param_2 * 4);
    *puVar3 = *puVar3 | 1 << ((char)param_3 - 1U & 0x1f);
    uVar4 = 0;
    *(uint *)(iVar1 + 8 + (iVar2 + 0x2f4 + param_2 * 0x13) * 4) = param_4;
    goto LAB_04073dea;
  }
  puVar3 = (uint *)(param_1 + 0xe20 + param_2 * 0x48);
  switch(param_3) {
  default:
                    /* try { // try from 04073e32 to 04073eff has its CatchHandler @ 04073fe2 */
    FUN_0402cd10(0xf,"Unknown type (%u) of texture stage state!",param_3);
    uVar4 = 0x8876086c;
    goto LAB_04073dea;
  case 1:
    *puVar3 = param_4;
    break;
  case 2:
    puVar3[2] = param_4;
    break;
  case 3:
    puVar3[3] = param_4;
    break;
  case 4:
    puVar3[4] = param_4;
    break;
  case 5:
    uVar4 = 0;
    puVar3[6] = param_4;
    goto LAB_04073dea;
  case 6:
    uVar4 = 0;
    puVar3[7] = param_4;
    goto LAB_04073dea;
  case 7:
    puVar3[9] = param_4;
    goto LAB_04073ec8;
  case 8:
    puVar3[10] = param_4;
    goto LAB_04073ec8;
  case 9:
    puVar3[0xb] = param_4;
    goto LAB_04073ec8;
  case 10:
    puVar3[0xc] = param_4;
LAB_04073ec8:
    puVar3 = (uint *)D3D9CommandQueue__GetNextCommandPointer(param_1 + 0xec00,param_1,0x1e,0xc);
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[2] = param_4;
    D3D9CommandQueue__CommandSubmitted(param_1 + 0xec00);
    break;
  case 0xb:
    uVar4 = 0;
    puVar3[0xf] = param_4;
    goto LAB_04073dea;
  case 0x16:
    if (puVar3[0xd] != param_4) {
      puVar3[0xd] = param_4;
      goto LAB_04073ec8;
    }
    break;
  case 0x17:
    if (puVar3[0xe] != param_4) {
      puVar3[0xe] = param_4;
      goto LAB_04073ec8;
    }
    break;
  case 0x18:
    uVar4 = 0;
    puVar3[0x10] = param_4;
    goto LAB_04073dea;
  case 0x1a:
    uVar4 = 0;
    puVar3[1] = param_4;
    goto LAB_04073dea;
  case 0x1b:
    uVar4 = 0;
    puVar3[5] = param_4;
    goto LAB_04073dea;
  case 0x1c:
    uVar4 = 0;
    puVar3[8] = param_4;
    goto LAB_04073dea;
  case 0x20:
    if (puVar3[0x11] != param_4) {
      puVar3[0x11] = param_4;
      goto LAB_04073ec8;
    }
  }
  uVar4 = 0;
LAB_04073dea:
  direct3ddevice9imp_040a2df0(local_20);
  return uVar4;
}

// --- direct3dstateblock9imp_0406fc70 @0x0406fc70 ---
/* source: direct3dstateblock9imp */

void __regparm3
direct3dstateblock9imp_0406fc70(uint *param_1,uint param_2,size_t param_3,void *param_4)

{
  int iVar1;
  void *__ptr;
  size_t sVar2;
  uint *puVar3;
  size_t __n;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  size_t __n_00;
  uint uVar7;
  size_t local_44;
  uint local_30;
  uint local_2c;
  uint local_24;
  void *local_20;
  
  uVar4 = param_2;
  local_44 = param_3;
  if (*param_1 == 0) {
    local_20 = malloc(param_3);
    memcpy(local_20,param_4,param_3);
    local_24 = 0xffffffff;
  }
  else {
    local_30 = 0xffffffff;
    local_24 = 0;
    local_2c = 0xffffffff;
    puVar3 = param_1 + 1;
    do {
      uVar7 = *puVar3;
      uVar6 = puVar3[1] + uVar7;
      if (uVar4 <= uVar6) {
        uVar5 = local_44 + uVar4;
        if (uVar5 < uVar7) goto LAB_0406fd52;
        if (local_2c == 0xffffffff) {
          local_2c = local_24;
        }
        if (uVar7 < uVar4) {
          local_44 = uVar5 - uVar7;
          uVar4 = uVar7;
        }
        if (uVar5 < uVar6) {
          local_44 = uVar6 - uVar4;
        }
        local_30 = local_24;
        if ((uVar7 == uVar4) && (uVar6 == local_44 + uVar7)) {
          memcpy((void *)((param_2 - uVar7) + param_1[local_24 * 3 + 3]),param_4,param_3);
          return;
        }
      }
      local_24 = local_24 + 1;
      puVar3 = puVar3 + 3;
    } while (local_24 != *param_1);
    local_24 = 0xffffffff;
LAB_0406fd52:
    sVar2 = local_44;
    local_20 = malloc(local_44);
    __n = param_2 - uVar4;
    memcpy((void *)((int)local_20 + __n),param_4,param_3);
    if (local_2c != 0xffffffff) {
      if (__n != 0) {
        memcpy(local_20,(void *)param_1[local_2c * 3 + 3],__n);
      }
      iVar1 = uVar4 + local_44;
      __n_00 = iVar1 - (param_2 + param_3);
      if (__n_00 != 0) {
        local_44 = param_1[local_30 * 3 + 2];
        if (iVar1 != local_44 + param_1[local_30 * 3 + 1]) {
          FUN_0400a810("mChunks[lastChunkToMerge].Offset + mChunks[lastChunkToMerge].Size == endMerged"
                       ,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                       ,0x71,"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)");
          local_44 = param_1[local_30 * 3 + 2];
        }
        memcpy((void *)((int)local_20 + __n + param_3),
               (void *)((local_44 - __n_00) + param_1[local_30 * 3 + 3]),__n_00);
      }
      if ((int)local_2c <= (int)local_30) {
        puVar3 = param_1 + local_2c * 3 + 3;
        uVar7 = local_2c;
        do {
          __ptr = (void *)*puVar3;
          uVar7 = uVar7 + 1;
          puVar3 = puVar3 + 3;
          free(__ptr);
        } while ((int)uVar7 <= (int)local_30);
      }
      uVar7 = (local_30 + 1) - local_2c;
      param_1[local_2c * 3 + 1] = uVar4;
      param_1[local_2c * 3 + 2] = sVar2;
      param_1[local_2c * 3 + 3] = (uint)local_20;
      if (1 < uVar7) {
        if (local_24 != 0xffffffff) {
          memmove(param_1 + local_2c * 3 + 4,param_1 + local_24 * 3 + 1,(*param_1 - local_24) * 0xc)
          ;
        }
        *param_1 = (*param_1 + 1) - uVar7;
      }
      return;
    }
  }
  uVar7 = *param_1 + 1;
  *param_1 = uVar7;
  if (0x10 < uVar7) {
    FUN_0400a810("mChunkCount <= 16",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dstateblock9imp.h"
                 ,0x89,"void ChunkedDataBuffer::AddChunk(ULONG, ULONG, LPCVOID)");
    uVar7 = *param_1;
  }
  if (local_24 == 0xffffffff) {
    iVar1 = uVar7 * 3;
    param_1[iVar1 + -2] = uVar4;
    param_1[iVar1 + -1] = local_44;
    param_1[iVar1] = (uint)local_20;
    return;
  }
  memmove(param_1 + local_24 * 3 + 4,param_1 + local_24 * 3 + 1,(uVar7 - local_24) * 0xc - 0xc);
  param_1[local_24 * 3 + 2] = local_44;
  param_1[local_24 * 3 + 1] = uVar4;
  param_1[local_24 * 3 + 3] = (uint)local_20;
  return;
}

