#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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
extern void ListInsert(ListNode* pos, LTDateType x);
extern void ListPopBack(ListNode* phead);
extern void ListPopFront(ListNode* phead);
extern void ListErase(ListNode* pos);
extern void ListPrint(ListNode* phead);
extern bool ListEmpty(ListNode* phead);
extern void ListDestroy(ListNode* phead);
