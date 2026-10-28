// Recovered source: eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- OpenObjectByName @0x04148b80 ---
/* WARNING: Removing unreachable block (ram,0x04148f3e) */
/* WARNING: Removing unreachable block (ram,0x04148f05) */
/* WARNING: Removing unreachable block (ram,0x04148f16) */
/* source: synchronisationPrimitives */

int __regparm3 OpenObjectByName(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined *local_48;
  char *local_44;
  undefined *local_40;
  void *local_2c;
  char *local_28;
  allocator local_21;
  allocator local_20 [2];
  char local_1e;
  char local_1d [13];
  
  std::string::string((string *)&local_2c,param_1,&local_21);
  if (DAT_04518d80 == (undefined *)0x0) {
    local_48 = &DAT_04518d7c;
    puVar4 = local_48;
  }
  else {
    local_48 = &DAT_04518d7c;
    uVar2 = *(uint *)((int)local_2c + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar8 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar8 + 0x10) + -0xc);
        uVar6 = uVar3;
        if (uVar2 <= uVar3) {
          uVar6 = uVar2;
        }
        iVar5 = memcmp(*(void **)(puVar8 + 0x10),local_2c,uVar6);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar8 + 0xc);
        if (*(undefined **)(puVar8 + 0xc) == (undefined *)0x0) goto LAB_04148c0c;
      }
      puVar4 = *(undefined **)(puVar8 + 8);
      local_48 = puVar8;
    } while (*(undefined **)(puVar8 + 8) != (undefined *)0x0);
LAB_04148c0c:
    puVar4 = local_48;
    if (local_48 != &DAT_04518d7c) {
      uVar3 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar5 = memcmp(local_2c,*(void **)(local_48 + 0x10),uVar6);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      puVar4 = &DAT_04518d7c;
      if (-1 < iVar5) {
        puVar4 = local_48;
      }
    }
  }
  local_48 = puVar4;
  if ((allocator *)((int)local_2c + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar7 = (int *)((int)local_2c + -4);
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_2c + -0xc));
    }
  }
  if (local_48 == &DAT_04518d7c) {
    return 0;
  }
  std::string::string((string *)&local_28,param_1,local_20);
  local_44 = local_28;
  if (DAT_04518d80 != (undefined *)0x0) {
    local_48 = &DAT_04518d7c;
    uVar2 = *(uint *)(local_28 + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar8 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar8 + 0x10) + -0xc);
        uVar6 = uVar3;
        if (uVar2 <= uVar3) {
          uVar6 = uVar2;
        }
        param_1 = local_44;
        iVar5 = memcmp(*(void **)(puVar8 + 0x10),local_44,uVar6);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar8 + 0xc);
        if (*(undefined **)(puVar8 + 0xc) == (undefined *)0x0) goto LAB_04148ce4;
      }
      puVar4 = *(undefined **)(puVar8 + 8);
      local_48 = puVar8;
    } while (*(undefined **)(puVar8 + 8) != (undefined *)0x0);
LAB_04148ce4:
    if (local_48 != &DAT_04518d7c) {
      param_1 = *(char **)(local_48 + 0x10);
      uVar3 = *(uint *)(param_1 + -0xc);
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar5 = memcmp(local_44,param_1,uVar6);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      if (-1 < iVar5) goto LAB_04148d23;
    }
  }
  local_28 = &DAT_04410d0c;
                    /* try { // try from 04148e2d to 04148e31 has its CatchHandler @ 04148e55 */
  FUN_04148950();
  local_48 = local_40;
  if ((allocator *)(local_44 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    local_44 = local_28;
  }
  else {
    LOCK();
    piVar7 = (int *)(local_44 + -4);
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      param_1 = &local_1e;
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
      local_44 = local_28;
    }
    else {
      local_44 = local_28;
    }
  }
LAB_04148d23:
  iVar5 = *(int *)(local_48 + 0x14);
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar7 = (int *)(local_44 + -4);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 < 1) {
      param_1 = local_1d;
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
  if (iVar5 != 0) {
    if ((((DAT_04516c6c == '\0') || (iVar5 < 0)) || (DAT_04516c74 - DAT_04516c70 >> 2 <= iVar5)) ||
       (piVar7 = *(int **)(DAT_04516c70 + iVar5 * 4), piVar7 == (int *)0x0)) {
      param_1 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
      ;
      FUN_0400a810(&DAT_04334813,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0x3b4,"void* OpenObjectByName(LPCSTR, eON_HandleType)");
      piVar7 = (int *)0x0;
    }
    if (*piVar7 == param_2) {
      piVar7[1] = piVar7[1] + 1;
      return iVar5;
    }
  }
  eON_SetLastError(2,param_1);
  return 0;
}

// --- OverlappedIOThreadFunction @0x041496e0 ---
/* source: synchronisationPrimitives */

void OverlappedIOThreadFunction(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int in_FS_OFFSET;
  int local_60;
  
  piVar12 = (int *)&stack0xffffffa4;
  eON_SetThreadName();
  *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0x4c) = 1;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516d10);
  do {
    while (piVar5 = DAT_04516d2c, DAT_04516d2c == (int *)0x0) {
      piVar12[1] = (int)&DAT_04516d10;
      *piVar12 = (int)&DAT_04516ce0;
      piVar12[-1] = 0x4149a84;
      pthread_cond_wait((pthread_cond_t *)*piVar12,(pthread_mutex_t *)piVar12[1]);
    }
    piVar7 = (int *)DAT_04516d2c[5];
    DAT_04516d2c[5] = 0;
    uVar14 = 0;
    *piVar12 = (int)&DAT_04516d10;
    uVar13 = 6;
    piVar12[-1] = 0x414977c;
    DAT_04516d2c = piVar7;
    pthread_mutex_unlock((pthread_mutex_t *)*piVar12);
    *piVar12 = *piVar5;
    piVar12[-1] = 0x4149786;
    iVar6 = FUN_0412e5a0();
    if (iVar6 != 0) {
      uVar15 = piVar5[7];
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar3 = *(uint *)(piVar5[4] + 8);
        iVar1 = *(int *)(piVar5[4] + 0xc);
        if (piVar5[6] == 0) {
          iVar11 = piVar5[8];
          if (iVar11 == 0) {
            piVar12[2] = uVar15;
            piVar12[4] = iVar1;
            piVar12[3] = uVar3;
            piVar12[1] = piVar5[2];
            *piVar12 = iVar6;
            piVar12[-1] = 0x414999f;
            uVar14 = pread64(*piVar12,(void *)piVar12[1],piVar12[2],*(__off64_t *)(piVar12 + 3));
          }
          else {
            if (iVar11 != 1) {
              piVar12[2] = iVar11;
              piVar12[1] = (int)"Unknown operation in OverlappedIO thread! ( %d )";
              *piVar12 = 0xf;
              piVar12[-1] = 0x4149ab1;
              FUN_0402cd10();
              goto LAB_0414979b;
            }
            piVar12[2] = uVar15;
            piVar12[4] = iVar1;
            piVar12[3] = uVar3;
            piVar12[1] = piVar5[2];
            *piVar12 = iVar6;
            piVar12[-1] = 0x4149b6c;
            uVar14 = pwrite64(*piVar12,(void *)piVar12[1],piVar12[2],*(__off64_t *)(piVar12 + 3));
          }
          if (uVar14 == 0xffffffff) {
            iVar1 = *piVar5;
            piVar12[-1] = 0x41499b4;
            piVar7 = __errno_location();
            *piVar12 = *piVar7;
            piVar12[-1] = 0x41499c0;
            pcVar8 = strerror(*piVar12);
            iVar11 = piVar5[8];
            pcVar9 = "pread";
            iVar4 = *piVar7;
            piVar12[4] = (int)pcVar8;
            piVar12[1] = (int)"OverlappedIO - %s failed (%u) %s - HANDLE %p, fileDesc %d";
            *piVar12 = 0xf;
            if (iVar11 != 0) {
              pcVar9 = "pwrite";
            }
            piVar12[3] = iVar4;
            piVar12[2] = (int)pcVar9;
            piVar12[6] = iVar6;
            piVar12[5] = iVar1;
            piVar12[-1] = 0x4149a04;
            FUN_0402cd10();
            if (*piVar7 == 0xe) {
              piVar12[3] = piVar5[7];
              iVar6 = piVar5[2];
              piVar12[1] = (int)"\tEFAULT TargetBuffer %p, NumOfBytesToTransfer %u";
              *piVar12 = 0xf;
              piVar12[2] = iVar6;
              piVar12[-1] = 0x4149c1c;
              FUN_0402cd10();
            }
            iVar6 = *piVar5;
            *piVar12 = (int)&DAT_04516c7c;
            piVar12[-1] = 0x4149a1b;
            pthread_mutex_lock((pthread_mutex_t *)*piVar12);
            if ((((DAT_04516c6c == '\0') || (iVar6 < 0)) ||
                (DAT_04516c74 - DAT_04516c70 >> 2 <= iVar6)) ||
               (piVar7 = *(int **)(DAT_04516c70 + iVar6 * 4), piVar7 == (int *)0x0)) {
              *piVar12 = (int)&DAT_04516c7c;
              uVar14 = 0;
              uVar13 = 0x3e3;
              piVar12[-1] = 0x4149a55;
              pthread_mutex_unlock((pthread_mutex_t *)*piVar12);
              piVar12[1] = (int)
                           "\tHANDLE wasn\'t found by Synchronisation_GetUserDataFromHandle() !!";
              *piVar12 = 0xf;
              piVar12[-1] = 0x4149a69;
              FUN_0402cd10();
            }
            else {
              iVar6 = *piVar7;
              iVar1 = piVar7[3];
              *piVar12 = (int)&DAT_04516c7c;
              piVar12[-1] = 0x4149b9c;
              pthread_mutex_unlock((pthread_mutex_t *)*piVar12);
              if (iVar6 == 1) {
                uVar13 = 0x57;
                piVar12[4] = iVar1 + 0xc;
                iVar6 = *(int *)(iVar1 + 4);
                piVar12[2] = iVar1;
                uVar14 = 0;
                piVar12[1] = (int)"\tFileHandle %p, file handle %d, filename %s";
                *piVar12 = 0xf;
                piVar12[3] = iVar6;
                piVar12[-1] = 0x4149bf5;
                FUN_0402cd10();
              }
              else {
                piVar12[2] = iVar6;
                uVar14 = 0;
                uVar13 = 0x57;
                piVar12[1] = (int)"\tHANDLE wasn\'t a HandleFile (%u)";
                *piVar12 = 0xf;
                piVar12[-1] = 0x4149bc0;
                FUN_0402cd10();
              }
            }
            goto LAB_041497aa;
          }
          uVar13 = 0;
        }
        else {
          piVar7 = (int *)piVar5[2];
          uVar14 = 0;
          do {
            if (*piVar7 == 0) {
              piVar12[3] = (int)"DWORD OverlappedIOThreadFunction(LPVOID)";
              piVar12[2] = 0x2ae;
              piVar12[1] = (int)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
              ;
              *piVar12 = (int)"fileBuffer[pageCounter].Buffer != __null";
              piVar12[-1] = 0x4149b3c;
              FUN_0400a810();
            }
            uVar10 = 0x1000;
            if (uVar15 < 0x1001) {
              uVar10 = uVar15;
            }
            iVar11 = piVar5[8];
            if (iVar11 == 0) {
              piVar12[2] = uVar10;
              piVar12[3] = uVar14 + uVar3;
              piVar12[4] = ((int)uVar14 >> 0x1f) + iVar1 + (uint)CARRY4(uVar14,uVar3);
              piVar12[1] = *piVar7;
              *piVar12 = iVar6;
              piVar12[-1] = 0x414989d;
              iVar11 = pread64(*piVar12,(void *)piVar12[1],piVar12[2],*(__off64_t *)(piVar12 + 3));
              if (iVar11 < 0) break;
LAB_041498a8:
              uVar14 = uVar14 + iVar11;
              if (iVar11 < (int)uVar10) {
LAB_0414990a:
                uVar13 = 0x26;
                goto LAB_04149914;
              }
            }
            else {
              if (iVar11 == 1) {
                piVar12[2] = uVar10;
                piVar12[3] = uVar14 + uVar3;
                piVar12[4] = ((int)uVar14 >> 0x1f) + iVar1 + (uint)CARRY4(uVar14,uVar3);
                piVar12[1] = *piVar7;
                *piVar12 = iVar6;
                piVar12[-1] = 0x4149955;
                iVar11 = pwrite64(*piVar12,(void *)piVar12[1],piVar12[2],*(__off64_t *)(piVar12 + 3)
                                 );
                if (-1 < iVar11) goto LAB_041498a8;
                break;
              }
              piVar12[2] = iVar11;
              piVar12[1] = (int)"Unknown operation in OverlappedIO thread for scatter! ( %d )";
              *piVar12 = 0xf;
              piVar12[-1] = 0x41498fd;
              FUN_0402cd10();
              iVar11 = 0;
              if (0 < (int)uVar10) goto LAB_0414990a;
            }
            piVar7 = piVar7 + 2;
            uVar15 = uVar15 - iVar11;
          } while (uVar15 != 0);
          uVar13 = 0;
        }
LAB_04149914:
        if (uVar14 != 0) goto LAB_041497aa;
      }
LAB_0414979b:
      uVar14 = 0;
      if (piVar5[7] != 0) {
        uVar13 = 0x26;
      }
    }
