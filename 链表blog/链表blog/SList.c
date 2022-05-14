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
		//�ҵ�β
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
	//�ڵ�һ��λ��ǰ��
	if (pos == *pplist)
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
	else
	{
		//�ҵ�ǰһ�����λ��
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
	//Ҫ��Ԫ�ؿ�ɾ
	assert(*pplist);
	SLTNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}


void SListPopBack(SLTNode** pplist)
{
	//Ҫ��Ԫ�ؿ�ɾ
	assert(*pplist);
	//ֻ��һ�����
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
	//Ҫ�н��ɾ
	assert(*pplist);
	//ͷɾ��
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