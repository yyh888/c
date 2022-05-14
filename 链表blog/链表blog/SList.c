#include"SList.h"


SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


void SListPushFront(SLTNode** pplist, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}


void SListPushBack(SLTNode** pplist, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pplist == NULL)
	{
		pplist = newnode;
	}
	else
	{
		//找到尾
		SLTNode* cur = *pplist;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}


void SListInsertBefore(SLTNode** pplist, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode= BuySLTNode(x);
	//在第一个位置前插
	if (pos == *pplist)
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
	else
	{
		//找到前一个结点位置
		SLTNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}


void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}



void SListPopFront(SLTNode** pplist)
{
	//要有元素可删
	assert(*pplist);
	SLTNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}


void SListPopBack(SLTNode** pplist)
{
	//要有元素可删
	assert(*pplist);
	//只有一个结点
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}

	SLTNode* prev = NULL;
	SLTNode* tail = *pplist;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	prev->next = NULL;
}



void SlistEraseCur(SLTNode** pplist, SLTNode* pos)
{
	assert(pos);
	//要有结点删
	assert(*pplist);
	//头删除
	if (*pplist == pos)
	{
		SListPopFront(*pplist);
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


void SListDestroy(SLTNode** pplist)
{
	SLTNode* cur = *pplist;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pplist = NULL;
}