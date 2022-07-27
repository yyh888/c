#include "Seq.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}

void SeqListCheck(SeqList* ps)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		if (ps->capacity == 0)
		{
			ps->a = (int*)malloc(sizeof(int) * 4);
			ps->capacity = 4;
		}
		else
		{
			int* new = (int*)realloc(ps->a, sizeof(int) * ps->capacity * 2);
			if (new == NULL)
			{
				printf("realloc fail");
				exit(-1);
			}
			ps->a = new;
			ps->capacity *= 2;
		}
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListCheck(ps);
	int i = ps->size - 1;
	while (i >= 0)
	{
		ps->a[i + 1] = ps->a[i];
		i--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);
	int cur = 0;
	while (cur < ps->size - 1)
	{
		ps->a[cur] = ps->a[cur + 1];
		cur++;
	}
	ps->size--;
}

void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;
}

int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	SeqListCheck(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(ps->size > 0);
	int cur = pos;
	while (cur < ps->size - 1)
	{
		ps->a[cur] = ps->a[cur + 1];
		cur++;
	}
	ps->size--;
}