LAB_041497aa:
    *piVar12 = (int)&DAT_04516d10;
    piVar12[-1] = 0x41497b6;
    pthread_mutex_lock((pthread_mutex_t *)*piVar12);
    puVar2 = (undefined4 *)piVar5[4];
    iVar6 = DAT_04516d30 * 0x10;
    *(undefined4 **)(&DAT_04516d40 + iVar6) = puVar2;
    *(int *)(&DAT_04516d44 + iVar6) = piVar5[2];
    *(int *)(&DAT_04516d48 + iVar6) = piVar5[7];
    *(int *)(&DAT_04516d4c + iVar6) = piVar5[6];
    iVar6 = DAT_04516d30 + 1;
    DAT_04516d30 = 0;
    if (iVar6 != 0x200) {
      DAT_04516d30 = iVar6;
    }
    if (DAT_04518d40 < 0x200) {
      DAT_04518d40 = DAT_04518d40 + 1;
    }
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    iVar6 = piVar5[3];
    if (iVar6 == 0) {
      if (puVar2[4] == 0) {
        iVar6 = *piVar5;
        *piVar12 = (int)&DAT_04516c7c;
        piVar12[-1] = 0x4149ace;
        pthread_mutex_lock((pthread_mutex_t *)*piVar12);
        if (((DAT_04516c6c != '\0') && (-1 < iVar6)) &&
           ((iVar6 < DAT_04516c74 - DAT_04516c70 >> 2 &&
            ((piVar7 = *(int **)(DAT_04516c70 + iVar6 * 4), piVar7 != (int *)0x0 && (*piVar7 == 1)))
            ))) {
          piVar7[4] = 1;
          piVar12[-1] = 0x4149c32;
          SignalObject();
        }
        *piVar12 = (int)&DAT_04516c7c;
        piVar12[-1] = 0x4149b0d;
        pthread_mutex_unlock((pthread_mutex_t *)*piVar12);
      }
      else {
        *piVar12 = puVar2[4];
        piVar12[-1] = 0x4149834;
        eON_SetEvent();
        piVar12 = piVar12 + -1;
      }
    }
    else {
      piVar12[2] = (int)puVar2;
      iVar1 = piVar5[1];
      *piVar12 = iVar6;
      piVar12[1] = iVar1;
      piVar12[-1] = 0x4149733;
      FUN_04145980();
      *piVar12 = piVar5[1];
      piVar12[-1] = 0x414973e;
      Synchronisation_SignalAPCOnThread();
    }
    piVar5[5] = (int)DAT_04518d44;
    DAT_04518d44 = piVar5;
  } while( true );
}

// --- SignalObject @0x04148280 ---
/* source: synchronisationPrimitives */

void __regparm3 SignalObject(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  piVar4 = *(int **)(param_1 + 8);
joined_r0x04148297:
  if ((param_2 == 0) || (piVar4 == (int *)0x0)) {
    return;
  }
  piVar10 = (int *)piVar4[1];
  iVar2 = *piVar4;
  if (piVar10 != (int *)0x0) {
    iVar9 = *piVar10;
    iVar1 = iVar2;
    while ((iVar9 == iVar1 && (piVar10 = (int *)piVar10[1], piVar10 != (int *)0x0))) {
      iVar1 = *piVar10;
    }
  }
  iVar9 = piVar4[2];
  if (*(int *)(iVar2 + 0x1c) != -2) {
    FUN_0400a810("twi->WaitResult == (HRESULT)(((DWORD)0xFFFFFFFF)-1)",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                 ,0x332,"void SignalObject(eON_HandleData*, DWORD)");
  }
  piVar4 = piVar10;
  if (*(int *)(iVar2 + 0xc) != 0) goto LAB_04148368;
  goto LAB_041482f7;
LAB_04148368:
  uVar8 = *(uint *)(iVar2 + 4);
  bVar3 = true;
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(iVar2 + 0x20 + uVar7 * 4) != param_1) {
        cVar5 = SignalledFor();
        if (cVar5 == '\0') {
          bVar3 = false;
          goto LAB_041483a5;
        }
        uVar8 = *(uint *)(iVar2 + 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
    bVar3 = true;
  }
LAB_041483a5:
  if (((*(int *)(iVar2 + 0x18) == 0) || (*(int *)(iVar2 + 0x14) != 0)) && (bVar3)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
LAB_041482f7:
      ThreadReleasedOnObject();
    }
    else if (*(int *)(iVar2 + 4) != 0) {
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        ThreadReleasedOnObject();
      } while (uVar8 < *(uint *)(iVar2 + 4));
    }
    *(int *)(iVar2 + 0x1c) = iVar9;
    FUN_04147f30();
    if ((*(int *)(iVar2 + 0x10) == 0) || (iVar9 = DAT_04518d58 - (int)DAT_04518d54 >> 2, iVar9 == 0)
       ) {
LAB_0414831d:
      iVar9 = *(int *)(iVar2 + 0x18);
    }
    else {
      iVar6 = 0;
      iVar1 = *DAT_04518d54;
      piVar10 = DAT_04518d54;
      while (iVar2 != iVar1) {
        iVar6 = iVar6 + 1;
        if (iVar9 == iVar6) goto LAB_0414831d;
        piVar10 = DAT_04518d54 + iVar6;
        iVar1 = *piVar10;
      }
      *piVar10 = DAT_04518d54[iVar9 + -1];
      iVar9 = *(int *)(iVar2 + 0x18);
      DAT_04518d58 = DAT_04518d58 + -4;
    }
    if ((iVar9 != 0) && (iVar9 = DAT_04518d64 - (int)DAT_04518d60 >> 2, iVar9 != 0)) {
      iVar6 = 0;
      iVar1 = *DAT_04518d60;
      piVar10 = DAT_04518d60;
      while (iVar2 != iVar1) {
        iVar6 = iVar6 + 1;
        if (iVar9 == iVar6) goto LAB_04148328;
        piVar10 = DAT_04518d60 + iVar6;
        iVar1 = *piVar10;
      }
      *piVar10 = DAT_04518d60[iVar9 + -1];
      DAT_04518d64 = DAT_04518d64 + -4;
    }
