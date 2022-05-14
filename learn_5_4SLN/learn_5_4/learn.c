#include"learn.h"




ListNode* BuyListNode(LTDateType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->date = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
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
	/*assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	phead->prev = newnode;
	newnode->next = phead;*/
	ListInsert(phead, x);
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



void ListPushFront(ListNode* phead, LTDateType x)
{
	/*assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* first = phead->next;
	{
			newnode->next = first;
			first->prev = newnode;
			newnode->prev = phead;
			phead->next = newnode;
	}*/
	ListInsert(phead->next, x);
}



void ListPopBack(ListNode* phead)
{
	assert(phead);
	struct ListNode* tail = phead->prev, *pre = tail->prev;
	if (tail != phead)
	{
		pre->next = phead;
		phead->prev = pre;
		free(tail);
	}
}



void ListPopFront(ListNode* phead)
{
	assert(phead);
	ListNode* del = phead->next, *delnext = del->next;
	if (del != phead)
	{
		phead->next = delnext;
		del->prev = phead;
		free(del);
	}
}




ListNode* ListFind(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->date == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}



void ListInsert(ListNode* pos, LTDateType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	struct ListNode* prev = pos->prev, *next = pos;
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = next;
	next->prev = newnode;
}




void ListErase(ListNode* pos, LTDateType x)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;
	ListNode* newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = next;
	next->prev = newnode;
}



