#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//int a = 0;
//	//const int* p = &a;//p指向的变量不能被修改
//	//p = 100;
//	//*p = 100;
//	int a = 0;
//	int* const p = &a;//p的内容不能被修改，指向不能被修改
//	p = 100;
//	*p = 100;
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	/*const int* p = &a;
//	int* q = (int*)p;*/
//	int* p = &a;
//	const int* q = p;
//	return 0;
//}



//void show(int* _p)
//{
//	printf("show : %p\n", &_p);
//}
//
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("main : %p\n", &p);
//	show(p);
//	return 0;
//}


//const int* GetVal()
//{
//	static int a = 10;
//	return &a;
//}
//
//
//int main()
//{
//	const int* p = GetVal();
//	int* q = (int*)p;
//	*q = 100;
//	printf("%d", *p);
//	return 0;
//}

//#define MAX 10
//struct stu
//{
//	char name[MAX];
//	int age;
//	char number;
//	char addr;
//};
//
//int main()
//{
//	struct stu s;
//	strcpy(s.name, "zhangsan");
//	s.age = 20;
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int arr[];
//};
//
//int main()
//{
//	struct stu x;
//	return 0;
//}

//union stu
//{
//	int a;
//	char b;
//};
//
//
//int main()
//{
//	union stu s;
//	s.a = 20;
//	s.b = 'a';
//	return 0;
//}


//union stu
//{
//	int a;
//	char b;
//};
//
//
//int main()
//{
//	union stu s;
//	s.a = 1;
//	if (1 == s.b)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//enum color
//{
//	RED,
//	BULEE = 61,
//	GREEN = 50,
//	YELLOW
//};
//
//
//int main()
//{
//	enum color s = RED;
//	printf("%d\n", RED);
//	printf("%d\n", BULEE);
//	printf("%d\n", GREEN);
//	printf("%d\n", YELLOW);
//	return 0;
//}


//typedef int a[10];
//
//int main()
//{
//	a b;
//	return 0;
//}


//#define int_p int*
////typedef  int* int_p;
//int main()
//{
//	int_p a, b, c;
//	return 0;
//}


