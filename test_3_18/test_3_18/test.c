#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	char arr[10] = "abcdef";
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	printf("%s", p);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abc";
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;
//	return 0;
//}

//
//int main()
//{
//	char *arr[5];
//	char* (* pa)[5] = &arr;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}


//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",  * (*(p + i) + j));
		}
		printf("\n");
	}
}



int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}