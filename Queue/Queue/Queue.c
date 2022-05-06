#include"Queue.h"


void QueueInit(Queue* pst)
{
	assert(pst);
	pst->head = pst->tail = NULL;
}



void QueueDestroy(Queue* pst)
{
	assert(pst);
	QueueNode* cur = pst->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pst->head = pst->tail = NULL;

}

void QueuePush(Queue* pst, QDateType x)
{
	assert(pst);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->date = x;
	newnode->next = NULL;
	if (pst->head == NULL)
	{
		pst->head = newnode;
		pst->tail = newnode;
	}
	else
	{
		pst->tail->next = newnode;
		pst->tail = newnode;
	}
}



void QueuePop(Queue* pst)
{
	assert(pst);
	assert(!QueueEmpty(pst));
	if (pst->head->next == NULL)
	{
		free(pst->head);
		pst->head = pst->tail = NULL;
	}
	QueueNode* next = pst->head->next;
	free(pst->head);
	pst->head = next;
}




QDateType QueueBack(Queue* pst)
{
	assert(pst);
	assert(!QueueEmpty(pst));
	return pst->tail->date;
}



QDateType QueueFront(Queue* pst)
{
	assert(pst);
	assert(!QueueEmpty(pst));
	return pst->head->date;
}

bool QueueEmpty(Queue* pst)
{
	assert(pst);
	return pst->head == NULL;
}





int QueueSize(Queue* pst)
{
	QueueNode* cur = pst->head;
	int size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}