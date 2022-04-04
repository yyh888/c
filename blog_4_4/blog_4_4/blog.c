#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//} S1;
//int main()
//{
//	printf("%d\n", sizeof(S1));
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	struct S s1;
//	char c2;
//};

//struct S
//{
//	double d;
//	char c1;
//	int a;
//};
//
////求S2的内存大小
//
//struct S2
//{
//	char c1;
//	struct S s1;
//	char c2;
//}s2;
//int main()
//{
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

////求s1的内存大小
//struct S
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}s1;
//printf("%d\n", sizeof(s1));

//struct S
//{
//	double d;
//	char c;
//	int a;
//};
//
////求S2的内存大小
//
//struct S2
//{
//	char c1;
//	struct S s1;
//	char c2;
//}s2;
//int main()
//{
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

////求sizeof（A）
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};

//求sizeof（B）
//struct B
//{
//	short a;
//	char b;
//	long c;
//	long d;
//};

//#pragma pack(4)
//struct D
//{
//	short a;
//	char b;
//	double c;
//	double d;
//}d;
//int main()
//{
//	printf("%d", sizeof(d));
//	return 0;
//}



//union Un1
//{
//	int i;
//	char arr[5];
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//printf("%d\n", sizeof(union Un1));
//printf("%d\n", sizeof(union Un2));


union Un2
{
	int i;
	short arr[7];
};

int main()
{
	printf("%u\n", sizeof(union Un2));
	return 0;
}