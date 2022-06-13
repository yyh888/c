#include"Sort.h"


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



//��������
void InSertSort(int* a, int n)
{
	int cur = 1;
	while (cur < n)
	{
		int tmp = a[cur];//��cur��������
		int end = cur - 1;
		while (end >= 0)
		{
			if (a[end] > tmp)//�����Ƚ�
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		//ͨ����ͼ�Ϳ�֪��������break���ǽ���whileѭ��
		//��Ҫ��end + 1������
		a[end + 1] = tmp;
		cur++;
	}
}



void ShellSort(int* a, int n)
{
	//һ��Ԥ����
	int gap = n;
	while (gap > 1)
	{
		//gap���ܵ���0
		//gap == 1ʱֱ�Ӳ�������
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
		int minIndex = left, maxIndex = left;//��¼�±�
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
		//�����������ʱ�����Ļᱻ������
		if (left == maxIndex)
		{
			maxIndex = minIndex;
		}
		Swap(&a[maxIndex], &a[right]);
		left++;
		right--;
	}
}



//���
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
	//����
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	//��ķź���
	int end = n - 1;
	while (end)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}