#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	goto a;
//	printf("hello 1\n");
//	printf("hello 1\n");
//	a:
//	printf("hello 3\n");
//	printf("hello 4\n");
//	printf("hello 5\n");
//	printf("hello 6\n");
//	printf("hello 7\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//start:
//	if (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//		goto start;
//	}
//	return 0;
//}


//int main()
//{
//	void* p = NULL;
//	int a = 41;
//	p = &a;
//	*p;
	//int* p = NULL;
	//p++;
	//p--;
	/*void* p = NULL;
	P++;
	P--;
	return 0;*/
//}

//char* show()
//{
//	char str[] = "abcdef";
//	return str;
//}
//
//
//int main()
//{
//	char* s = show();
//	printf("%s\n", s);
//	return 0;
//}

//int GetDate()
//{
//	int x = 0x11223344;
//	printf("the GetDate is run\n");
//	return x;
//}
//
//int main()
//{
//	/*int a = */GetDate();
//	/*printf("%x\n", a);*/
//	return 0;
//}



//int main()
//{
//	const int a = 10;
//	int* p = (int*) & a;
//	printf("before: a = %d\n", a);
//	*p = 20;
//	printf("after: a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	printf("%d\n", sizeof(p));
//	return 0;
//}