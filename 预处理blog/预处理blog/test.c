//__FILE__  //进行编译的源文件
//__LINE__  //文件当前的行号
//__DATE__  //文件被编译的日期
//__TIME__  //文件被编译的时间
//__STDC__  //如果编译器遵循ANSI C，其值为1，否则未定义

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return EXIT_FAILURE;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#define MAX 100
//#define STR "abc"
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//             date:%s\ttime:%s\n" ,\
//             __FILE__,__LINE__ ,    \
//             __DATE__,__TIME__ )
//int main()
//{
//	printf("%d %s", 100, "abc");
//	return 0;
//}

//#define SQUARE( x ) ((x) * (x))
//
//int main()
//{
//	printf("%d", SQUARE(5));
//	return 0;
//}


//#define PRINT(n) printf("the value of " #n " is %d\n", n)
//
//int main()
//{
//	int n = 10;
//	PRINT(n);
//	return 0;
//}

#define CAT(a, b) a##b

int main()
{
	printf("%s\n", CAT("abc", "def"));
	int ABC = 1;
	printf("%d\n", CAT(A, BC));
	return 0;
}