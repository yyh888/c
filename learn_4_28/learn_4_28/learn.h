#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


extern void SListPrint(SLTNode* plist);
extern  void SListPushBack(SLTNode** pplist, SLTDataType x);
extern void SListPushFront(SLTNode** pplist, SLTDataType x);
extern void SListPopBack(SLTNode** pplist);
extern void SListPopFront(SLTNode** pplist);
extern SLTNode* SListFind(SLTNode** pplist, SLTDataType x);
extern void SListInsertAfter(SLTNode* pos, SLTDataType x);
extern void SListInsertBefore(SLTNode** pplist, SLTNode* pos, SLTDataType x);
extern void SListEraseAfter(SLTNode* pos);
extern void SlistEraseCur(SLTNode** pplist, SLTNode* pos);