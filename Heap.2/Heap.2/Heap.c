#include "Heap.h"

void Swap(HPDataType* e1, HPDataType* e2)
{
	HPDataType tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}

void AdjustDown(HPDataType* a, int n, int parent)//Ð¡¶Ñ
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] > a[child + 1])
		{
			child++;
		}

		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}


void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	memcpy(hp->_a, a, n * sizeof(HPDataType));
	hp->_capacity = hp->_size = n;
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(hp->_a, n, i);
	}
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->_capacity == hp->_size)
	{
		HPDataType* tmp = (HPDataType*)realloc(hp->_a, sizeof(HPDataType) * (2 * hp->_capacity));
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		hp->_a = tmp;
		hp->_capacity *= 2;
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	AdjustUp(hp->_a, hp->_size - 1);
}

void HeapPrint(Heap* hp)
{
	assert(hp);
	int row = 0;
	for (row = 1; row < hp->_size; row++)
	{
		if ((int)(pow(2, row) - 1) / hp->_size != 0)
		{
			break;
		}
	}
	int col = (int)pow(2, row - 1);
	int i = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//´òÓ¡¿Õ¸ñ
		for (j = 0; j < (col / 2) - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < (int)pow(2, i); j++)
		{
			if (k >= hp->_size)
			{
				break;
			}
			printf("%d ", hp->_a[k++]);
		}
		printf("\n");
	}
}


void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->_a);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}

HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(hp->_size > 0);
	return hp->_a[0];
}

int HeapSize(Heap* hp)
{
	assert(hp);
	return (hp->_size - 1);
}

int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}

void HeapPop(Heap* hp)
{
	assert(hp);
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}