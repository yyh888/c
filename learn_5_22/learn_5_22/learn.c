#include<stdio.h>

void Swap(int* a, int* b);

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}
		//交换
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}



void Swap(int* a, int* b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}



void HeapSort(int* a, int n)
{
	//建大堆（从下往上）
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}


int main()
{
	int a[] = {15, 18, 28, 34, 65, 19, 49, 25, 37, 27};
	//AdjustDown(a, sizeof(a) / sizeof(a[0]), 0);
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	return 0;
}