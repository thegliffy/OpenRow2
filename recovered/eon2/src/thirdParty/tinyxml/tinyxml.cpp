// Recovered source: eon2/src/thirdParty/tinyxml/tinyxml.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- TiXmlAttributeSet::Add @0x041c5ba0 ---
/* source: tinyxml */

void TiXmlAttributeSet__Add(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_2 + 0x14);
  do {
    if (iVar1 == param_1) {
LAB_041c5c04:
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_2 + 0x20) = param_1;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      iVar1 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) = param_2;
      *(int *)(iVar1 + 0x20) = param_2;
      return;
    }
    iVar4 = strcmp((char *)(*(int *)(iVar1 + 0x14) + 8),(char *)(iVar2 + 8));
    if (iVar4 == 0) {
      FUN_0400a810("!Find( addMe->Name() )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                   ,0x5ef,"void TiXmlAttributeSet::Add(TiXmlAttribute*)");
      goto LAB_041c5c04;
    }
    iVar1 = *(int *)(iVar1 + 0x20);
  } while( true );
}

// --- TiXmlAttributeSet::FindOrCreate @0x041c2150 ---
/* source: tinyxml */

undefined4 * __regparm3 TiXmlAttributeSet__FindOrCreate(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  size_t sVar5;
  
  puVar3 = operator_new(0x24);
  puVar3[8] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_043629f8;
  puVar3[5] = &DAT_0451eee4;
  puVar3[6] = &DAT_0451eee4;
  puVar3[4] = 0;
  puVar3[7] = 0;
  do {
    if (param_1 == iVar1) {
LAB_041c21fd:
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      puVar3[8] = param_1;
      puVar3[7] = uVar2;
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined4 **)(param_1 + 0x1c) = puVar3;
      *(undefined4 **)(iVar1 + 0x20) = puVar3;
      sVar5 = strlen(param_2);
      TiXmlString__assign(puVar3 + 5,param_2,sVar5);
      return puVar3;
    }
    iVar4 = strcmp((char *)(*(int *)(iVar1 + 0x14) + 8),&DAT_0451eeec);
    if (iVar4 == 0) {
      FUN_0400a810("!Find( addMe->Name() )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                   ,0x5ef,"void TiXmlAttributeSet::Add(TiXmlAttribute*)");
      goto LAB_041c21fd;
    }
    iVar1 = *(int *)(iVar1 + 0x20);
  } while( true );
}

// --- TiXmlAttributeSet::Remove @0x041c5c20 ---
/* source: tinyxml */

void TiXmlAttributeSet__Remove(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar1 == param_1) {
      FUN_0400a810("0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                   ,0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
      return;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  iVar2 = *(int *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  iVar3 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}

// --- TiXmlAttributeSet::~TiXmlAttributeSet @0x041c5740 ---
/* source: tinyxml */

void TiXmlAttributeSet___TiXmlAttributeSet(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)param_1[8] != param_1) {
                    /* try { // try from 041c576f to 041c579c has its CatchHandler @ 041c57dc */
    FUN_0400a810("sentinel.next == &sentinel",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x5e5,"TiXmlAttributeSet::~TiXmlAttributeSet()");
  }
  if (param_1 != (undefined4 *)param_1[7]) {
    FUN_0400a810("sentinel.prev == &sentinel",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x5e6,"TiXmlAttributeSet::~TiXmlAttributeSet()");
  }
  puVar1 = (undefined4 *)param_1[6];
  *param_1 = &PTR_FUN_043629f8;
  if ((puVar1 != &DAT_0451eee4) && (puVar1 != (undefined4 *)0x0)) {
    operator_delete__(puVar1);
  }
  puVar1 = (undefined4 *)param_1[5];
  if ((puVar1 != &DAT_0451eee4) && (puVar1 != (undefined4 *)0x0)) {
    operator_delete__(puVar1);
  }
  *param_1 = &PTR_FUN_04362158;
  return;
}

// --- TiXmlComment::Print @0x041c16b0 ---
/* source: tinyxml */

void TiXmlComment__Print(undefined4 param_1,FILE *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (FILE *)0x0) {
    FUN_0400a810("cfile",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x513,"virtual void TiXmlComment::Print(FILE*, int) const");
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      fwrite(&DAT_043025f0,1,4,param_2);
    } while (iVar1 != param_3);
  }
  fprintf(param_2,"<!--%s-->");
  return;
}

// --- TiXmlDocument::LoadFile @0x041c4320 ---
/* source: tinyxml */

