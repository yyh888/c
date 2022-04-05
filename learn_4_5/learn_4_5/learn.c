#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	/*printf("%d\n", __STDC__);*/
//
//	return 0;
//}

//#define SQUARE(x) x*x
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello" " world\n");
//	printf("hel""lo world\n");
//	return 0;
//}


//#define PRINT(x) printf("the value of " #x" is %d\n", x)
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}


//#define CAT(X, Y) X##Y
//int main()
//{
//	int Class84 = 2020;
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//
//#define MAX(X, Y) (X > Y ? X : Y) 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//int main()
//{
//#if 1 == 1
//	printf("hehe\n");
//#elif 1 == 0
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
int main()
{
#if !defined(DEBUG)
	printf("hehe");
#endif



	return 0;
}