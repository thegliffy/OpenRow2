// Recovered source: eon2/src/dlls/directx/d3d9/uniformBuffer.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_UniformBufferStreamed::AssignLastChunkToBindPoint @0x040ef8e0 ---
/* source: uniformBuffer */

void eON_UniformBufferStreamed__AssignLastChunkToBindPoint(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_0400a810("mBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                 ,0x182,"void eON_UniformBufferStreamed::AssignLastChunkToBindPoint(int32_t)");
    iVar1 = *(int *)(param_1 + 0x10);
  }
  OpenGLContextCache__BindUniformBufferRange
            (*(undefined4 *)(param_1 + 4),param_2,iVar1,*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x3c));
  return;
}

// --- eON_UniformBufferStreamed::MakeNewBuffer @0x040eece0 ---
/* source: uniformBuffer */

void eON_UniformBufferStreamed__MakeNewBuffer(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_040ba100(*param_1 + 0x40);
  param_1[4] = iVar1;
  OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,iVar1);
  if (DAT_0451ca88 != '\0') {
    (*DAT_0451e894)(0x8a11,param_1[7],0,0xc2);
    iVar1 = (*DAT_0451e520)(0x8a11,0,param_1[7],0xc2);
    param_1[5] = iVar1;
    if (iVar1 == 0) {
      FUN_0400a810("mBufferPtr",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x54,"void eON_UniformBufferStreamed::MakeNewBuffer()");
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  (*DAT_0451ed30)(0x8a11,param_1[7],0,0x88e0);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

// --- eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind @0x040ef3d0 ---
/* source: uniformBuffer */

void eON_UniformBufferStreamed__UpdatePixelFloatBufferAndBind
               (int *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined4 *local_20;
  
  bVar11 = 0;
  if ((param_1[9] == *(int *)(*param_1 + 0xe964)) && ((ushort *)param_1[0xd] == param_2)) {
    OpenGLContextCache__BindUniformBufferRange
              (param_1[1],param_4,param_1[4],param_1[0xe],param_1[0xf]);
  }
  else {
    param_1[9] = *(int *)(*param_1 + 0xe964);
    param_1[0xd] = (int)param_2;
    if (param_1[4] == 0) {
      FUN_0400a810("mBuffer",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x110,
                   "void eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    iVar4 = param_1[8];
    bVar9 = DAT_0451ca88 == '\0';
    if ((uint)param_1[7] < iVar4 + 0x1000U) {
      eON_UniformBufferStreamed__UpdateToNewBuffer(param_1);
      param_1[8] = 0;
      iVar4 = 0;
    }
    if (bVar9) {
      OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
      local_20 = (undefined4 *)
                 (*DAT_0451e520)(0x8a11,param_1[8],0x1000,
                                 (-((char)param_1[0x10] == '\0') & 0x24U) + 2);
    }
    else {
      local_20 = (undefined4 *)(iVar4 + param_1[5]);
    }
    if (local_20 == (undefined4 *)0x0) {
      FUN_0400a810("newArea",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x128,
                   "void eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    uVar6 = 0x1000;
    iVar4 = *param_1;
    bVar10 = ((uint)local_20 & 1) != 0;
    puVar7 = (undefined4 *)(iVar4 + 0xc6c8);
    puVar8 = local_20;
    if (bVar10) {
      puVar7 = (undefined4 *)(iVar4 + 0xc6c9);
      *(undefined1 *)local_20 = *(undefined1 *)(iVar4 + 0xc6c8);
      uVar6 = 0xfff;
      puVar8 = (undefined4 *)((int)local_20 + 1);
    }
    if (((uint)puVar8 & 2) != 0) {
      uVar2 = *(undefined2 *)puVar7;
      uVar6 = uVar6 - 2;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      *(undefined2 *)puVar8 = uVar2;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
    }
    iVar4 = 0;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    if ((uVar6 & 2) != 0) {
      *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
      iVar4 = 2;
    }
    if (bVar10) {
      *(undefined1 *)((int)puVar8 + iVar4) = *(undefined1 *)((int)puVar7 + iVar4);
    }
    if ((param_2 != (ushort *)0x0) && (param_3 != 0)) {
      iVar4 = 0;
      do {
        if (param_2[1] == 0) {
          uVar1 = *param_2;
          if (0x1000 < (uint)uVar1 * 0x10 + 0x10) {
            FUN_0400a810("offsetInBytes+registerLengthInBytes <= sizeToUpdate",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                         ,0x135,
                         "void eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                        );
          }
          puVar7 = local_20 + (uint)uVar1 * 4;
          *puVar7 = *(undefined4 *)(param_2 + 2);
          puVar7[1] = *(undefined4 *)(param_2 + 4);
          puVar7[2] = *(undefined4 *)(param_2 + 6);
          puVar7[3] = *(undefined4 *)(param_2 + 8);
        }
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 0x12;
      } while (iVar4 != param_3);
    }
    if ((bVar9) && (cVar3 = (*DAT_0451ecf0)(0x8a11), cVar3 != '\x01')) {
      FUN_0400a810("__glewUnmapBuffer( 0x8A11 ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x13c,
                   "void eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    OpenGLContextCache__BindUniformBufferRange(param_1[1],param_4,param_1[4],param_1[8],0x1000);
    param_1[0xf] = 0x1000;
    param_1[0xe] = param_1[8];
    param_1[8] = param_1[8] + 0xfff + param_1[3] & -param_1[3];
  }
  return;
}

// --- eON_UniformBufferStreamed::UpdateToNewBuffer @0x040eede0 ---
/* source: d3dstructs, uniformBuffer */

void eON_UniformBufferStreamed__UpdateToNewBuffer(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1[4] == 0) {
    FUN_0400a810("mBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                 ,0x60,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
  }
  bVar9 = DAT_0451ca88 != '\0';
  if (bVar9) {
    OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
    cVar3 = (*DAT_0451ecf0)(0x8a11);
    if (cVar3 != '\x01') {
      FUN_0400a810("__glewUnmapBuffer( 0x8A11 ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x6b,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
    }
    param_1[5] = 0;
  }
  piVar4 = operator_new(0x18);
  iVar5 = param_1[4];
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = iVar5;
  iVar5 = *param_1;
  *(undefined1 *)(piVar4 + 4) = 1;
  FUN_040a5910(piVar4 + 1,iVar5 + 0x40);
  piVar1 = (int *)param_1[6];
  piVar4[5] = (int)piVar1;
  param_1[6] = (int)piVar4;
  piVar2 = piVar4;
  iVar5 = 1;
  if (piVar1 == (int *)0x0) {
    iVar8 = 2;
  }
  else {
    do {
      iVar8 = iVar5;
      piVar7 = piVar1;
      piVar6 = piVar2;
      piVar2 = piVar7;
      piVar1 = (int *)piVar7[5];
      iVar5 = iVar8 + 1;
    } while ((int *)piVar7[5] != (int *)0x0);
    if ((piVar4 != piVar7) && (cVar3 = FUN_040a5960(piVar7 + 1,*param_1 + 0x40), cVar3 != '\0')) {
      param_1[4] = *piVar7;
      piVar6[5] = 0;
      if ((piVar7[2] != 0) || (piVar7[3] != 0)) {
        FUN_0400a810("!FenceARB && !FenceAPPLE",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                     ,299,"eONFence::~eONFence()");
      }
      operator_delete(piVar7);
      OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
      if (bVar9) {
        iVar5 = (*DAT_0451e520)(0x8a11,0,param_1[7],0xca);
        param_1[5] = iVar5;
        if (iVar5 == 0) {
          FUN_0400a810("mBufferPtr",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                       ,0x97,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
        }
      }
      return;
    }
    iVar8 = iVar8 + 2;
  }
  eON_UniformBufferStreamed__MakeNewBuffer(param_1);
  FUN_0402cd10(0x14,"Uniform buffer %s (%p) now has %d internal buffers, taking %d bytes",param_1[2]
               ,param_1,iVar8,iVar8 * param_1[7]);
  return;
}

// --- eON_UniformBufferStreamed::UpdateToNextBatch @0x040ef720 ---
/* source: uniformBuffer */

void eON_UniformBufferStreamed__UpdateToNextBatch
               (int param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  char cVar1;
  void *__dest;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0400a810("mBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                 ,0x151,
                 "void eON_UniformBufferStreamed::UpdateToNextBatch(int32_t, const void*, uint32_t)"
                );
  }
  bVar3 = DAT_0451ca88 == '\0';
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x1c) < param_4 + iVar2) {
    eON_UniformBufferStreamed__UpdateToNewBuffer(param_1);
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar2 = 0;
  }
  if (bVar3) {
    OpenGLContextCache____glewBindBuffer
              (*(undefined4 *)(param_1 + 4),0x8a11,*(undefined4 *)(param_1 + 0x10));
    __dest = (void *)(*DAT_0451e520)(0x8a11,*(undefined4 *)(param_1 + 0x20),param_4,
                                     (-(*(char *)(param_1 + 0x40) == '\0') & 0x24U) + 2);
  }
  else {
    __dest = (void *)(iVar2 + *(int *)(param_1 + 0x14));
  }
  if (__dest == (void *)0x0) {
    FUN_0400a810("newArea",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                 ,0x169,
                 "void eON_UniformBufferStreamed::UpdateToNextBatch(int32_t, const void*, uint32_t)"
                );
  }
  memcpy(__dest,param_3,param_4);
  if (bVar3) {
    cVar1 = (*DAT_0451ecf0)(0x8a11);
    if (cVar1 != '\x01') {
      FUN_0400a810("__glewUnmapBuffer( 0x8A11 ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x16f,
                   "void eON_UniformBufferStreamed::UpdateToNextBatch(int32_t, const void*, uint32_t)"
                  );
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  OpenGLContextCache__BindUniformBufferRange
            (*(undefined4 *)(param_1 + 4),param_2,*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20),param_4);
  *(size_t *)(param_1 + 0x3c) = param_4;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x20);
  *(size_t *)(param_1 + 0x20) =
       param_4 + *(int *)(param_1 + 0x20) + -1 + *(int *)(param_1 + 0xc) & -*(int *)(param_1 + 0xc);
  return;
}

// --- eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind @0x040ef080 ---
/* source: uniformBuffer */

void eON_UniformBufferStreamed__UpdateVertexFloatBufferAndBind
               (int *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined4 *local_20;
  
  bVar11 = 0;
  if ((param_1[9] == *(int *)(*param_1 + 0xe948)) && ((ushort *)param_1[0xd] == param_2)) {
    OpenGLContextCache__BindUniformBufferRange
              (param_1[1],param_4,param_1[4],param_1[0xe],param_1[0xf]);
  }
  else {
    bVar9 = DAT_0451ca88 == '\0';
    param_1[9] = *(int *)(*param_1 + 0xe948);
    param_1[0xd] = (int)param_2;
    if (param_1[4] == 0) {
      FUN_0400a810("mBuffer",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0xc6,
                   "void eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    iVar4 = param_1[8];
    if ((uint)param_1[7] < iVar4 + 0x1000U) {
      eON_UniformBufferStreamed__UpdateToNewBuffer(param_1);
      param_1[8] = 0;
      iVar4 = 0;
    }
    if (bVar9) {
      OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
      local_20 = (undefined4 *)
                 (*DAT_0451e520)(0x8a11,param_1[8],0x1000,
                                 (-((char)param_1[0x10] == '\0') & 0x24U) + 2);
    }
    else {
      local_20 = (undefined4 *)(iVar4 + param_1[5]);
    }
    if (local_20 == (undefined4 *)0x0) {
      FUN_0400a810("newArea",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0xd6,
                   "void eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    uVar6 = 0x1000;
    iVar4 = *param_1;
    bVar10 = ((uint)local_20 & 1) != 0;
    puVar7 = (undefined4 *)(iVar4 + 0xd808);
    puVar8 = local_20;
    if (bVar10) {
      puVar7 = (undefined4 *)(iVar4 + 0xd809);
      *(undefined1 *)local_20 = *(undefined1 *)(iVar4 + 0xd808);
      uVar6 = 0xfff;
      puVar8 = (undefined4 *)((int)local_20 + 1);
    }
    if (((uint)puVar8 & 2) != 0) {
      uVar2 = *(undefined2 *)puVar7;
      uVar6 = uVar6 - 2;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      *(undefined2 *)puVar8 = uVar2;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
    }
    iVar4 = 0;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    if ((uVar6 & 2) != 0) {
      *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
      iVar4 = 2;
    }
    if (bVar10) {
      *(undefined1 *)((int)puVar8 + iVar4) = *(undefined1 *)((int)puVar7 + iVar4);
    }
    if ((param_2 != (ushort *)0x0) && (param_3 != 0)) {
      iVar4 = 0;
      do {
        if (param_2[1] != 0) {
          uVar1 = *param_2;
          if (0x1000 < (uint)uVar1 * 0x10 + 0x10) {
            FUN_0400a810("offsetInBytes+registerLengthInBytes <= sizeToUpdate",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                         ,0xe3,
                         "void eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                        );
          }
          puVar7 = local_20 + (uint)uVar1 * 4;
          *puVar7 = *(undefined4 *)(param_2 + 2);
          puVar7[1] = *(undefined4 *)(param_2 + 4);
          puVar7[2] = *(undefined4 *)(param_2 + 6);
          puVar7[3] = *(undefined4 *)(param_2 + 8);
        }
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 0x12;
      } while (iVar4 != param_3);
    }
    if ((bVar9) && (cVar3 = (*DAT_0451ecf0)(0x8a11), cVar3 != '\x01')) {
      FUN_0400a810("__glewUnmapBuffer( 0x8A11 ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0xea,
                   "void eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind(const ShaderConstant*, uint32_t, int32_t)"
                  );
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    OpenGLContextCache__BindUniformBufferRange(param_1[1],param_4,param_1[4],param_1[8],0x1000);
    param_1[0xf] = 0x1000;
    param_1[0xe] = param_1[8];
    param_1[8] = param_1[8] + 0xfff + param_1[3] & -param_1[3];
  }
  return;
}

