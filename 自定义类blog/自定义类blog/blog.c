#include<stdio.h>
#include<assert.h>

//struct
//{
//	char name[10];//姓名
//	int age;//年龄
//	char sex[6];//性别
//	char tel[13];//电话
//	char addr[20];//地址
//}p1;//p1是全局变量



//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//int main()
//{
//	p = &x;
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//}n1;
//struct Node n2;



//struct A
//{
//	int a;
//	int b;
//};
//
//struct B
//{
//	int c;
//	struct A a;
//};
//
//int main()
//{
//	struct A a = { 1, 2 };
//	struct B b = { 1, {1, 1} };
//	return 0;
//}


//struct A
//{
//	char i;
//	int a;
//};

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct A a;
//	printf("%zu", sizeof(a));
//	return 0;
//}


//struct A
//{
//	int a : 1;
//	char c;
//};
//
//int main()
//{
//	struct A a;
//	printf("%zu", sizeof(a));
//	return 0;
//}



//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//struct S s = { 0 };
//s.a = 10;
//s.b = 12;
//s.c = 3;
//s.d = 4;



//enum Day//星期
//{
//	Mon = 1,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};


////联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};