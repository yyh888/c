#include"Heap.h"




void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}


void AdjustDown(HPDataType a[], int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] > a[child + 1])
		{
			child++;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}



void HeapInit(HP* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (php->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	memcpy(php->a, a, n * sizeof(HPDataType));
	php->size = php->capacity = n;
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, php->size, i);
	}
}


void HeapPrint(HP* php)
{
	assert(php);
	int row = 0;
	for (row = 1; row < php->size; row++)
	{
		if ((int)(pow(2, row) - 1) / php->size != 0)
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
		//打印空格
		for (j = 0; j < (col / 2) - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < (int)pow(2, i); j++)
		{
			if (k >= php->size)
			{
				break;
			}
			printf("%d ", php->a[k++]);
		}
		printf("\n");
	}
}



void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}




void AdjustUp(int* a, int child)
{
	int parent = (child - 1) / 2;
	while (child)
	{
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}



void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * php->capacity * 2);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		php->a = tmp;
		php->capacity *= 2;
	}
	php->a[php->size] = x;
	php->size++;
	//向上调整
	AdjustUp(php->a, php->size - 1);
}




void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);
}



HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}




int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}


bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}