LAB_04148328:
    pthread_cond_signal(*(pthread_cond_t **)(iVar2 + 0x120));
    param_2 = param_2 + -1;
  }
  goto joined_r0x04148297;
}

// --- SignalledFor @0x04147e80 ---
/* source: synchronisationPrimitives */

bool __regparm3 SignalledFor(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  
  switch(*param_2) {
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                 ,500,"bool SignalledFor(HANDLE, eON_HandleData*)");
    bVar1 = false;
    break;
  case 1:
  case 5:
    return param_2[4] != 0;
  case 2:
    iVar2 = eON_Int_Thread_IsTerminated(param_2[3]);
    return iVar2 != 0;
  case 4:
    bVar1 = true;
    if (param_2[4] != 0) {
      return param_1 == param_2[3];
    }
    break;
  case 8:
    return param_2[3] != 0;
  case 9:
    return param_2[10] != 0;
  }
  return bVar1;
}

// --- Synchronisation_AddedMessageToThread @0x04149e90 ---
/* source: synchronisationPrimitives */

void Synchronisation_AddedMessageToThread(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar6 = eON_Int_Thread_GetHandleId(param_1);
  if (iVar6 == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  iVar9 = DAT_04518d64 - (int)DAT_04518d60 >> 2;
  if (iVar9 != 0) {
    piVar4 = (int *)*DAT_04518d60;
    iVar7 = 0;
    iVar2 = *piVar4;
    while (iVar6 != iVar2) {
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar9) goto LAB_04149ef6;
      piVar4 = (int *)DAT_04518d60[iVar7];
      iVar2 = *piVar4;
    }
    cVar5 = eON_Int_MsgMatchesInputFilter(param_2,(short)piVar4[6],param_3);
    if ((cVar5 != '\0') && (piVar4[5] = 1, piVar4[7] == -2)) {
      if (piVar4[3] == 0) {
        uVar8 = piVar4[1];
      }
      else if (piVar4[1] == 0) {
        uVar8 = 0;
      }
      else {
        uVar10 = 0;
        do {
          cVar5 = SignalledFor();
          if (cVar5 == '\0') goto LAB_04149ef6;
          uVar8 = piVar4[1];
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
        if ((piVar4[3] != 0) && (uVar8 != 0)) {
          uVar10 = 0;
          do {
            uVar10 = uVar10 + 1;
            ThreadReleasedOnObject();
            uVar8 = piVar4[1];
          } while (uVar10 < uVar8);
        }
      }
      piVar4[7] = uVar8;
      FUN_04147f30();
      if ((piVar4[4] != 0) && (iVar6 = DAT_04518d58 - (int)DAT_04518d54 >> 2, iVar6 != 0)) {
        iVar9 = 0;
        piVar3 = (int *)*DAT_04518d54;
        puVar1 = DAT_04518d54;
        while (piVar3 != piVar4) {
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_04149f57;
          puVar1 = DAT_04518d54 + iVar9;
          piVar3 = (int *)*puVar1;
        }
        *puVar1 = DAT_04518d54[iVar6 + -1];
        DAT_04518d58 = DAT_04518d58 + -4;
      }
LAB_04149f57:
      if (piVar4[6] == 0) {
        FUN_0400a810("twi->InputEventsMask",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x642,"void Synchronisation_AddedMessageToThread(DWORD, UINT, WINBOOL)");
      }
      iVar6 = DAT_04518d64 - (int)DAT_04518d60 >> 2;
      if (iVar6 != 0) {
        iVar9 = 0;
        piVar3 = (int *)*DAT_04518d60;
        puVar1 = DAT_04518d60;
        while (piVar4 != piVar3) {
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_04149f8e;
          puVar1 = DAT_04518d60 + iVar9;
          piVar3 = (int *)*puVar1;
        }
        *puVar1 = DAT_04518d60[iVar6 + -1];
        DAT_04518d64 = DAT_04518d64 + -4;
      }
LAB_04149f8e:
      pthread_cond_signal((pthread_cond_t *)piVar4[0x48]);
    }
  }
LAB_04149ef6:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return;
}

// --- Synchronisation_AllocObject @0x0414a7f0 ---
/* source: synchronisationPrimitives */

uint synchronisationPrimitives_0414a7f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  iVar2 = DAT_04518d94 - DAT_04518d90 >> 2;
  if (iVar2 == 0) {
    puVar3 = malloc(0x2c);
  }
  else {
    DAT_04518d94 = DAT_04518d94 + -4;
    puVar3 = *(undefined4 **)(DAT_04518d90 + -4 + iVar2 * 4);
  }
  puVar3[1] = 1;
  iVar2 = DAT_04516c70;
  puVar3[2] = 0;
  puVar3[4] = 0;
  *puVar3 = param_1;
  puVar3[3] = param_2;
  uVar5 = DAT_04516c74 - iVar2 >> 2;
  if ((int)uVar5 < 2) {
    uVar6 = uVar5;
    if ((int)uVar5 < 1) {
      FUN_0400a810("oldSize > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0xf0,"int FindFreeHandleSlot()");
      iVar2 = DAT_04516c70;
      uVar6 = DAT_04516c74 - DAT_04516c70 >> 2;
    }
LAB_0414a88f:
    uVar1 = uVar5 + 10000;
    if (uVar6 < uVar1) {
      FUN_041484b0();
      iVar2 = DAT_04516c70;
    }
    else if (uVar1 < uVar6) {
      DAT_04516c74 = iVar2 + uVar1 * 4;
    }
    piVar4 = (int *)(iVar2 + uVar5 * 4);
    uVar6 = uVar5;
  }
  else {
    uVar6 = 1;
    if (*(int *)(iVar2 + 4) == 0) {
      piVar4 = (int *)(iVar2 + 4);
      uVar6 = 1;
    }
    else {
      do {
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar5) goto LAB_0414a88f;
        piVar4 = (int *)(iVar2 + uVar6 * 4);
      } while (*piVar4 != 0);
    }
  }
  *piVar4 = (int)puVar3;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return uVar6;
}

// --- Synchronisation_CloseHandle @0x0414c4a0 ---
/* WARNING: Removing unreachable block (ram,0x0414c8cc) */
/* source: synchronisationPrimitives */

undefined4 Synchronisation_CloseHandle(int param_1,char param_2)

{
  allocator *paVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  _Rb_tree_node_base *p_Var6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int *local_24 [5];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((((DAT_04516c6c == '\0') || (param_1 < 0)) || (DAT_04516c74 - DAT_04516c70 >> 2 <= param_1))
     || (piVar3 = *(int **)(DAT_04516c70 + param_1 * 4), piVar3 == (int *)0x0)) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
    uVar7 = 0;
  }
  else {
    iVar10 = piVar3[1];
    if (1 < iVar10) {
      piVar3[1] = iVar10 + -1;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      return 1;
    }
    iVar9 = *piVar3;
    if (((iVar9 == 1) && (*(int *)(piVar3[3] + 8) != 0)) && (param_2 == '\0')) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      FUN_04149570(param_1,0);
      uVar7 = Synchronisation_CloseHandle(param_1,1);
    }
    else {
      piVar3[1] = iVar10 + -1;
      piVar4 = (int *)piVar3[2];
      if (piVar4 != (int *)0x0) {
        do {
          iVar10 = *piVar4;
          if (*(int *)(iVar10 + 0x1c) == -2) {
            *(int *)(iVar10 + 0x1c) = piVar4[2] + 0x80;
          }
          FUN_04147f30();
          iVar9 = *(int *)(iVar10 + 4);
          if (iVar9 != 0) {
            iVar5 = 0;
            do {
              while (*(int **)(iVar10 + 0x20 + iVar5 * 4) != piVar3) {
                iVar5 = iVar5 + 1;
                if (iVar5 == iVar9) goto LAB_0414c560;
              }
              *(undefined4 *)(iVar10 + 0x20 + iVar5 * 4) = 0;
              iVar5 = iVar5 + 1;
            } while (iVar5 != iVar9);
          }
LAB_0414c560:
          if ((*(int *)(iVar10 + 0x10) != 0) &&
             (iVar9 = DAT_04518d58 - (int)DAT_04518d54 >> 2, iVar9 != 0)) {
            iVar5 = 0;
            if (iVar10 == *DAT_04518d54) {
              *DAT_04518d54 = DAT_04518d54[iVar9 + -1];
              DAT_04518d58 = DAT_04518d58 + -4;
            }
            else {
              do {
                iVar5 = iVar5 + 1;
                if (iVar9 == iVar5) goto LAB_0414c56b;
              } while (iVar10 != DAT_04518d54[iVar5]);
              DAT_04518d54[iVar5] = DAT_04518d54[iVar9 + -1];
              DAT_04518d58 = DAT_04518d58 + -4;
            }
          }
LAB_0414c56b:
          if ((*(int *)(iVar10 + 0x18) != 0) &&
             (iVar9 = DAT_04518d64 - (int)DAT_04518d60 >> 2, iVar9 != 0)) {
            iVar5 = 0;
            if (iVar10 == *DAT_04518d60) {
              *DAT_04518d60 = DAT_04518d60[iVar9 + -1];
              DAT_04518d64 = DAT_04518d64 + -4;
            }
            else {
              do {
                iVar5 = iVar5 + 1;
                if (iVar9 == iVar5) goto LAB_0414c576;
              } while (iVar10 != DAT_04518d60[iVar5]);
              DAT_04518d60[iVar5] = DAT_04518d60[iVar9 + -1];
              DAT_04518d64 = DAT_04518d64 + -4;
            }
          }
LAB_0414c576:
          pthread_cond_signal(*(pthread_cond_t **)(iVar10 + 0x120));
          piVar4 = (int *)piVar3[2];
        } while (piVar4 != (int *)0x0);
        iVar9 = *piVar3;
      }
      switch(iVar9) {
      default:
        iVar10 = 0;
        FUN_0400a810("false",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x6b9,"WINBOOL Synchronisation_CloseHandle(HANDLE, bool)");
        break;
      case 1:
        iVar10 = 0;
        fs_DeleteFileHandle(piVar3[3]);
        break;
      case 2:
        iVar10 = 0;
        thread_EraseThreadInfo(piVar3[3],param_1);
        break;
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
switchD_0414c721_caseD_3:
        iVar10 = 0;
        break;
      case 6:
        iVar10 = piVar3[3];
        break;
      case 9:
        iVar10 = 0;
        iVar9 = DAT_04516c64 - (int)DAT_04516c60 >> 2;
        if (iVar9 != 0) {
          iVar10 = 0;
          piVar4 = (int *)*DAT_04516c60;
          puVar2 = DAT_04516c60;
          while (piVar3 != piVar4) {
            iVar10 = iVar10 + 1;
            if (iVar10 == iVar9) goto switchD_0414c721_caseD_3;
            puVar2 = DAT_04516c60 + iVar10;
            piVar4 = (int *)*puVar2;
          }
          *puVar2 = DAT_04516c60[iVar9 + -1];
          iVar10 = 0;
          DAT_04516c64 = DAT_04516c64 + -4;
        }
      }
      if (DAT_04518d84 != (_Rb_tree_node_base *)&DAT_04518d7c) {
        iVar9 = *(int *)(DAT_04518d84 + 0x14);
        p_Var6 = DAT_04518d84;
        while (param_1 != iVar9) {
          p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6);
          if (p_Var6 == (_Rb_tree_node_base *)&DAT_04518d7c) goto LAB_0414c5fc;
          iVar9 = *(int *)(p_Var6 + 0x14);
        }
        pvVar8 = (void *)std::_Rb_tree_rebalance_for_erase
                                   (p_Var6,(_Rb_tree_node_base *)&DAT_04518d7c);
        paVar1 = (allocator *)(*(int *)((int)pvVar8 + 0x10) + -0xc);
        if (paVar1 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
          LOCK();
          piVar4 = (int *)(*(int *)((int)pvVar8 + 0x10) + -4);
          iVar9 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar9 < 1) {
            std::string::_Rep::_M_destroy(paVar1);
          }
        }
        operator_delete(pvVar8);
        DAT_04518d8c = DAT_04518d8c + -1;
      }
