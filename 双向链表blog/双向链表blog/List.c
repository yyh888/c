#include"List.h"



ListNode* BuyListNode(LTDateType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->date = x;
	newnode->prev = NULL;
	return newnode;
}


ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}


void ListPushBack(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	//找尾
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}


void ListPushFront(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* first = phead->next;
	{
			newnode->next = first;
			first->prev = newnode;
			newnode->prev = phead;
			phead->next = newnode;
	}
}


void ListInsert(ListNode* pos, LTDateType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	struct ListNode* prev = pos->prev, * next = pos;
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = next;
	next->prev = newnode;
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	ListNode* tail = phead->prev, * prev = tail->prev;
	//不能删除哨兵位
	if (tail != phead)
	{
		free(tail);
		phead->prev = prev;
		prev->next = phead;
	}
}



void ListPopFront(ListNode* phead)
{
	assert(phead);
	ListNode* del = phead->next, * next = del->next;
	//不能删哨兵位
	if (del != phead)
	{
		free(del);
		phead->next = next;
		next->prev = phead;
	}
}


void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev, * next = pos->next;
	prev->next = next;
	next->prev = prev;
}



void ListPrint(ListNode* phead)
{
		assert(phead);
		ListNode* cur = phead->next;
		while (cur != phead)
		{
			printf("%d ", cur->date);
			cur = cur->next;
		}
		printf("\n");
}



bool ListEmpty(ListNode* phead)
{
	return phead->next == phead;
}


void ListDestroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* del = cur;
		cur = cur->next;
		free(del);
	}
	free(phead);
	phead = NULL;
}
