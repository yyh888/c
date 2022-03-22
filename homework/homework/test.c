#define  _CRT_SECURE_NO_WARNINGS
//1.c
//2.
//3.c
//4.c
//5


#include<stdio.h>
#include<assert.h>
//void nixu(int* arr,int sz)
//{
//	assert(arr != NULL);
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	nixu(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//int SUM(int a)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int b = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			a + a * 10;
//		}
//	
//	}
//	return sum;
//}
//
//int main()
//
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = SUM(a);
//	printf("%d", Sn);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = i; i <= 100000; i++)
//	{
//		if (i > 9)
//		{
//			i % 10;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + 2;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int cifang(int x, int y)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i < y; i++)
//	{
//		ret = ret * x;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int j = 10;
//		int n = 1;
//		while (i / j)
//		{
//			j *= 10;
//			n++;
//		}
//		int b = 0;
//		int c = 0;
//		int d = i;
//		for (a = 0; a < n; a++)
//		{
//			b = d % 10;
//			c += cifang(b, n);
//			d = d / 10;
//		}
//		if (c == i || i < 10)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



int main()
{
	int total = 0;
	int money = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
	return 0;
}