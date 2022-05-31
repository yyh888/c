#include<stdio.h>




void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}



//向下调整
//小堆
void AdjustDown(int a[], int n, int parent)
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


void HeapSort(int a[], int n)
{
	//建小堆（降序）
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end)
	{
		Swap(&a[0], a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}



int main()
{
	int a[] = { 27, 15, 34, 18, 28, 19, 65, 49, 25, 37 };
	int sz = sizeof(a) / sizeof(a[0]);
	//建堆
	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, sz, i);
	}
	return 0;
}