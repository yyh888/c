#include"Sort.h"



void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/*void InSort(int* a, int n)
{
	for(int i = 1; i < n; i++)
	{
		int tmp = a[i];
		int j = i;
		while (j > 0 && tmp < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = tmp;
    }
}*/



void PrintSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}



void InSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = a[i];
		int end = i - 1;
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}




void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}


//大堆
void AdjustDown(int* a, int n, int root)
{
	int parent = root, child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}

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



void HeapSort(int* a, int n)
{
	//建大堆，排升序
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	while (n)
	{
		Swap(&a[0], &a[n - 1]);
		n--;
		AdjustDown(a, n, 0);
	}
}



void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int minIndex = left, maxIndex = right;
		for (int i = left; i <= right; i++)
		{
			if (a[minIndex] > a[i])
			{
				minIndex = i;
			}
			if (a[maxIndex] < a[i])
			{
				maxIndex = i;
			}
		}
		Swap(&a[left], &a[minIndex]);
		//特殊情况
		if (left == maxIndex)
		{
			maxIndex = minIndex;
		}
		Swap(&a[right], &a[maxIndex]);
		left++;
		right--;
	}
}



void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		int i = 0;
		int flag = 1;
		for (i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}



int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[left] < a[mid])
	{
		if (a[right] < a[left])
		{
			return left;
		}
		else if (a[right] < a[mid])
		{
			return right;
		}
		else
		{
			return mid;
		}
	}
	//a[mid] <= a[left]
	else
	{
		if (a[right] < a[mid])
		{
			return mid;
		}
		else if (a[right] < a[left])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}


//heron法
int PartSort(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{
		//找小
		while (right > left && a[right] >= a[key])
		{
			right--;
		}
		//找大
		while (right > left && a[left] <= a[key])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[key]);
	return left;
}


//挖坑法
int PartSort2(int* a, int left, int right)
{
	int midIndex = GetMidIndex(a, left, right);
	Swap(&a[midIndex], &a[left]);
	int key = left;
	while (left < right)
	{
		//找小
		while (left < right && a[key] <= a[right])
		{
			right--;
		}
		a[left] = a[right];
		//找大
		while (left < right && a[key] >= a[left])
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = a[key];
	return left;
}

//双指针法
int PartSort3(int* a, int left, int right)
{
	int key = left, prev = left, cur = prev + 1;
	for (; cur <= right; cur++)
	{
		if (a[cur] < a[key])
		{
			prev++;
			Swap(&a[cur], &a[prev]);
		}
	}
	Swap(&a[prev], &a[key]);
	return prev;
	//数组不能用指针为空判断
	/*int key = left, *prev = &a[left], *cur = &a[left] + 1;
	while (cur)
	{
		if (*cur < *prev)
		{
			prev++;
			Swap(cur, prev);
		}
		cur++;
	}
	Swap(&a[key], prev);
	return key;*/
}


void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int key = PartSort3(a, begin, end);
	QuickSort(a, begin, key - 1);
	QuickSort(a, key + 1, end);
}