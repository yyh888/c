#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int(*pAdd)(int, int) = Add;
//	printf("%d\n", pAdd(2, 3));
//	return 0;
//}




//void maopao(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


//void qsort(void* base, 
//	       size_t num, 
//	       size_t width, 
//	       int(* compare)(const void* e1, const void* e2));

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//void test1()
//{
//	int arr[10] = { 4,5,8,9,7,6,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*maopao(arr,sz);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void qsort(void* base, 
//	       size_t num, 
//	       size_t width, 
//	       int(* compare)(const void* e1, const void* e2));

//int cmp_float(const void* e1, const void* e2)
//{
//	return (int) ( * (float*)e1 - *(float*)e2);
//}
//
//void test2()
//{
//	float f[5] = { 9.0, 8.0,7.0,6.0,5.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
////
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////
////
////void test3()
////{
////	struct stu s[3] = {{"zhangsan", 20}, {"lisi", 10}, {"wangwu", 50}};
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_age);
////}
////
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	switch(a)
////	{
////	case 1:
////		test1();
////		break;
////	case 2:
////		test2();
////		break;
////	case 3:
////		test3();
////		break;
////	}
////	return 0;
////}
//
//
//void Swap(char* a, char* b, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//±È½Ï
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
//			{
//				//½»»»
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//void test1()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan", 20}, {"lisi", 10}, {"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_age);
//}
//
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}


int main()
{
	char arr[] = "abcdef";
	printf("%d", strlen(*arr));
}