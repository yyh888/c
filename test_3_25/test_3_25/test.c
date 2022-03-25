#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int Find(int arr[3][3], int k, int* row, int* col)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (k > arr[x][y] && x < (*col - 1))
//	{
//		x++;
//	}
//	while (k <= arr[x][y] && y > 0)
//	{
//		if (arr[x][y] == k)
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//		y--;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 9;
//	int x = 3;
//	int y = 3;
//	int ret = Find(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("yes");
//		printf("下标是:%d %d", x, y);
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//计数器
//int my_strlen(char arr[])
//{
//	int a = 0;
//	int count = 0;
//	while (arr[a] != '\0')
//	{
//		a++;
//		count++;
//	}
//	return count;
//}

//递归
//int my_strlen(char arr[])
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}

//指针相减
//int my_strlen(char* arr)
//{
//	char* p = arr;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - arr;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

char* my_strcpy(char* p1,const char* p2)
{
	assert(p1);
	assert(p2);
	char* ret = p1;
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}



int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}