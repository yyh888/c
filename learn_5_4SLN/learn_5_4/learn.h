#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

typedef int LTDateType;

typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDateType date;
}ListNode;

extern ListNode* BuyListNode(LTDateType x);
extern ListNode* ListInit();
extern void ListPushBack(ListNode* phead, LTDateType x);
extern void ListPushFront(ListNode* phead, LTDateType x);
extern void ListPrint(ListNode* phead);
extern void ListPopBack(ListNode* phead);
extern void ListPopFront(ListNode* phead);
extern ListNode* ListFind(ListNode* phead, LTDateType x);
extern void ListInsert(ListNode* pos, LTDateType x);
extern void ListErase(ListNode* pos, LTDateType x);