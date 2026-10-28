// Recovered source: eon2/src/dlls/directx/d3d9/direct3dvertexshader9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DVertexShader9Imp::GetGLSLVertexShaderIndex @0x040b5040 ---
/* WARNING: Removing unreachable block (ram,0x040b52d1) */
/* source: direct3dvertexshader9imp */

undefined4 Direct3DVertexShader9Imp__GetGLSLVertexShaderIndex(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_44 [3];
  undefined1 local_38 [20];
  undefined1 *local_24;
  byte local_1e [14];
  
  FUN_040b52e0(local_44,param_1 + 0x40,param_2);
  if (*(int *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) * 4) == local_44[0]) {
    local_1e[0] = 0;
    local_24 = &DAT_04410d0c;
    if (*(int *)(param_1 + 0x38) == -1) {
      if (*(int *)(param_1 + 0x34) != 0) {
                    /* try { // try from 040b50d1 to 040b52aa has its CatchHandler @ 040b52bc */
        FUN_0400a810("ConstantRegisterValues == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvertexshader9imp.cpp"
                     ,0x7a,
                     "UINT Direct3DVertexShader9Imp::GetGLSLVertexShaderIndex(const eON_AsmVertexShaderParameters*)"
                    );
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      eON_ShaderData__GenerateVertexShaderOutputs
                (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),&local_24,
                 param_1 + 0x34,param_1 + 0x38,param_2,local_1e,param_1 + 0x20,param_1 + 0x3c);
    }
    else {
      eON_ShaderData__GenerateVertexShaderOutputs
                (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),&local_24,0,0,
                 param_2,local_1e,local_38,param_1 + 0x3c);
      iVar6 = memcmp(local_38,(void *)(param_1 + 0x20),0x14);
      if (iVar6 != 0) {
        FUN_0400a810("!memcmp( colorDeclUsageRegisters, ColorDeclUsageRegisters, sizeof(ColorRegisterAssignment) * 10)"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvertexshader9imp.cpp"
                     ,0x83,
                     "UINT Direct3DVertexShader9Imp::GetGLSLVertexShaderIndex(const eON_AsmVertexShaderParameters*)"
                    );
      }
    }
    if (*(uint *)(param_1 + 0x1c) == 0xffffffff) {
      *(uint *)(param_1 + 0x1c) = (uint)local_1e[0];
    }
    else if ((*(uint *)(param_1 + 0x1c) != (uint)local_1e[0]) &&
            (FUN_0402cd10(10,
                          "Internal vertex shader problem - Some point sprites may not display correctly!"
                         ), *(uint *)(param_1 + 0x1c) != (uint)local_1e[0])) {
      FUN_0400a810("SetsPointSize == ( setsPointSize ? 1 : 0 )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvertexshader9imp.cpp"
                   ,0x8c,
                   "UINT Direct3DVertexShader9Imp::GetGLSLVertexShaderIndex(const eON_AsmVertexShaderParameters*)"
                  );
    }
    puVar2 = local_24;
    uVar4 = *(undefined4 *)(local_24 + -0xc);
    uVar3 = FUN_0400e0a0();
    uVar4 = FUN_0400e060(uVar3,puVar2,uVar4);
    uVar4 = FUN_040ebc10(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xeb94),uVar4,
                         *(undefined4 *)(local_24 + -0xc),local_24,0);
    puVar5 = (undefined4 *)FUN_040b54a0(param_1 + 0x40,param_2);
    *puVar5 = uVar4;
    if ((allocator *)(local_24 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(local_24 + -4);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
      }
    }
  }
  else {
    uVar4 = *(undefined4 *)(local_44[0] + 0x28);
  }
  return uVar4;
}

// --- Direct3DVertexShader9Imp::ShaderSetsPointSize @0x040b4fe0 ---
/* source: direct3dvertexshader9imp */

undefined4 Direct3DVertexShader9Imp__ShaderSetsPointSize(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != -1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 1);
  }
  FUN_0400a810("SetsPointSize != -1",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvertexshader9imp.cpp"
               ,0x9a,"bool Direct3DVertexShader9Imp::ShaderSetsPointSize()");
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1c) >> 8),*(int *)(param_1 + 0x1c) == 1);
}

