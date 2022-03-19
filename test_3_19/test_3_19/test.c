#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",  p[i]);
//	}
//	return 0;
//}

//void test(int (* arr)[5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5];
//	test(arr);
//	return 0;
//}

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//
//int main()
//{
//	int n = 0;
//	int* p = &n;
//	int** pp = &p;
//	test(&p);
//	test(pp);
//	return 0;
//}

//int Add()
//{
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello");
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	/*int a = 20;
//	int b = 10;
//	int (*p)(int, int) = Add;
//	printf("%d\n", ( * p)(1, 2));
//	printf("%d\n", p(1, 2));*/
//	int (*p[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 3));
//	}
//	return 0;
//


//char* (*Pf)(char*,const char*) = my_strcpy;
//char* (*praff[4])(char*, const char*)

//void menu()
//{
//	printf("************************\n");
//	printf("**   1.add   2.sub    **\n");
//	printf("**   3.mul   4.div    **\n");
//	printf("**   0.exit  5.xor    **\n");
//	printf("************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int xor (int x, int y)
//{
//	return x ^ y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (* p[])(int, int) = {0, add, sub, mul, div, xor};
//	do
//	{
//		menu();
//		printf("请选择:\n");
//		scanf("%d", &input);
//		if (input <= 5 && input >0)
//		{
//			printf("请选择两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int (*pf)(int, int);
//	int (*prff[5])(int, int);
//	int(* (*prff)[5])(int, int) = &prff;
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s\n", str);
}



void test(void (*p)(char*))
{
	printf("test\n");
	(* p)("hello");
}
int main()
{
	test(print);
	return 0;
}