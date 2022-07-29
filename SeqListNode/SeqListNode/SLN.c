#include "SLN.h"

// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->data = x;
	newnode->next = NULL;
}
// 单链表打印
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
// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	//找尾
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
// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist && *pplist);
	SListNode* cur = *pplist;
	SListNode* prev = *pplist;
	//找尾
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
// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist && *pplist);
	SListNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}
// 单链表查找
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
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos)
{
	assert(pos && pos->next);
	SListNode* del = pos->next;
	SListNode* next = del->next;
	free(next);
	pos->next = next;
}
// 单链表的销毁
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