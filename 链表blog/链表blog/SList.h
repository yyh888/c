#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>




typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;//������
	struct SListNode* next;//ָ����һ�����
}SLTNode;


extern void SListPushFront(SLTNode** pplist, SLTDataType x);
extern void SListPushBack(SLTNode** pplist, SLTDataType x);
extern void SListInsertBefore(SLTNode** pplist, SLTNode* pos, SLTDataType x);
extern void SListInsertAfter(SLTNode* pos, SLTDataType x);
extern void SListPopFront(SLTNode** pplist);
extern void SListPopBack(SLTNode** pplist);
extern void SlistEraseCur(SLTNode** pplist, SLTNode* pos);
extern void SListDestroy(SLTNode** pplist);