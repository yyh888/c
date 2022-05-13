#include"SeqList.h"




void SeqListInit(SeqList* pq)
{
	assert(pq);//防止空指针
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;
}


void SeqCheckCapacity(SeqList* pq)
{
	assert(pq);
	//满了就扩容
	if (pq->capacity == pq->size)
	{
		int newcapacity = pq->capacity == 0 ? 4 : 2 * pq->capacity;
		SeqDateType* NewA = realloc(pq->a, sizeof(SeqList) * newcapacity);
		//防止realloc后改变了pq原来指向的地址
		if (NewA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			pq->a = NewA;
			pq->capacity = newcapacity;
		}
	}
}



void SeqListPushBack(SeqList* pq, SeqDateType x)
{
	assert(pq);
	SeqCheckCapacity(pq);//扩容判断
	pq->a[pq->size] = x;
	pq->size++;
}


void SeqListPushFront(SeqList* pq, SeqDateType x)
{
	assert(pq);
	SeqCheckCapacity(pq);
	//从最后一个开始依次右移
	int cur = pq->size - 1;
	while (cur >= 0)
	{
		pq->a[cur + 1] = pq->a[cur];
		cur--;
	}
	pq->a[0] = x;
	pq->size++;
}



void SeqListPopBack(SeqList* pq)
{
	assert(pq);
	assert(pq->size > 0);//保证有数据删除
	pq->size--;
}


void SeqListPopFront(SeqList* pq)
{
	assert(pq);
	int cur = 0;
	while (cur < pq->size - 1)
	{
		pq->a[cur] = pq->a[cur + 1];
		cur++;
	}
	pq->size--;
}



int SeqListSearch(SeqList* pq, SeqDateType x)
{
	assert(pq);
	int cur = 0;
	while (cur < pq->size)
	{
		if (pq->a[cur] == x)
		{
			return cur;
		}
		cur++;
	}
	return -1;
}


void SeqListInsert(SeqList* pq, int pos, SeqDateType x)
{
	assert(pq);
	SeqCheckCapacity(pq);
	int cur = pq->size;
	//往后覆盖
	while (cur >= pos)
	{
		pq->a[cur + 1] = pq->a[cur];
		cur--;
	}
	pq->a[pos] = x;
	pq->size++;
}




void SeqListPrint(SeqList* pq)
{
	for (int i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
	printf("\n");
}



void SeqListPop(SeqList* pq, int pos)
{
	assert(pq);
	//保证有元素可删除
	assert(pq->size > 0);
	int cur = pos;
	while (cur < pq->size - 1)
	{
		pq->a[cur] = pq->a[cur + 1];
		cur++;
	}
	pq->size--;
}

void SeqListDestory(SeqList* pq)
{
	assert(pq);
	free(pq->a);
	pq->a = NULL;
	pq->capacity = pq->size = 0;
}

