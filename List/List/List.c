#include "List.h"


ListNode* ListCreate(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->_data = x;
	newnode->_prev = NULL;
	newnode->_next = NULL;
	return newnode;
}

ListNode* ListInit()
{
	ListNode* guard = (ListNode*)malloc(sizeof(ListNode));
	guard->_next = guard;
	guard->_prev = guard;
	return guard;
}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* tail = pHead->_prev;
	ListNode* newnode = ListCreate(x);
	tail->_next = newnode;
	newnode->_prev = tail;
	newnode->_next = pHead;
	pHead->_prev = newnode;
}

void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* next = pHead->_next;
	ListNode* newnode = ListCreate(x);
	newnode->_next = next;
	newnode->_prev = pHead;
	pHead->_next = newnode;
	next->_prev = newnode;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->_prev, *next = pos->_next;
	ListNode* newnode = ListCreate(x);
	newnode->_next = next;
	newnode->_prev = prev;
	prev->_next = newnode;
	next->_prev = newnode;
}


void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	ListNode* del = pHead->_prev, *prev = del->_prev;
	if (del != pHead)
	{
		free(del);
		prev->_next = pHead;
		pHead->_prev = prev;
	}
}

void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	ListNode* del = pHead->_next, * next = del->_next;
	if (del != pHead)
	{
		free(del);
		pHead->_next = next;
		next->_prev = pHead;
	}
}

ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->_next;
		}
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->_prev;
	ListNode* new = ListCreate(x);
	new->_prev = prev;
	new->_next = pos;
	pos->_prev = new;
	prev->_next = new;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->_prev, * next = pos->_next;
	prev->_next = next;
	next->_prev = prev;
	free(pos);
}


void ListDestory(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		ListNode* tmp = cur;
		cur = cur->_next;
		free(tmp);
	}
	free(pHead);
}