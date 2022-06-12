#include"Sort.h"

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