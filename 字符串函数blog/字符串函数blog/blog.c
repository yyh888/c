#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//int main()
//{
//	char* str = "abcdef";
//	printf("%zu", strlen(str));
//	return 0;
//}


//int main()
//{
//	char arr[10] = { "sss" };
//	char* str = "abcdef";
//	strcpy(arr, str);
//	printf("%s", arr);
//	return 0;
//}



//int main()
//{
//	char arr[10] = { "sss" };
//	char* str = "abc";
//	strcat(arr, str);
//	printf("%s", arr);
//	return 0;
//}




//int main()
//{
//	char* str1 = "abt";
//	char* str2 = "abc";
//	int ret = strcmp(str1, str2);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	char str1[] = "sss";
//	char* str2 = "abc";
//	strncpy(str1, str2, 2);
//	printf("%s", str1);
//	return 0;
//}


//int main()
//{
//	char str1[10] = "sss";
//	char* str2 = "abc";
//	strncat(str1, str2, 2);
//	printf("%s", str1);
//	return 0;
//}


//int main()
//{
//	char* str1 = "abt";
//	char* str2 = "abc";
//	int ret = strncmp(str1, str2, 2);
//	printf("%d", ret);
//	return 0;
//}



//int main()
//{
//	char* str1 = "aaaaabc";
//	char* str2 = "abc";
//	char* ret = strstr(str1, str2);
//	if (ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//int main()
//{
//	char str1[] = "ab.cde.fg";
//	char str2[] = ".";
//	printf("%s\n", strtok(str1, str2));
//	printf("%s\n", strtok(NULL, str2));
//	printf("%s\n", strtok(NULL, str2));
//	printf("%s\n", strtok(NULL, str2));
//	printf("%s\n", strtok(NULL, str2));
//	return 0;
//}



//int main()
//{
//	//申请超出范围的内存
//	int* p = (int*)malloc(INT_MAX * 10);
//	if (p == NULL)
//	{
//		//errno是C语言设置的一个全局错误码存放的变量
//		printf("%s\n", strerror(errno));
//		exit(-1);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3 };
//	memcpy(arr1, arr2, 12);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memmove(arr1 + 2, arr1, 12);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[10] = { 1, 8, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 1, 3, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = memcmp(arr1, arr2, 40);
//	printf("%d\n", ret);
//	return 0;
//}



//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}



void* my_memmove(void* dest, const void* sour, size_t num)
{
	assert(dest && sour);
	void* p = dest;
	//dest<=sour,数据从前向后拷贝
	if (dest <= sour)
	{
		while (num)
		{
			num--;
			*(char*)dest = *(char*)sour;
			dest = (char*)dest + 1;
			sour = (char*)sour + 1;
		}
	}
	//dest>sour，数据从后向前拷贝
	else
	{
		while (num)
		{
			num--;
			*((char*)dest + num) = *((char*)sour + num);
		}
	}
	return p;
}