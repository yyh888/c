#include"Sort.h"

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