byte TiXmlDocument__LoadFile(int *param_1,FILE *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  size_t __size;
  char *__ptr;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  if (param_2 != (FILE *)0x0) {
    piVar2 = (int *)param_1[6];
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[10];
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar1;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = -1;
    param_1[1] = -1;
    fseek(param_2,0,2);
    __size = ftell(param_2);
    fseek(param_2,0,0);
    if ((int)__size < 1) {
      TiXmlDocument__SetError(param_1,0xc,0,0,0);
      return 0;
    }
    __ptr = operator_new__(__size + 1);
    *__ptr = '\0';
    sVar3 = fread(__ptr,__size,1,param_2);
    if (sVar3 == 1) {
      pcVar5 = __ptr + __size;
      *pcVar5 = '\0';
      cVar6 = *__ptr;
      pcVar4 = __ptr;
      pcVar7 = __ptr;
      do {
        if (cVar6 == '\0') {
          if (pcVar5 < pcVar4) {
            FUN_0400a810("q <= (buf+length)",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                         ,0x432,"bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
          }
          *pcVar4 = '\0';
          (**(code **)(*param_1 + 0xc))(param_1,__ptr,0,param_3);
          operator_delete__(__ptr);
          return *(byte *)(param_1 + 0xb) ^ 1;
        }
        if (pcVar7 < pcVar5) {
          if (pcVar4 <= pcVar5) goto LAB_041c443c;
LAB_041c449c:
          FUN_0400a810("q <= (buf+length)",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                       ,0x424,"bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
          if (pcVar7 < pcVar4) goto LAB_041c44d4;
LAB_041c4444:
          cVar6 = *pcVar7;
          if (cVar6 != '\r') goto LAB_041c4450;
LAB_041c4510:
          *pcVar4 = '\n';
          cVar6 = pcVar7[1];
          if (cVar6 == '\n') {
            cVar6 = pcVar7[2];
            pcVar7 = pcVar7 + 2;
          }
          else {
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          FUN_0400a810("p < (buf+length)",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                       ,0x423,"bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
          if (pcVar5 < pcVar4) goto LAB_041c449c;
LAB_041c443c:
          if (pcVar4 <= pcVar7) goto LAB_041c4444;
LAB_041c44d4:
          FUN_0400a810(&DAT_04361c9b,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                       ,0x425,"bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
          cVar6 = *pcVar7;
          if (cVar6 == '\r') goto LAB_041c4510;
LAB_041c4450:
          *pcVar4 = cVar6;
          cVar6 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
        pcVar4 = pcVar4 + 1;
      } while( true );
    }
    operator_delete__(__ptr);
  }
  TiXmlDocument__SetError(param_1,2,0,0,0);
  return 0;
}

// --- TiXmlDocument::Print @0x041c4a90 ---
/* source: tinyxml */

void TiXmlDocument__Print(int param_1,FILE *param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == (FILE *)0x0) {
    FUN_0400a810("cfile",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x47b,"virtual void TiXmlDocument::Print(FILE*, int) const");
  }
  for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    (**(code **)(*piVar1 + 8))(piVar1,param_2,param_3);
    fputc(10,param_2);
  }
  return;
}

// --- TiXmlElement::RemoveAttribute @0x041c34b0 ---
/* source: tinyxml */

void TiXmlElement__RemoveAttribute(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  piVar2 = piVar1;
  while( true ) {
    if (piVar2 == (int *)(param_1 + 0x2c)) {
      return;
    }
    iVar5 = strcmp((char *)(piVar2[5] + 8),param_2);
    piVar4 = piVar1;
    if (iVar5 == 0) break;
    piVar2 = (int *)piVar2[8];
  }
  do {
    if (piVar1 == (int *)(param_1 + 0x2c)) {
      FUN_0400a810("0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                   ,0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
LAB_041c353f:
                    /* WARNING: Could not recover jumptable at 0x041c354e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))();
      return;
    }
    if (piVar1 == piVar2) {
      iVar5 = piVar4[7];
      *(int *)(iVar5 + 0x20) = piVar4[8];
      iVar3 = piVar4[8];
      piVar4[8] = 0;
      *(int *)(iVar3 + 0x1c) = iVar5;
      piVar4[7] = 0;
      goto LAB_041c353f;
    }
    piVar1 = (int *)piVar1[8];
    piVar4 = piVar2;
  } while( true );
}

// --- TiXmlNode::InsertAfterChild @0x041c2fa0 ---
/* source: tinyxml */

int TiXmlNode__InsertAfterChild(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar5 = *(int **)(param_2 + 0x10);
  if (piVar5 != param_1) {
    return 0;
  }
  if (param_3[5] != 0) {
    iVar2 = (**(code **)(*param_3 + 0x40))(param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    *(int **)(iVar2 + 0x10) = piVar5;
    *(int *)(iVar2 + 0x24) = param_2;
    *(undefined4 *)(iVar2 + 0x28) = uVar3;
    if (*(int *)(param_2 + 0x28) == 0) {
      if (piVar5[7] != param_2) {
        FUN_0400a810("lastChild == afterThis",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                     ,0x120,"TiXmlNode* TiXmlNode::InsertAfterChild(TiXmlNode*, const TiXmlNode&)");
      }
      piVar5[7] = iVar2;
    }
    else {
      *(int *)(*(int *)(param_2 + 0x28) + 0x24) = iVar2;
    }
    *(int *)(param_2 + 0x28) = iVar2;
    return iVar2;
  }
  piVar4 = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  while (iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4), iVar2 == 0) {
    piVar1 = piVar4 + 4;
    piVar4 = (int *)*piVar1;
    if ((int *)*piVar1 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*piVar5 + 0x10))(piVar5);
      goto LAB_041c3027;
    }
    piVar5 = (int *)piVar5[4];
  } while (piVar5 != (int *)0x0);
  uVar3 = 0;
LAB_041c3027:
  TiXmlDocument__SetError(uVar3,0xf,0,0,0);
  return 0;
}

// --- TiXmlNode::InsertBeforeChild @0x041c2e60 ---
/* source: tinyxml */

int TiXmlNode__InsertBeforeChild(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar5 = *(int **)(param_2 + 0x10);
  if (piVar5 != param_1) {
    return 0;
  }
  if (param_3[5] != 0) {
    iVar2 = (**(code **)(*param_3 + 0x40))(param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    *(int **)(iVar2 + 0x10) = piVar5;
    *(int *)(iVar2 + 0x28) = param_2;
    *(undefined4 *)(iVar2 + 0x24) = uVar3;
    if (*(int *)(param_2 + 0x24) == 0) {
      if (piVar5[6] != param_2) {
        FUN_0400a810("firstChild == beforeThis",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                     ,0xff,"TiXmlNode* TiXmlNode::InsertBeforeChild(TiXmlNode*, const TiXmlNode&)");
      }
      piVar5[6] = iVar2;
    }
    else {
      *(int *)(*(int *)(param_2 + 0x24) + 0x28) = iVar2;
    }
    *(int *)(param_2 + 0x24) = iVar2;
    return iVar2;
  }
  piVar4 = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  while (iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4), iVar2 == 0) {
    piVar1 = piVar4 + 4;
    piVar4 = (int *)*piVar1;
    if ((int *)*piVar1 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*piVar5 + 0x10))(piVar5);
      goto LAB_041c2ee7;
    }
    piVar5 = (int *)piVar5[4];
  } while (piVar5 != (int *)0x0);
  uVar3 = 0;
LAB_041c2ee7:
  TiXmlDocument__SetError(uVar3,0xf,0,0,0);
  return 0;
}

// --- TiXmlNode::IterateChildren @0x041c3320 ---
/* source: tinyxml */

undefined4 TiXmlNode__IterateChildren(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != param_1) {
      FUN_0400a810("previous->parent == this",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                   ,0x189,"const TiXmlNode* TiXmlNode::IterateChildren(const TiXmlNode*) const");
    }
    return *(undefined4 *)(param_2 + 0x28);
  }
  return *(undefined4 *)(param_1 + 0x18);
}

// --- TiXmlNode::LinkEndChild @0x041c2bb0 ---
/* source: tinyxml */

int * TiXmlNode__LinkEndChild(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_20;
  
  piVar4 = param_2;
  if (((int *)param_2[4] != (int *)0x0) && ((int *)param_2[4] != param_1)) {
    FUN_0400a810("node->parent == 0 || node->parent == this",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0xbc,"TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
  do {
    iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
      piVar4 = param_2;
      if (iVar2 != 0) goto LAB_041c2c2b;
      break;
    }
    piVar1 = piVar4 + 4;
    piVar4 = (int *)*piVar1;
  } while ((int *)*piVar1 != (int *)0x0);
  goto LAB_041c2c98;
  while (piVar1 = piVar4 + 4, piVar4 = (int *)*piVar1, (int *)*piVar1 != (int *)0x0) {
LAB_041c2c2b:
    iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
    if (iVar2 != 0) {
      local_20 = (**(code **)(*piVar4 + 0x10))(piVar4);
      goto LAB_041c2c42;
    }
  }
  local_20 = 0;
LAB_041c2c42:
  iVar2 = 0;
  piVar4 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
        goto LAB_041c2c6f;
      }
      piVar1 = piVar4 + 4;
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    iVar2 = 0;
  }
LAB_041c2c6f:
  if (local_20 != iVar2) {
    FUN_0400a810("node->GetDocument() == 0 || node->GetDocument() == this->GetDocument()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0xbd,"TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
LAB_041c2c98:
  if (param_2[5] != 0) {
    iVar2 = param_1[7];
    param_2[4] = (int)param_1;
    param_2[10] = 0;
    param_2[9] = iVar2;
    if (iVar2 == 0) {
      param_1[6] = (int)param_2;
    }
    else {
      *(int **)(iVar2 + 0x28) = param_2;
    }
    param_1[7] = (int)param_2;
    return param_2;
  }
  (**(code **)(*param_2 + 4))(param_2);
  piVar4 = param_1;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
    if (iVar2 != 0) break;
    piVar4 = (int *)piVar4[4];
  }
  iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  do {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      goto LAB_041c2cff;
    }
    param_1 = (int *)param_1[4];
  } while (param_1 != (int *)0x0);
  uVar3 = 0;
LAB_041c2cff:
  TiXmlDocument__SetError(uVar3,0xf,0,0,0);
  return (int *)0x0;
}

// --- TiXmlNode::RemoveChild @0x041c31f0 ---
/* source: tinyxml */

undefined4 TiXmlNode__RemoveChild(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if (param_2[4] == param_1) {
      iVar1 = param_2[10];
      iVar2 = param_2[9];
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x1c) = iVar2;
      }
      else {
        *(int *)(iVar1 + 0x24) = iVar2;
        iVar2 = param_2[9];
      }
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x18) = iVar1;
      }
      else {
        *(int *)(iVar2 + 0x28) = iVar1;
      }
      (**(code **)(*param_2 + 4))(param_2);
      return 1;
    }
    FUN_0400a810("0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x157,"bool TiXmlNode::RemoveChild(TiXmlNode*)");
  }
  return 0;
}