LAB_0414c5fc:
      local_24[0] = piVar3;
      if (DAT_04518d94 == DAT_04518d98) {
        FUN_0414d300(&DAT_04518d90,DAT_04518d94,local_24);
      }
      else {
        piVar4 = (int *)0x0;
        if (DAT_04518d94 != (int *)0x0) {
          *DAT_04518d94 = (int)piVar3;
          piVar4 = DAT_04518d94;
        }
        DAT_04518d94 = piVar4 + 1;
      }
      *(undefined4 *)(DAT_04516c70 + param_1 * 4) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      uVar7 = 1;
      if (iVar10 != 0) {
        FUN_0412d570(iVar10);
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

// --- Synchronisation_CreateEvent @0x0414aaf0 ---
/* WARNING: Removing unreachable block (ram,0x0414afa0) */
/* WARNING: Removing unreachable block (ram,0x0414af21) */
/* WARNING: Removing unreachable block (ram,0x0414af32) */
/* source: synchronisationPrimitives */

uint synchronisationPrimitives_0414aaf0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *__s2;
  void *__s2_00;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *local_50;
  uint local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_2c;
  void *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((param_3 != (char *)0x0) && (local_4c = OpenObjectByName(), local_4c != 0)) goto LAB_0414ab20;
  iVar4 = DAT_04518d94 - DAT_04518d90 >> 2;
  if (iVar4 == 0) {
    puVar6 = malloc(0x2c);
  }
  else {
    DAT_04518d94 = DAT_04518d94 + -4;
    puVar6 = *(undefined4 **)(DAT_04518d90 + -4 + iVar4 * 4);
  }
  *puVar6 = 5;
  iVar2 = DAT_04516c74;
  puVar6[1] = 1;
  iVar4 = DAT_04516c70;
  puVar6[2] = 0;
  puVar6[3] = param_1;
  uVar8 = iVar2 - iVar4 >> 2;
  puVar6[4] = param_2;
  if ((int)uVar8 < 2) {
    local_4c = uVar8;
    if ((int)uVar8 < 1) {
      FUN_0400a810("oldSize > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0xf0,"int FindFreeHandleSlot()");
      local_4c = DAT_04516c74 - DAT_04516c70 >> 2;
      iVar4 = DAT_04516c70;
    }
LAB_0414abcb:
    uVar1 = uVar8 + 10000;
    if (local_4c < uVar1) {
      FUN_041484b0();
      iVar4 = DAT_04516c70;
    }
    else if (uVar1 < local_4c) {
      DAT_04516c74 = iVar4 + uVar1 * 4;
    }
    piVar5 = (int *)(iVar4 + uVar8 * 4);
    local_4c = uVar8;
  }
  else {
    local_4c = 1;
    if (*(int *)(iVar4 + 4) == 0) {
      piVar5 = (int *)(iVar4 + 4);
      local_4c = 1;
    }
    else {
      do {
        local_4c = local_4c + 1;
        if (local_4c == uVar8) goto LAB_0414abcb;
        piVar5 = (int *)(iVar4 + local_4c * 4);
      } while (*piVar5 != 0);
    }
  }
  *piVar5 = (int)puVar6;
  if (param_3 == (char *)0x0) goto LAB_0414ab20;
  std::string::string((string *)&local_28,param_3,local_20);
  __s2_00 = local_28;
  if (DAT_04518d80 == (undefined *)0x0) {
    local_44 = local_28;
  }
  else {
    local_50 = &DAT_04518d7c;
    local_44 = local_28;
    uVar8 = *(uint *)((int)local_28 + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar1;
        if (uVar8 <= uVar1) {
          uVar7 = uVar8;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2_00,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414ac7c;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_50 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414ac7c:
    if (local_50 != &DAT_04518d7c) {
      uVar1 = *(uint *)((int)*(void **)(local_50 + 0x10) + -0xc);
      uVar7 = uVar8;
      if (uVar1 <= uVar8) {
        uVar7 = uVar1;
      }
      iVar4 = memcmp(__s2_00,*(void **)(local_50 + 0x10),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar8 - uVar1;
      }
      if (-1 < iVar4) {
                    /* try { // try from 0414ae3f to 0414ae43 has its CatchHandler @ 0414afab */
        FUN_0400a810("!gNamedObjects.count( lpName )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x396,"void AddNamedObject(LPCSTR, HANDLE)");
        local_44 = local_28;
      }
    }
  }
  if ((allocator *)((int)local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar5 = (int *)((int)local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_44 + -0xc));
    }
  }
  std::string::string((string *)&local_2c,param_3,&local_21);
  __s2 = local_2c;
  if (DAT_04518d80 == (undefined *)0x0) {
LAB_0414ad7b:
    local_2c = &DAT_04410d0c;
                    /* try { // try from 0414ad98 to 0414ad9c has its CatchHandler @ 0414af66 */
    FUN_04148950();
    local_48 = local_40;
    if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      local_44 = local_2c;
    }
    else {
      LOCK();
      piVar5 = (int *)(__s2 + -4);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
        local_44 = local_2c;
      }
      else {
        local_44 = local_2c;
      }
    }
  }
  else {
    local_48 = &DAT_04518d7c;
    local_44 = local_2c;
    uVar8 = *(uint *)(local_2c + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar8;
        if (uVar1 <= uVar8) {
          uVar7 = uVar1;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414ad44;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_48 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414ad44:
    if (local_48 == &DAT_04518d7c) goto LAB_0414ad7b;
    uVar1 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
    uVar7 = uVar8;
    if (uVar1 <= uVar8) {
      uVar7 = uVar1;
    }
    iVar4 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar8 - uVar1;
    }
    if (iVar4 < 0) goto LAB_0414ad7b;
  }
  *(uint *)(local_48 + 0x14) = local_4c;
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
LAB_0414ab20:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return local_4c;
}

// --- Synchronisation_CreateMutex @0x0414b180 ---
/* WARNING: Removing unreachable block (ram,0x0414b650) */
/* WARNING: Removing unreachable block (ram,0x0414b5d1) */
/* WARNING: Removing unreachable block (ram,0x0414b5e2) */
/* source: synchronisationPrimitives */

uint synchronisationPrimitives_0414b180(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *__s2;
  void *__s2_00;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  int in_FS_OFFSET;
  undefined *local_50;
  uint local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_2c;
  void *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((param_2 != (char *)0x0) && (local_4c = OpenObjectByName(), local_4c != 0)) goto LAB_0414b1b0;
  iVar4 = DAT_04518d94 - DAT_04518d90 >> 2;
  if (iVar4 == 0) {
    puVar6 = malloc(0x2c);
  }
  else {
    DAT_04518d94 = DAT_04518d94 + -4;
    puVar6 = *(undefined4 **)(DAT_04518d90 + -4 + iVar4 * 4);
  }
  *puVar6 = 4;
  puVar6[1] = 1;
  puVar6[2] = 0;
  if (param_1 == 0) {
    puVar6[3] = 0;
    puVar6[4] = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0xc);
    puVar6[4] = 1;
    puVar6[3] = uVar1;
  }
  uVar8 = DAT_04516c74 - DAT_04516c70 >> 2;
  if ((int)uVar8 < 2) {
    local_4c = uVar8;
    if ((int)uVar8 < 1) {
      FUN_0400a810("oldSize > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0xf0,"int FindFreeHandleSlot()");
      local_4c = DAT_04516c74 - DAT_04516c70 >> 2;
    }
LAB_0414b273:
    uVar2 = uVar8 + 10000;
    if (local_4c < uVar2) {
      FUN_041484b0();
    }
    else if (uVar2 < local_4c) {
      DAT_04516c74 = DAT_04516c70 + uVar2 * 4;
    }
    piVar5 = (int *)(DAT_04516c70 + uVar8 * 4);
    local_4c = uVar8;
  }
  else {
    local_4c = 1;
    if (*(int *)(DAT_04516c70 + 4) == 0) {
      piVar5 = (int *)(DAT_04516c70 + 4);
      local_4c = 1;
    }
    else {
      do {
        local_4c = local_4c + 1;
        if (local_4c == uVar8) goto LAB_0414b273;
        piVar5 = (int *)(DAT_04516c70 + local_4c * 4);
      } while (*piVar5 != 0);
    }
  }
  *piVar5 = (int)puVar6;
  if (param_2 == (char *)0x0) goto LAB_0414b1b0;
  std::string::string((string *)&local_28,param_2,local_20);
  __s2_00 = local_28;
  if (DAT_04518d80 == (undefined *)0x0) {
    local_44 = local_28;
  }
  else {
    local_50 = &DAT_04518d7c;
    local_44 = local_28;
    uVar8 = *(uint *)((int)local_28 + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar2 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar8;
        if (uVar2 <= uVar8) {
          uVar7 = uVar2;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2_00,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar2 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414b31c;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_50 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414b31c:
    if (local_50 != &DAT_04518d7c) {
      uVar2 = *(uint *)((int)*(void **)(local_50 + 0x10) + -0xc);
      uVar7 = uVar8;
      if (uVar2 <= uVar8) {
        uVar7 = uVar2;
      }
      iVar4 = memcmp(__s2_00,*(void **)(local_50 + 0x10),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar8 - uVar2;
      }
      if (-1 < iVar4) {
                    /* try { // try from 0414b4ef to 0414b4f3 has its CatchHandler @ 0414b65b */
        FUN_0400a810("!gNamedObjects.count( lpName )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x396,"void AddNamedObject(LPCSTR, HANDLE)");
        local_44 = local_28;
      }
    }
  }
  if ((allocator *)((int)local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar5 = (int *)((int)local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_44 + -0xc));
    }
  }
  std::string::string((string *)&local_2c,param_2,&local_21);
  __s2 = local_2c;
  if (DAT_04518d80 == (undefined *)0x0) {
LAB_0414b41b:
    local_2c = &DAT_04410d0c;
                    /* try { // try from 0414b438 to 0414b43c has its CatchHandler @ 0414b616 */
    FUN_04148950();
    local_48 = local_40;
    if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      local_44 = local_2c;
    }
    else {
      LOCK();
      piVar5 = (int *)(__s2 + -4);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
        local_44 = local_2c;
      }
      else {
        local_44 = local_2c;
      }
    }
  }
  else {
    local_48 = &DAT_04518d7c;
    local_44 = local_2c;
    uVar8 = *(uint *)(local_2c + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar2 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar8;
        if (uVar2 <= uVar8) {
          uVar7 = uVar2;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar2 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414b3e4;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_48 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414b3e4:
    if (local_48 == &DAT_04518d7c) goto LAB_0414b41b;
    uVar2 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
    uVar7 = uVar8;
    if (uVar2 <= uVar8) {
      uVar7 = uVar2;
    }
    iVar4 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar8 - uVar2;
    }
    if (iVar4 < 0) goto LAB_0414b41b;
  }
  *(uint *)(local_48 + 0x14) = local_4c;
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
LAB_0414b1b0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return local_4c;
}

// --- Synchronisation_CreateSemaphore @0x0414b7a0 ---
/* WARNING: Removing unreachable block (ram,0x0414bc50) */
/* WARNING: Removing unreachable block (ram,0x0414bbd1) */
/* WARNING: Removing unreachable block (ram,0x0414bbe2) */
/* source: synchronisationPrimitives */

uint synchronisationPrimitives_0414b7a0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *__s2;
  void *__s2_00;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *local_50;
  uint local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_2c;
  void *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((param_3 != (char *)0x0) && (local_4c = OpenObjectByName(), local_4c != 0)) goto LAB_0414b7d0;
  iVar4 = DAT_04518d94 - DAT_04518d90 >> 2;
  if (iVar4 == 0) {
    puVar6 = malloc(0x2c);
  }
  else {
    DAT_04518d94 = DAT_04518d94 + -4;
    puVar6 = *(undefined4 **)(DAT_04518d90 + -4 + iVar4 * 4);
  }
  *puVar6 = 8;
  iVar2 = DAT_04516c74;
  puVar6[1] = 1;
  iVar4 = DAT_04516c70;
  puVar6[2] = 0;
  puVar6[3] = param_1;
  uVar8 = iVar2 - iVar4 >> 2;
  puVar6[4] = param_2;
  if ((int)uVar8 < 2) {
    local_4c = uVar8;
    if ((int)uVar8 < 1) {
      FUN_0400a810("oldSize > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0xf0,"int FindFreeHandleSlot()");
      local_4c = DAT_04516c74 - DAT_04516c70 >> 2;
      iVar4 = DAT_04516c70;
    }
LAB_0414b87b:
    uVar1 = uVar8 + 10000;
    if (local_4c < uVar1) {
      FUN_041484b0();
      iVar4 = DAT_04516c70;
    }
    else if (uVar1 < local_4c) {
      DAT_04516c74 = iVar4 + uVar1 * 4;
    }
    piVar5 = (int *)(iVar4 + uVar8 * 4);
    local_4c = uVar8;
  }
  else {
    local_4c = 1;
    if (*(int *)(iVar4 + 4) == 0) {
      piVar5 = (int *)(iVar4 + 4);
      local_4c = 1;
    }
    else {
      do {
        local_4c = local_4c + 1;
        if (local_4c == uVar8) goto LAB_0414b87b;
        piVar5 = (int *)(iVar4 + local_4c * 4);
      } while (*piVar5 != 0);
    }
  }
  *piVar5 = (int)puVar6;
  if (param_3 == (char *)0x0) goto LAB_0414b7d0;
  std::string::string((string *)&local_28,param_3,local_20);
  __s2_00 = local_28;
  if (DAT_04518d80 == (undefined *)0x0) {
    local_44 = local_28;
  }
  else {
    local_50 = &DAT_04518d7c;
    local_44 = local_28;
    uVar8 = *(uint *)((int)local_28 + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar1;
        if (uVar8 <= uVar1) {
          uVar7 = uVar8;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2_00,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414b92c;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_50 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414b92c:
    if (local_50 != &DAT_04518d7c) {
      uVar1 = *(uint *)((int)*(void **)(local_50 + 0x10) + -0xc);
      uVar7 = uVar8;
      if (uVar1 <= uVar8) {
        uVar7 = uVar1;
      }
      iVar4 = memcmp(__s2_00,*(void **)(local_50 + 0x10),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar8 - uVar1;
      }
      if (-1 < iVar4) {
                    /* try { // try from 0414baef to 0414baf3 has its CatchHandler @ 0414bc5b */
        FUN_0400a810("!gNamedObjects.count( lpName )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x396,"void AddNamedObject(LPCSTR, HANDLE)");
        local_44 = local_28;
      }
    }
  }
  if ((allocator *)((int)local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar5 = (int *)((int)local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_44 + -0xc));
    }
  }
  std::string::string((string *)&local_2c,param_3,&local_21);
  __s2 = local_2c;
  if (DAT_04518d80 == (undefined *)0x0) {
LAB_0414ba2b:
    local_2c = &DAT_04410d0c;
                    /* try { // try from 0414ba48 to 0414ba4c has its CatchHandler @ 0414bc16 */
    FUN_04148950();
    local_48 = local_40;
    if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      local_44 = local_2c;
    }
    else {
      LOCK();
      piVar5 = (int *)(__s2 + -4);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
        local_44 = local_2c;
      }
      else {
        local_44 = local_2c;
      }
    }
  }
  else {
    local_48 = &DAT_04518d7c;
    local_44 = local_2c;
    uVar8 = *(uint *)(local_2c + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar8;
        if (uVar1 <= uVar8) {
          uVar7 = uVar1;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414b9f4;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_48 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414b9f4:
    if (local_48 == &DAT_04518d7c) goto LAB_0414ba2b;
    uVar1 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
    uVar7 = uVar8;
    if (uVar1 <= uVar8) {
      uVar7 = uVar1;
    }
    iVar4 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar8 - uVar1;
    }
    if (iVar4 < 0) goto LAB_0414ba2b;
  }
  *(uint *)(local_48 + 0x14) = local_4c;
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
LAB_0414b7d0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return local_4c;
}

// --- Synchronisation_CreateWaitableTimer @0x0414bd70 ---
/* WARNING: Removing unreachable block (ram,0x0414c210) */
/* WARNING: Removing unreachable block (ram,0x0414c191) */
/* WARNING: Removing unreachable block (ram,0x0414c1a2) */
/* source: synchronisationPrimitives */

uint synchronisationPrimitives_0414bd70(undefined4 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *__s2;
  void *__s2_00;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *local_50;
  uint local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_2c;
  void *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((param_2 != (char *)0x0) && (local_4c = OpenObjectByName(), local_4c != 0)) goto LAB_0414bda0;
  iVar4 = DAT_04518d94 - DAT_04518d90 >> 2;
  if (iVar4 == 0) {
    puVar6 = malloc(0x2c);
  }
  else {
    DAT_04518d94 = DAT_04518d94 + -4;
    puVar6 = *(undefined4 **)(DAT_04518d90 + -4 + iVar4 * 4);
  }
  iVar2 = DAT_04516c74;
  *puVar6 = 9;
  iVar4 = DAT_04516c70;
  puVar6[1] = 1;
  puVar6[2] = 0;
  uVar8 = iVar2 - iVar4 >> 2;
  puVar6[9] = param_1;
  if ((int)uVar8 < 2) {
    local_4c = uVar8;
    if ((int)uVar8 < 1) {
      FUN_0400a810("oldSize > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0xf0,"int FindFreeHandleSlot()");
      local_4c = DAT_04516c74 - DAT_04516c70 >> 2;
      iVar4 = DAT_04516c70;
    }
LAB_0414be43:
    uVar1 = uVar8 + 10000;
    if (local_4c < uVar1) {
      FUN_041484b0();
      iVar4 = DAT_04516c70;
    }
    else if (uVar1 < local_4c) {
      DAT_04516c74 = iVar4 + uVar1 * 4;
    }
    piVar5 = (int *)(iVar4 + uVar8 * 4);
    local_4c = uVar8;
  }
  else {
    local_4c = 1;
    if (*(int *)(iVar4 + 4) == 0) {
      piVar5 = (int *)(iVar4 + 4);
      local_4c = 1;
    }
    else {
      do {
        local_4c = local_4c + 1;
        if (local_4c == uVar8) goto LAB_0414be43;
        piVar5 = (int *)(iVar4 + local_4c * 4);
      } while (*piVar5 != 0);
    }
  }
  *piVar5 = (int)puVar6;
  if (param_2 == (char *)0x0) goto LAB_0414bda0;
  std::string::string((string *)&local_28,param_2,local_20);
  __s2_00 = local_28;
  if (DAT_04518d80 == (undefined *)0x0) {
    local_44 = local_28;
  }
  else {
    local_50 = &DAT_04518d7c;
    local_44 = local_28;
    uVar8 = *(uint *)((int)local_28 + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar1;
        if (uVar8 <= uVar1) {
          uVar7 = uVar8;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2_00,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414beec;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_50 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414beec:
    if (local_50 != &DAT_04518d7c) {
      uVar1 = *(uint *)((int)*(void **)(local_50 + 0x10) + -0xc);
      uVar7 = uVar8;
      if (uVar1 <= uVar8) {
        uVar7 = uVar1;
      }
      iVar4 = memcmp(__s2_00,*(void **)(local_50 + 0x10),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar8 - uVar1;
      }
      if (-1 < iVar4) {
                    /* try { // try from 0414c0af to 0414c0b3 has its CatchHandler @ 0414c21b */
        FUN_0400a810("!gNamedObjects.count( lpName )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x396,"void AddNamedObject(LPCSTR, HANDLE)");
        local_44 = local_28;
      }
    }
  }
  if ((allocator *)((int)local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar5 = (int *)((int)local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_44 + -0xc));
    }
  }
  std::string::string((string *)&local_2c,param_2,&local_21);
  __s2 = local_2c;
  if (DAT_04518d80 == (undefined *)0x0) {
LAB_0414bfeb:
    local_2c = &DAT_04410d0c;
                    /* try { // try from 0414c008 to 0414c00c has its CatchHandler @ 0414c1d6 */
    FUN_04148950();
    local_48 = local_40;
    if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      local_44 = local_2c;
    }
    else {
      LOCK();
      piVar5 = (int *)(__s2 + -4);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 < 1) {
        std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
        local_44 = local_2c;
      }
      else {
        local_44 = local_2c;
      }
    }
  }
  else {
    local_48 = &DAT_04518d7c;
    local_44 = local_2c;
    uVar8 = *(uint *)(local_2c + -0xc);
    puVar3 = DAT_04518d80;
    do {
      while( true ) {
        puVar9 = puVar3;
        uVar1 = *(uint *)((int)*(void **)(puVar9 + 0x10) + -0xc);
        uVar7 = uVar8;
        if (uVar1 <= uVar8) {
          uVar7 = uVar1;
        }
        iVar4 = memcmp(*(void **)(puVar9 + 0x10),__s2,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar1 - uVar8;
        }
        if (-1 < iVar4) break;
        puVar3 = *(undefined **)(puVar9 + 0xc);
        if (*(undefined **)(puVar9 + 0xc) == (undefined *)0x0) goto LAB_0414bfb4;
      }
      puVar3 = *(undefined **)(puVar9 + 8);
      local_48 = puVar9;
    } while (*(undefined **)(puVar9 + 8) != (undefined *)0x0);
LAB_0414bfb4:
    if (local_48 == &DAT_04518d7c) goto LAB_0414bfeb;
    uVar1 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
    uVar7 = uVar8;
    if (uVar1 <= uVar8) {
      uVar7 = uVar1;
    }
    iVar4 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar8 - uVar1;
    }
    if (iVar4 < 0) goto LAB_0414bfeb;
  }
  *(uint *)(local_48 + 0x14) = local_4c;
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar5 = (int *)(local_44 + -4);
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
LAB_0414bda0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return local_4c;
}

// --- Synchronisation_ObjectExistsForName @0x0414a0c0 ---
/* WARNING: Removing unreachable block (ram,0x0414a484) */
/* WARNING: Removing unreachable block (ram,0x0414a44b) */
/* WARNING: Removing unreachable block (ram,0x0414a45c) */
/* source: synchronisationPrimitives */

undefined4 Synchronisation_ObjectExistsForName(char *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *__s2;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 local_4c;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  void *local_2c;
  undefined1 *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  std::string::string((string *)&local_2c,param_1,&local_21);
  if (DAT_04518d80 == (undefined *)0x0) {
    local_4c = 0;
    bVar9 = false;
  }
  else {
    local_48 = &DAT_04518d7c;
    uVar2 = *(uint *)((int)local_2c + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar8 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar8 + 0x10) + -0xc);
        uVar7 = uVar3;
        if (uVar2 <= uVar3) {
          uVar7 = uVar2;
        }
        iVar5 = memcmp(*(void **)(puVar8 + 0x10),local_2c,uVar7);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar8 + 0xc);
        if (*(undefined **)(puVar8 + 0xc) == (undefined *)0x0) goto LAB_0414a14c;
      }
      puVar4 = *(undefined **)(puVar8 + 8);
      local_48 = puVar8;
    } while (*(undefined **)(puVar8 + 8) != (undefined *)0x0);
LAB_0414a14c:
    bVar9 = false;
    local_4c = 0;
    if (local_48 != &DAT_04518d7c) {
      uVar3 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = uVar2;
      }
      iVar5 = memcmp(local_2c,*(void **)(local_48 + 0x10),uVar7);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      if (-1 < iVar5) {
        local_4c = 1;
        bVar9 = param_2 != (int *)0x0;
      }
    }
  }
  if ((allocator *)((int)local_2c + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar6 = (int *)((int)local_2c + -4);
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_2c + -0xc));
    }
  }
  if (!bVar9) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
    return local_4c;
  }
  std::string::string((string *)&local_28,param_1,local_20);
  __s2 = local_28;
  if (DAT_04518d80 != (undefined *)0x0) {
    local_48 = &DAT_04518d7c;
    local_44 = local_28;
    uVar2 = *(uint *)(local_28 + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar8 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar8 + 0x10) + -0xc);
        uVar7 = uVar3;
        if (uVar2 <= uVar3) {
          uVar7 = uVar2;
        }
        iVar5 = memcmp(*(void **)(puVar8 + 0x10),__s2,uVar7);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar8 + 0xc);
        if (*(undefined **)(puVar8 + 0xc) == (undefined *)0x0) goto LAB_0414a21c;
      }
      puVar4 = *(undefined **)(puVar8 + 8);
      local_48 = puVar8;
    } while (*(undefined **)(puVar8 + 8) != (undefined *)0x0);
