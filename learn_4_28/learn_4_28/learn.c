#pragma once
#include"learn.h"






void SListPrint(SLTNode* plist)
{
	SLTNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* node = (SLTNode*)malloc(sizeof(SLTNode));
	node->data = x;
	node->next = NULL;
	return node;
}

void SListPushBack(SLTNode** pplist, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		//找尾
		SLTNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}



void SListPopBack(SLTNode** pplist)
{
	//1.没有节点
	//2.一个节点
	//3.多个节点
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}

void SListPushFront(SLTNode** pplist, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}


void SListPopFront(SLTNode** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	SLTNode* cur = *pplist;
	*pplist = (*pplist)->next;
	free(cur);
	cur = NULL;
}




SLTNode* SListFind(SLTNode** pplist, SLTDataType x)
{
	SLTNode* cur = *pplist;
	//遍历链表
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}


void SListInsertBefore(SLTNode** pplist, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	if (pos == *pplist)
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
	else
	{
		SLTNode* prev = NULL;
		//找pos
		SLTNode* cur = *pplist;
		while (cur != pos)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}


void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		return;
	}
	else
	{
		SLTNode* next = pos->next;
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}


void SlistEraseCur(SLTNode** pplist, SLTNode* pos)
{
	if (*pplist == pos)
	{
		SLTNode* cur = *pplist;
		*pplist = (*pplist)->next;
		free(cur);
	}
	else
	{
		SLTNode* cur = *pplist;
		SLTNode* prev = NULL;
		while (cur != pos)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}