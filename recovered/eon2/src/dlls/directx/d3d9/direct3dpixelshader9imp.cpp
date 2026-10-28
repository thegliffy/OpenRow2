// Recovered source: eon2/src/dlls/directx/d3d9/direct3dpixelshader9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DPixelShader9Imp::GetGLSLFragmentShaderIndex @0x040a4630 ---
/* WARNING: Removing unreachable block (ram,0x040a48af) */
/* source: direct3dpixelshader9imp */

undefined4 Direct3DPixelShader9Imp__GetGLSLFragmentShaderIndex(int param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  void *__s2;
  undefined1 *local_24;
  char local_1e [14];
  
  uVar6 = 0;
  pbVar12 = param_2;
  do {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    uVar6 = uVar6 * 5 + (uint)bVar2;
  } while (pbVar12 != param_2 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x30);
  __s2 = *(void **)(iVar4 + (uVar6 % uVar3) * 4);
  if (__s2 != (void *)0x0) {
    do {
      iVar7 = memcmp(param_2,__s2,0x10);
      iVar8 = memcmp(param_2 + 0x14,(void *)((int)__s2 + 0x14),0x14);
      if ((((iVar7 == 0) && (iVar8 == 0)) &&
          (*(short *)(param_2 + 0x10) == *(short *)((int)__s2 + 0x10))) &&
         (*(short *)(param_2 + 0x12) == *(short *)((int)__s2 + 0x12))) {
        if (*(void **)(iVar4 + uVar3 * 4) != __s2) {
          return *(undefined4 *)((int)__s2 + 0x28);
        }
        break;
      }
      __s2 = *(void **)((int)__s2 + 0x2c);
    } while (__s2 != (void *)0x0);
  }
  local_24 = &DAT_04410d0c;
  if (*(int *)(param_1 + 0x24) == -1) {
    if (*(int *)(param_1 + 0x20) != 0) {
                    /* try { // try from 040a4730 to 040a4894 has its CatchHandler @ 040a489a */
      FUN_0400a810("ConstantRegisterValues == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dpixelshader9imp.cpp"
                   ,0x75,
                   "UINT Direct3DPixelShader9Imp::GetGLSLFragmentShaderIndex(const FragmentShaderCompileArgs&)"
                  );
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    eON_ShaderData__GeneratePixelShaderInputs
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),&local_24,
               param_1 + 0x20,param_1 + 0x24,param_2,param_1 + 0x1c);
  }
  else {
    eON_ShaderData__GeneratePixelShaderInputs
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),&local_24,0,0,param_2
               ,local_1e);
    if (*(char *)(param_1 + 0x1c) != local_1e[0]) {
      FUN_0400a810("renderTargetsUsed == RenderTargetsUsed",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dpixelshader9imp.cpp"
                   ,0x7d,
                   "UINT Direct3DPixelShader9Imp::GetGLSLFragmentShaderIndex(const FragmentShaderCompileArgs&)"
                  );
    }
  }
  puVar5 = local_24;
  uVar10 = *(undefined4 *)(local_24 + -0xc);
  uVar9 = FUN_0400e0a0();
  uVar10 = FUN_0400e060(uVar9,puVar5,uVar10);
  uVar10 = FUN_040ebd10(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xeb94),uVar10,
                        *(undefined4 *)(local_24 + -0xc),local_24,0);
  puVar11 = (undefined4 *)FUN_040a4cb0(param_1 + 0x28,param_2);
  *puVar11 = uVar10;
  if ((allocator *)(local_24 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
  return uVar10;
}