LAB_0414a21c:
    if (local_48 != &DAT_04518d7c) {
      uVar3 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = uVar2;
      }
      iVar5 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar7);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      if (-1 < iVar5) goto LAB_0414a293;
    }
  }
  local_28 = &DAT_04410d0c;
                    /* try { // try from 0414a270 to 0414a274 has its CatchHandler @ 0414a39d */
  FUN_04148950();
  local_48 = local_40;
  if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    local_44 = local_28;
  }
  else {
    LOCK();
    piVar6 = (int *)(__s2 + -4);
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
      local_44 = local_28;
    }
    else {
      local_44 = local_28;
    }
  }
LAB_0414a293:
  iVar5 = *(int *)(local_48 + 0x14);
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar6 = (int *)(local_44 + -4);
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
  if (iVar5 != 0) {
    if ((((DAT_04516c6c == '\0') || (iVar5 < 0)) || (DAT_04516c74 - DAT_04516c70 >> 2 <= iVar5)) ||
       (piVar6 = *(int **)(DAT_04516c70 + iVar5 * 4), piVar6 == (int *)0x0)) {
      FUN_0400a810(&DAT_04334813,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0x65c,"WINBOOL Synchronisation_ObjectExistsForName(LPCSTR, void**)");
      piVar6 = (int *)0x0;
    }
    if (*piVar6 == 6) {
      piVar6[1] = piVar6[1] + 1;
      *param_2 = iVar5;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return 1;
}

// --- Synchronisation_RegisterNamedObject @0x0414a4a0 ---
/* WARNING: Removing unreachable block (ram,0x0414a7c6) */
/* WARNING: Removing unreachable block (ram,0x0414a77e) */
/* WARNING: Removing unreachable block (ram,0x0414a770) */
/* source: synchronisationPrimitives */

void synchronisationPrimitives_0414a4a0(undefined4 param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *__s2;
  void *__s2_00;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined1 *local_2c;
  void *local_28;
  allocator local_21;
  allocator local_20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  std::string::string((string *)&local_28,param_2,local_20);
  __s2_00 = local_28;
  if (DAT_04518d80 == (undefined *)0x0) {
    local_44 = local_28;
  }
  else {
    local_48 = &DAT_04518d7c;
    local_44 = local_28;
    uVar2 = *(uint *)((int)local_28 + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar7 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar7 + 0x10) + -0xc);
        uVar6 = uVar2;
        if (uVar3 <= uVar2) {
          uVar6 = uVar3;
        }
        iVar5 = memcmp(*(void **)(puVar7 + 0x10),__s2_00,uVar6);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar7 + 0xc);
        if (*(undefined **)(puVar7 + 0xc) == (undefined *)0x0) goto LAB_0414a52c;
      }
      puVar4 = *(undefined **)(puVar7 + 8);
      local_48 = puVar7;
    } while (*(undefined **)(puVar7 + 8) != (undefined *)0x0);
