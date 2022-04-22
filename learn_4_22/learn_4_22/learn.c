#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(25*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 25; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 25; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//»ØÊÕ
//	free(p);
//	p = NULL;
//	return 0;
//	}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int* p = malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//Ìí¼Ó
//	int* ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 0;
//	}
//	p = ptr;
//	ptr = NULL;
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	int x = 10;
//}
//
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello bit");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int ret = my_strlen("abcdef");
//	printf("%d", ret);
//	return 0;
//}



//void print(int n)
//{
//	if (n > 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}