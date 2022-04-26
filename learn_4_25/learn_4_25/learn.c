#include"learn.h"

void SeqListInit(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;
}


void SeqListDestory(SeqList* pq)
{
	assert(pq);
	free(pq->a);
	pq->a = NULL;
	pq->capacity = pq->size = 0;
}


void SeqCheckCapacity(SeqList* pq)
{
	assert(pq);
	//如果满了就扩容
	if (pq->size == pq->capacity)
	{
		int newcapacity = pq->capacity == 0 ? 4 : pq->capacity * 2;
		SeqDateType* NewA = realloc(pq->a, newcapacity * sizeof(SeqDateType));
		if (NewA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pq->a = NewA;
		pq->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* pq, SeqDateType x)
{
	assert(pq);
	int pos = pq->size;
	SeqListInsert(pq, pos, x);
	/*SeqCheckCapacity(pq);
	pq->a[pq->size] = x;
	pq->size++;*/
}


void SeqListPrint(SeqList* pq)
{
	int i = 0;
	for (i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
	printf("\n");
}

void SeqListPushFront(SeqList* pq, SeqDateType x)
{
	assert(pq);
	int pos = 0;
	SeqListInsert(pq, pos, x);
	/*SeqCheckCapacity(pq);
	int end = pq->size - 1;
	while (end >= 0)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->a[0] = x;
	pq->size++;*/
}


void SeqListPopBack(SeqList* pq)
{
	assert(pq);
	int pos = pq->size - 1;
	SeqListPop(pq, pos);
	/*assert(pq->size > 0);
	pq->size--;*/
}


void SeqListPopFront(SeqList* pq)
{
	assert(pq);
	int pos = 0;
	SeqListPop(pq, pos);
	/*assert(pq->size > 0);
	int start = 0;
	while (start < pq->size - 1)
	{
		pq->a[start] = pq->a[start + 1];
		start++;
	}
	pq->size--;*/
}


int SeqListSearch(SeqList* pq, SeqDateType x)
{
	assert(pq);
	int i = 0;
	for (i = 0; i < pq->size; i++)
	{
		if (pq->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}


void SeqListInsert(SeqList* pq, int pos, SeqDateType x)
{
	assert(pq);
	SeqCheckCapacity(pq);
	int end = pq->size - 1;
	while (end >= pos)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->size++;
	pq->a[pos] = x;
}


void SeqListPop(SeqList* pq, int pos)
{
	assert(pq);
	assert(pq->size > 0);
	SeqCheckCapacity(pq);
	while (pos < pq->size - 1)
	{
		pq->a[pos] = pq->a[pos + 1];
		pos++;
	}
	pq->size--;
}