LAB_0414a52c:
    if (local_48 != &DAT_04518d7c) {
      uVar3 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar5 = memcmp(__s2_00,*(void **)(local_48 + 0x10),uVar6);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      if (-1 < iVar5) {
                    /* try { // try from 0414a6bf to 0414a6c3 has its CatchHandler @ 0414a78f */
        FUN_0400a810("!gNamedObjects.count( lpName )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x396,"void AddNamedObject(LPCSTR, HANDLE)");
        local_44 = local_28;
      }
    }
  }
  if ((allocator *)((int)local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)((int)local_44 + -4);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_44 + -0xc));
    }
  }
  std::string::string((string *)&local_2c,param_2,&local_21);
  __s2 = local_2c;
  if (DAT_04518d80 != (undefined *)0x0) {
    local_48 = &DAT_04518d7c;
    local_44 = local_2c;
    uVar2 = *(uint *)(local_2c + -0xc);
    puVar4 = DAT_04518d80;
    do {
      while( true ) {
        puVar7 = puVar4;
        uVar3 = *(uint *)((int)*(void **)(puVar7 + 0x10) + -0xc);
        uVar6 = uVar3;
        if (uVar2 <= uVar3) {
          uVar6 = uVar2;
        }
        iVar5 = memcmp(*(void **)(puVar7 + 0x10),__s2,uVar6);
        if (iVar5 == 0) {
          iVar5 = uVar3 - uVar2;
        }
        if (-1 < iVar5) break;
        puVar4 = *(undefined **)(puVar7 + 0xc);
        if (*(undefined **)(puVar7 + 0xc) == (undefined *)0x0) goto LAB_0414a5f4;
      }
      puVar4 = *(undefined **)(puVar7 + 8);
      local_48 = puVar7;
    } while (*(undefined **)(puVar7 + 8) != (undefined *)0x0);
LAB_0414a5f4:
    if (local_48 != &DAT_04518d7c) {
      uVar3 = *(uint *)((int)*(void **)(local_48 + 0x10) + -0xc);
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar5 = memcmp(__s2,*(void **)(local_48 + 0x10),uVar6);
      if (iVar5 == 0) {
        iVar5 = uVar2 - uVar3;
      }
      if (-1 < iVar5) goto LAB_0414a66b;
    }
  }
  local_2c = &DAT_04410d0c;
                    /* try { // try from 0414a648 to 0414a64c has its CatchHandler @ 0414a6ec */
  FUN_04148950();
  local_48 = local_40;
  if ((allocator *)(__s2 + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    local_44 = local_2c;
  }
  else {
    LOCK();
    piVar1 = (int *)(__s2 + -4);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(__s2 + -0xc));
      local_44 = local_2c;
    }
    else {
      local_44 = local_2c;
    }
  }
