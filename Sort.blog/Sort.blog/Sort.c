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



void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		//�����ж��Ƿ񽻻��������Ч��
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



//hoare��
int PartSort(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int keyi = begin;
	int left = begin, right = end;
	while (left < right)
	{
		//����С
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//���Ҵ�
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


//�ڿӷ�
int PartSort1(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int tmp = a[begin];
	int left = begin, right = end;
	while (left < right)
	{
		//�ұ�����С
		while (left < right && a[right] >= tmp)
		{
			right--;
		}
		a[left] = a[right];
		//����Ҵ��
		while (left < right && a[left] <= tmp)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = tmp;
	return left;
}



//ǰ��ָ�뷨
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
	//�м�û��Ԫ�ؾͷ���
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
		//a + begin ��Ҫ��������Ŀ�ʼλ��
		//end - begin �ǳ���  +1����Ԫ�ظ���
		InSertSort(a + begin, end - begin + 1);
	}
}


//�ǵݹ����
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
		//key������������ջ
		if (left < key - 1)
		{
			StackPush(&st, left);
			StackPush(&st, key - 1);
		}
		//key�ұ������ݾ���ջ
		if (right > key + 1)
		{
			StackPush(&st, key + 1);
			StackPush(&st, right);
		}
	}
	StackDestroy(&st);
}

void _MergeSort(int* a, int* tmp, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	//ע���м��±���
	int mid = (left + right) >> 1;
	//�������й鲢
	_MergeSort(a, tmp, left, mid);
	//�������й鲢
	_MergeSort(a, tmp, mid + 1, right);
	_Merge(a, tmp, left, mid, mid + 1, right);
	//��tmp��������
}



void _Merge(int* a, int* tmp, int begin1, int end1, int begin2, int end2)
{
	//��i��¼����tmp��λ��
	int i = begin1;
	int j = begin1;
	//�鲢�������з���tmp��
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	for (; j <= end2; j++)
	{
		a[j] = tmp[j];
	}
}


//�鲢����
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
}


//�ǵݹ�鲢
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n - gap; i += gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//��һ�����
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//�ڶ����������
			if (begin2 >= n)
			{
				break;
			}
			//��ͼ�жϱ߽�
			_Merge(a, tmp, begin1, end1, begin2, end2);
		}
		gap *= 2;
	}
	free(tmp);
}

//��������
void CountSort(int* a, int n)
{
	//��¼��СԪ��
	int min = a[0];
	//��¼���Ԫ��
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		if (max < a[i])
		{
			max = a[i];
		}
	}
	int range = max - min + 1;
	//������malloc������count���������ֵ
	int* count = (int*)calloc(range, sizeof(int));
	if (count == NULL)
	{
		printf("realloc fail\n");
		exit(-1);
	}
	//ͳ�ƴ���
	for (int i = 0; i < n; i++)
	{
		count[a[i] - min]++;
	}
	//����ԭ������a
	int i = 0;
	for (int j = 0; j < range; j++)
	{
		while (count[j]--)
		{
			a[i++] = j + min;
		}
	}
	free(count);
}