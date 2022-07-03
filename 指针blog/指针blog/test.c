#include<stdio.h>
#include<string.h>


//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16
//	printf("%d\n", sizeof(a + 0));// 4 NO
//	printf("%d\n", sizeof(*a));// 4
//	printf("%d\n", sizeof(a + 1));// 4/8
//	printf("%d\n", sizeof(a[1]));// 4
//	printf("%d\n", sizeof(&a));// 4/8
//	printf("%d\n", sizeof(*&a));// 16
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));// 6
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	printf("%d\n", sizeof(*arr));// 1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));// 4/8
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//	printf("%d\n", strlen(arr));// 随机值
//	printf("%d\n", strlen(arr + 0));// 随机值
//	printf("%d\n", strlen(*arr));// 随机值 NO
//	printf("%d\n", strlen(arr[1]));// error
//	printf("%d\n", strlen(&arr));// 4/8
//	printf("%d\n", strlen(&arr + 1));// 4/8
//	printf("%d\n", strlen(&arr[0] + 1));// 4/8
//	return 0;
//}