LAB_0414a66b:
  *(undefined4 *)(local_48 + 0x14) = param_1;
  if ((allocator *)(local_44 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_44 + -4);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_44 + -0xc));
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return;
}

// --- Synchronisation_SignalAPCOnThread @0x04149420 ---
/* source: synchronisationPrimitives */

void Synchronisation_SignalAPCOnThread(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  iVar6 = DAT_04518d58 - (int)DAT_04518d54 >> 2;
  if (iVar6 != 0) {
    piVar2 = (int *)*DAT_04518d54;
    iVar4 = 0;
    iVar5 = *piVar2;
    while (iVar5 != param_1) {
      iVar4 = iVar4 + 1;
      if (iVar4 == iVar6) goto LAB_0414946e;
      piVar2 = (int *)DAT_04518d54[iVar4];
      iVar5 = *piVar2;
    }
    if (piVar2[7] == -2) {
      piVar2[7] = 0xc0;
      FUN_04147f30();
      if (piVar2[4] == 0) {
        FUN_0400a810("twi->AlertableWait",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                     ,0x5f3,"void Synchronisation_SignalAPCOnThread(HANDLE)");
      }
      iVar6 = DAT_04518d58 - (int)DAT_04518d54 >> 2;
      if (iVar6 != 0) {
        iVar5 = 0;
        piVar3 = (int *)*DAT_04518d54;
        puVar1 = DAT_04518d54;
        while (piVar3 != piVar2) {
          iVar5 = iVar5 + 1;
          if (iVar6 == iVar5) goto LAB_041494ce;
          puVar1 = DAT_04518d54 + iVar5;
          piVar3 = (int *)*puVar1;
        }
        *puVar1 = DAT_04518d54[iVar6 + -1];
        DAT_04518d58 = DAT_04518d58 + -4;
      }
LAB_041494ce:
      if ((piVar2[6] != 0) && (iVar6 = DAT_04518d64 - (int)DAT_04518d60 >> 2, iVar6 != 0)) {
        iVar5 = 0;
        piVar3 = (int *)*DAT_04518d60;
        puVar1 = DAT_04518d60;
        while (piVar3 != piVar2) {
          iVar5 = iVar5 + 1;
          if (iVar6 == iVar5) goto LAB_041494d5;
          puVar1 = DAT_04518d60 + iVar5;
          piVar3 = (int *)*puVar1;
        }
        *puVar1 = DAT_04518d60[iVar6 + -1];
        DAT_04518d64 = DAT_04518d64 + -4;
      }
LAB_041494d5:
      pthread_cond_signal((pthread_cond_t *)piVar2[0x48]);
    }
  }
LAB_0414946e:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return;
}

// --- Synchronisation_WaitForMultipleObjects @0x0414cac0 ---
/* source: synchronisationPrimitives */