// --- TiXmlText::Print @0x041c2670 ---
/* WARNING: Removing unreachable block (ram,0x041c2730) */
/* WARNING: Removing unreachable block (ram,0x041c2734) */
/* source: tinyxml */

void TiXmlText__Print(int param_1,FILE *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (FILE *)0x0) {
    FUN_0400a810("cfile",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x536,"virtual void TiXmlText::Print(FILE*, int) const");
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* try { // try from 041c270f to 041c2725 has its CatchHandler @ 041c2771 */
    TiXmlBase__EncodeString();
    fputs(&DAT_0451eeec,param_2);
  }
  else {
    fputc(10,param_2);
    if (0 < param_3) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        fwrite(&DAT_043025f0,1,4,param_2);
      } while (iVar1 != param_3);
    }
    fprintf(param_2,"<![CDATA[%s]]>\n",*(int *)(param_1 + 0x20) + 8);
  }
  return;
}

// --- tinyxml_TiXmlElement_Print @0x041c1740 ---
void tinyxml_TiXmlElement_Print(int param_1,FILE *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 == (FILE *)0x0) {
    FUN_0400a810("cfile",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/thirdParty/tinyxml/tinyxml.cpp"
                 ,0x323,"virtual void TiXmlElement::Print(FILE*, int) const");
  }
  if (0 < param_3) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      fwrite(&DAT_043025f0,1,4,param_2);
    } while (iVar1 != param_3);
  }
  fprintf(param_2,(char *)&PTR_DAT_04361b69,*(int *)(param_1 + 0x20) + 8);
  piVar2 = *(int **)(param_1 + 0x4c);
  piVar3 = piVar2;
  if (piVar2 != (int *)(param_1 + 0x2c)) {
    while (piVar3 != (int *)0x0) {
      do {
        fputc(0x20,param_2);
        (**(code **)(*piVar2 + 8))(piVar2,param_2,param_3);
        piVar2 = (int *)piVar2[8];
      } while (*(int *)piVar2[6] != 0);
      piVar3 = *(int **)piVar2[5];
    }
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 == (int *)0x0) {
    fwrite(&PTR_DAT_04361b6d,1,3,param_2);
    return;
  }
  if ((piVar3 == *(int **)(param_1 + 0x1c)) &&
     (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)) {
    fputc(0x3e,param_2);
    (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18),param_2,param_3 + 1);
  }
  else {
    fputc(0x3e,param_2);
    piVar3 = *(int **)(param_1 + 0x18);
    if (piVar3 != (int *)0x0) {
      do {
        iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3);
        if (iVar1 == 0) {
          fputc(10,param_2);
        }
        (**(code **)(*piVar3 + 8))(piVar3,param_2,param_3 + 1);
        piVar3 = (int *)piVar3[10];
      } while (piVar3 != (int *)0x0);
    }
    fputc(10,param_2);
    if (0 < param_3) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        fwrite(&DAT_043025f0,1,4,param_2);
      } while (iVar1 != param_3);
    }
  }
  fprintf(param_2,"</%s>");
  return;
}

