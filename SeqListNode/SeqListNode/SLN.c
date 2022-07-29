#include "SLN.h"

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->data = x;
	newnode->next = NULL;
}
// �������ӡ
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//��β
	SListNode* cur = *pplist;
	SListNode* newnode = BuySListNode(x);
	if (cur == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist && *pplist);
	SListNode* cur = *pplist;
	SListNode* prev = *pplist;
	//��β
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;
	}
	if (cur == prev)
	{
		free(cur);
		(*pplist) = NULL;
	}
	else
	{
		free(cur);
		prev->next = NULL;
	}
}
// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist && *pplist);
	SListNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
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
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos)
{
	assert(pos && pos->next);
	SListNode* del = pos->next;
	SListNode* next = del->next;
	free(next);
	pos->next = next;
}
// �����������
void SListDestroy(SListNode* plist)
{
	assert(plist);
	SListNode* cur = plist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}