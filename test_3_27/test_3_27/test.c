#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	//int ret = iscntrl();/
//	//char pass = '\t';
//	//int ret = isspace(pass);
//	int ret = isxdigit(15);
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	/*char ch = toupper('a');
//	putchar(ch);*/
//	char arr[] = "I am A student";
//}

//struct stu
//{
//	char name[10];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	struct stu s1[] = { {"张三", 20}, {"李四", 30}};
//	struct stu s2[3] = { 0 };
//	my_memcpy(s2, s1, sizeof(s1));
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, int num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr + 3, 8);
//	return 0;
//}
//struct A
//{
//	int f;
//	double y;
//};
//
//struct T
//{
//	int a;
//	char b;
//	double c;
//	struct A p;
//};
//
//
//
//int main()
//{
//	struct T t = { 12, 'a', 3.14, {5, 5.3} };
//	printf("%d %c %lf %d %lf", t.a, t.b, t.c, t.p.f, t.p.y);
//	return 0;
//}

struct S
{
	int a;
	char b;
	float c;
};

void init(struct S* tmp)
{
	tmp->a = 1;
	tmp->b = 'a';
	tmp->c = 3;
}

void print(struct S* tmp)
{
	printf("%d %c %lf", tmp->a, tmp->b, tmp->c);
}

int main() 
{
	struct S s = { 0 };
	init(&s);
	print(&s);
	return 0;
}