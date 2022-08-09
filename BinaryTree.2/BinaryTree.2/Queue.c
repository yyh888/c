#include"Queue.h"


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

void QueuePush(Queue* pq, QDateType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->date = x;
	newnode->next = NULL;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	//只有一个结点
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}

QDateType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->date;
}

QDateType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->date;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	int count = 0;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}