#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


extern void SListPrint(SLTNode* plist);
extern  void SListPushBack(SLTNode* plist, SLTDataType x);
extern void SListPushFront(SLTNode* plist, SLTDataType x);
extern void SListPopBack(SLTNode* plist, SLTDataType x);
extern void SListPopBack(SLTNode* plist, SLTDataType x);