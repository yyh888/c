#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("%s %d\n", __FILE__, __LINE__);
//#line 60 "hehe.c"
//	printf("%s %d\n", __FILE__, __LINE__);
//	return 0;
//}


//int main()
//{
//	printf("hello\n""hehe\n");
//	printf("hello word\nb");
//	return 0;
//}


//int main()
//{
//	const char* ptr = "abcdef""ghijkl";
//	printf(ptr);
//	return 0;
//}
//#include<string.h>
//#define STR(s) #s
//int main()
//{
//	int abc = 12345;
//	char arr[64] = { 0 };
//	strcpy(arr, STR(abc));
//	printf(arr);
//	return 0;
//}

#define CONT(base, n) base##e##n
int main()
{
	printf("%lf\n", CONT(3.14,4));
	return 0;
}