int Synchronisation_WaitForMultipleObjects
              (int param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  pthread_cond_t *__cond;
  __time_t _Var5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_FS_OFFSET;
  undefined4 local_16c;
  undefined4 local_15c;
  int local_158;
  uint local_154;
  int local_150;
  int local_14c;
  undefined4 local_148;
  uint local_144;
  int local_140 [65];
  pthread_cond_t *local_3c;
  timespec local_38;
  timeval local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  pthread_cond_t *local_20;
  
  eON_Int_MsgQueue_PumpSend();
  iVar9 = *(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
  if (param_5 != 0) {
    cVar1 = DispatchQueuedAPC();
    if (cVar1 != '\0') {
      return 0xc0;
    }
  }
  if ((short)param_6 == 0) {
LAB_0414cafe:
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
    local_16c = 0;
    if (param_1 == 0) goto LAB_0414cbc1;
  }
  else {
    uVar2 = eON_GetCurrentThreadId();
    cVar1 = eON_Int_ThreadHasQueuedInputMatchingFilter(uVar2,param_6 & 0xffff);
    if (cVar1 == '\0') goto LAB_0414cafe;
    if (param_4 == 0) {
      return param_1;
    }
    if (param_1 == 0) {
      return 0;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
    local_16c = 1;
  }
  iVar7 = 0;
  do {
    iVar8 = *(int *)(param_2 + iVar7 * 4);
    if ((((DAT_04516c6c == '\0') || (iVar8 < 0)) || (DAT_04516c74 - DAT_04516c70 >> 2 <= iVar8)) ||
       (iVar8 = *(int *)(DAT_04516c70 + iVar8 * 4), iVar8 == 0)) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      return iVar7 + 0x80;
    }
    if ((param_4 != 0) && (iVar7 != 0)) {
      if (iVar8 == local_140[1]) {
LAB_0414cc68:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
        eON_SetLastError(0x57);
        return -1;
      }
      iVar10 = 0;
      while (iVar10 + 1 != iVar7) {
        iVar3 = iVar10 + 2;
        iVar10 = iVar10 + 1;
        if (local_140[iVar3] == iVar8) goto LAB_0414cc68;
      }
    }
    local_140[iVar7 + 1] = iVar8;
    iVar7 = iVar7 + 1;
  } while (iVar7 != param_1);
LAB_0414cbc1:
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0xc);
  if (param_4 == 0) {
    iVar7 = 0;
    if (param_1 != 0) {
      do {
        cVar1 = SignalledFor();
        if (cVar1 != '\0') {
          ThreadReleasedOnObject();
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
          return iVar7;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != param_1);
    }
LAB_0414cd1b:
    iVar7 = DAT_04518d48;
    if (param_3 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      sched_yield();
      local_140[0] = 0x102;
    }
    else {
      if (param_1 != 0) {
        iVar8 = param_1;
        iVar10 = DAT_04518d4c;
        do {
          iVar3 = iVar10 - iVar7 >> 2;
          if (iVar3 == 0) {
            piVar4 = malloc(0xc);
          }
          else {
            iVar10 = iVar10 + -4;
            piVar4 = *(int **)(iVar7 + -4 + iVar3 * 4);
            DAT_04518d4c = iVar10;
          }
          iVar3 = iVar8 + -1;
          iVar8 = local_140[iVar8];
          *piVar4 = (int)&local_15c;
          piVar4[2] = iVar3;
          piVar4[1] = *(int *)(iVar8 + 8);
          *(int **)(iVar8 + 8) = piVar4;
          iVar8 = iVar3;
        } while (iVar3 != 0);
      }
      if (param_5 != 0) {
        local_28 = &local_15c;
        if (DAT_04518d58 == DAT_04518d5c) {
          FUN_0414d490(&DAT_04518d54,DAT_04518d58,&local_28);
        }
        else {
          if (DAT_04518d58 != (int *)0x0) {
            *DAT_04518d58 = (int)local_28;
          }
          DAT_04518d58 = DAT_04518d58 + 1;
        }
      }
      if (param_6 != 0) {
        local_24 = &local_15c;
        if (DAT_04518d64 == DAT_04518d68) {
          FUN_0414d490(&DAT_04518d60,DAT_04518d64,&local_24);
        }
        else {
          if (DAT_04518d64 != (int *)0x0) {
            *DAT_04518d64 = (int)local_24;
          }
          DAT_04518d64 = DAT_04518d64 + 1;
        }
      }
      local_158 = param_1;
      local_154 = param_3;
      local_150 = param_4;
      local_14c = param_5;
      local_144 = param_6;
      local_148 = local_16c;
      iVar7 = (int)DAT_04518d70 - DAT_04518d6c >> 2;
      local_15c = uVar2;
      if (iVar7 == 0) {
        __cond = malloc(0x30);
        pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
      }
      else {
        DAT_04518d70 = DAT_04518d70 + -1;
        __cond = *(pthread_cond_t **)(DAT_04518d6c + -4 + iVar7 * 4);
      }
      local_140[0] = -2;
      local_3c = __cond;
      if (param_3 == 0xffffffff) {
        *(undefined4 *)(iVar9 + 0x4c) = 1;
        do {
          pthread_cond_wait(local_3c,(pthread_mutex_t *)&DAT_04516c7c);
        } while (local_140[0] == -2);
      }
      else {
        gettimeofday(&local_30,(__timezone_ptr_t)0x0);
        local_38.tv_sec = local_30.tv_sec + param_3 / 1000;
        local_38.tv_nsec = local_30.tv_usec * 1000 + (param_3 % 1000) * 1000000;
        if (1000000000 < local_38.tv_nsec) {
          local_38.tv_nsec = local_38.tv_nsec + -1000000000;
          local_38.tv_sec = local_38.tv_sec + 1;
        }
        *(undefined4 *)(iVar9 + 0x4c) = 1;
        while (iVar7 = pthread_cond_timedwait(local_3c,(pthread_mutex_t *)&DAT_04516c7c,&local_38),
              iVar7 != 0x6e) {
          if (local_140[0] != -2) goto LAB_0414cf0b;
          gettimeofday(&local_30,(__timezone_ptr_t)0x0);
          iVar7 = local_30.tv_usec * 1000;
          _Var5 = local_30.tv_sec;
          if (1000000000 < iVar7) {
            iVar7 = iVar7 + -1000000000;
            _Var5 = local_30.tv_sec + 1;
          }
          if ((local_38.tv_sec < _Var5) || (local_38.tv_nsec <= (int)(&DAT_000186a0 + iVar7)))
          break;
        }
        if (local_140[0] == -2) {
          FUN_04147f30();
          if (param_5 != 0) {
            FUN_0414d240(&local_15c);
          }
          if (local_144 != 0) {
            FUN_0414d2a0(&local_15c);
          }
          local_20 = local_3c;
          if (DAT_04518d70 == DAT_04518d74) {
            FUN_041480e0();
          }
          else {
            if (DAT_04518d70 != (undefined4 *)0x0) {
              *DAT_04518d70 = local_3c;
            }
            DAT_04518d70 = DAT_04518d70 + 1;
          }
          *(undefined4 *)(iVar9 + 0x4c) = 0;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
          thread_SuspendPoint(iVar9);
          sched_yield();
          return 0x102;
        }
      }
LAB_0414cf0b:
      local_20 = local_3c;
      if (DAT_04518d70 == DAT_04518d74) {
        FUN_041480e0();
      }
      else {
        puVar6 = (undefined4 *)0x0;
        if (DAT_04518d70 != (undefined4 *)0x0) {
          *DAT_04518d70 = local_3c;
          puVar6 = DAT_04518d70;
        }
        DAT_04518d70 = puVar6 + 1;
      }
      *(undefined4 *)(iVar9 + 0x4c) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
      if (local_140[0] == 0xc0) {
        if (local_14c == 0) {
          FUN_0400a810("twi.AlertableWait",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                       ,0x5b8,
                       "HRESULT Synchronisation_WaitForMultipleObjects(DWORD, void* const*, DWORD, WINBOOL, WINBOOL, DWORD)"
                      );
        }
        DispatchQueuedAPC();
      }
      thread_SuspendPoint(iVar9);
    }
  }
  else {
    if (param_1 != 0) {
      iVar7 = 0;
      do {
        cVar1 = SignalledFor();
        if (cVar1 == '\0') goto LAB_0414cd1b;
        iVar7 = iVar7 + 1;
      } while (iVar7 != param_1);
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        ThreadReleasedOnObject();
      } while (iVar9 != param_1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
    local_140[0] = 0;
  }
  return local_140[0];
}

// --- ThreadReleasedOnObject @0x04147dc0 ---
/* source: synchronisationPrimitives */

void __regparm3 ThreadReleasedOnObject(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  switch(*param_1) {
  default:
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                 ,0x22f,"void ThreadReleasedOnObject(eON_HandleData*, HANDLE)");
    break;
  case 1:
  case 2:
    break;
  case 4:
    param_1[4] = param_1[4] + 1;
    param_1[3] = param_2;
    return;
  case 5:
    if (param_1[3] == 0) {
      param_1[4] = 0;
      return;
    }
    break;
  case 8:
    iVar1 = param_1[3];
    if (iVar1 < 1) {
      FUN_0400a810("handleData->Data.Semaphore.Count > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp"
                   ,0x209,"void ThreadReleasedOnObject(eON_HandleData*, HANDLE)");
      iVar1 = param_1[3];
    }
    param_1[3] = iVar1 + -1;
    return;
  case 9:
    if (param_1[9] == 0) {
      param_1[10] = 0;
      return;
    }
  }
  return;
}

// --- attached helper FUN_00131a90 @0x04131a90 (call-graph exclusive to this TU) ---
undefined4 FUN_04131a90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0403c420(param_1);
  if (cVar1 == '\0') {
    iVar2 = Synchronisation_CloseHandle(param_1,0);
    uVar3 = 1;
    if (iVar2 == 0) {
      eON_SetLastError(6);
      uVar3 = 0;
    }
  }
  else {
    SplitFile_Close(param_1);
    uVar3 = 1;
  }
  return uVar3;
}

// --- attached helper FUN_001493c0 @0x041493c0 (call-graph exclusive to this TU) ---
void FUN_041493c0(int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c7c);
  if ((((DAT_04516c6c != '\0') && (-1 < param_1)) && (param_1 < DAT_04516c74 - DAT_04516c70 >> 2))
     && (*(int *)(DAT_04516c70 + param_1 * 4) != 0)) {
    SignalObject();
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c7c);
  return;
}

// --- attached helper FUN_00149570 @0x04149570 (call-graph exclusive to this TU) ---
void FUN_04149570(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iStack_40;
  
  piVar7 = (int *)&stack0xffffffc4;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_04516d10);
  if (DAT_04516d2c != (int *)0x0) {
    piVar4 = DAT_04516d2c;
    piVar8 = (int *)0x0;
    do {
      while ((piVar6 = piVar4, *piVar6 != param_1 || ((param_2 != 0 && (piVar6[1] != param_2))))) {
        piVar4 = (int *)piVar6[5];
        piVar8 = piVar6;
        if ((int *)piVar6[5] == (int *)0x0) goto LAB_04149620;
      }
      puVar1 = (undefined4 *)piVar6[4];
      *puVar1 = 0x3e3;
      puVar1[1] = 0;
      iVar2 = piVar6[3];
      if (iVar2 == 0) {
        if (puVar1[4] == 0) {
          *piVar7 = (int)&DAT_04516c7c;
          piVar7[-1] = 0x4149668;
          pthread_mutex_lock((pthread_mutex_t *)*piVar7);
          if ((((DAT_04516c6c != '\0') && (-1 < param_1)) &&
              (param_1 < DAT_04516c74 - DAT_04516c70 >> 2)) &&
             ((piVar4 = *(int **)(DAT_04516c70 + param_1 * 4), piVar4 != (int *)0x0 &&
              (*piVar4 == 1)))) {
            piVar4[4] = 1;
            piVar7[-1] = 0x41496d3;
            SignalObject();
          }
          *piVar7 = (int)&DAT_04516c7c;
          piVar7[-1] = 0x41496b7;
          pthread_mutex_unlock((pthread_mutex_t *)*piVar7);
        }
        else {
          *piVar7 = puVar1[4];
          piVar7[-1] = 0x414964a;
          eON_SetEvent();
          piVar7 = piVar7 + -1;
        }
      }
      else {
        piVar7[2] = (int)puVar1;
        iVar3 = piVar6[1];
        *piVar7 = iVar2;
        piVar7[1] = iVar3;
        piVar7[-1] = 0x41495f3;
        FUN_04145980();
        *piVar7 = piVar6[1];
        piVar7[-1] = 0x41495fe;
        Synchronisation_SignalAPCOnThread();
      }
      piVar4 = (int *)piVar6[5];
      piVar5 = piVar4;
      if (piVar8 != (int *)0x0) {
        piVar8[5] = (int)piVar4;
        piVar5 = DAT_04516d2c;
      }
      DAT_04516d2c = piVar5;
      piVar6[5] = (int)DAT_04518d44;
      DAT_04518d44 = piVar6;
    } while (piVar4 != (int *)0x0);
  }
LAB_04149620:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516d10);
  return;
}

