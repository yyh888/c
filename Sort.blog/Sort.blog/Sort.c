#include"Sort.h"
#include"Stack.h"

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}






void SortPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}



//插入排序
void InSertSort(int* a, int n)
{
	int cur = 1;
	while (cur < n)
	{
		int tmp = a[cur];//排cur处的数字
		int end = cur - 1;
		while (end >= 0)
		{
			if (a[end] > tmp)//继续比较
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		//通过画图就可知道不管是break还是结束while循环
		//都要在end + 1处插入
		a[end + 1] = tmp;
		cur++;
	}
}



void ShellSort(int* a, int n)
{
	//一趟预排序
	int gap = n;
	while (gap > 1)
	{
		//gap不能等于0
		//gap == 1时直接插入排序
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
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




void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int minIndex = left, maxIndex = left;//记录下标
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
		Swap(&a[minIndex], &a[left]);
		//当最大的在左边时候，最大的会被交换走
		if (left == maxIndex)
		{
			maxIndex = minIndex;
		}
		Swap(&a[maxIndex], &a[right]);
		left++;
		right--;
	}
}



//大堆
void AdjustDown(int* a, int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}

		if (a[child] > a[parent])
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



void HeapSort(int* a, int n)
{
	//建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	//大的放后面
	int end = n - 1;
	while (end)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}



void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		//用来判断是否交换过，提高效率
		int flag = 1;
		for (int cur = 0; cur < n - 1 - i; cur++)
		{
			if (a[cur + 1] < a[cur])
			{
				Swap(&a[cur], &a[cur + 1]);
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
	if (a[left] < a[right])
	{
		if (a[mid] < a[left])
		{
			return left;
		}
		else if (a[mid] > a[right])
		{
			return right;
		}
		else
		{
			return mid;
		}
	}
	else
	{
		if (a[mid] < a[right])
		{
			return right;
		}
		else if (a[mid] > a[left])
		{
			return left;
		}
		else
		{
			return mid;
		}
	}
}



//hoare法
int PartSort(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int keyi = begin;
	int left = begin, right = end;
	while (left < right)
	{
		//右找小
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//左找大
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		if (left < right)
		{
			Swap(&a[left], &a[right]);
		}
	}
	Swap(&a[keyi], &a[left]);
	return left;
}


//挖坑法
int PartSort1(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int tmp = a[begin];
	int left = begin, right = end;
	while (left < right)
	{
		//右边先找小
		while (left < right && a[right] >= tmp)
		{
			right--;
		}
		a[left] = a[right];
		//左边找大的
		while (left < right && a[left] <= tmp)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = tmp;
	return left;
}



//前后指针法
int PartSort2(int* a, int left, int right)
{
	int key = left;
	int prev = left, cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[key])
		{
			prev++;
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[key]);
	return prev;
}


void QuickSort(int* a, int begin, int end)
{
	//中间没有元素就返回
	if (begin >= end)
	{
		return;
	}
	if(end - begin > 10)
	{ 
		int keyi = PartSort2(a, begin, end);
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else
	{
		//a + begin 是要插入排序的开始位置
		//end - begin 是长度  +1就是元素个数
		InSertSort(a + begin, end - begin + 1);
	}
}


//非递归快排
void QuickSortNonR(int* a, int begin, int end)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);
		int key = PartSort(a, left, right);
		//key左边有区间就入栈
		if (left < key - 1)
		{
			StackPush(&st, left);
			StackPush(&st, key - 1);
		}
		//key右边有数据就入栈
		if (right > key + 1)
		{
			StackPush(&st, key + 1);
			StackPush(&st, right);
		}
	}
	StackDestroy(&st);
}