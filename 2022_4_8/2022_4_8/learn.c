#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>



//int Len(char* p)
//{
//	assert(p);
//	int count = 0;
//	for (count = 0; *p != '\0'; p++, count++);
//	return count;
//}
//
//
//void Tra(char* dest)
//{
//	assert(dest);
//	int len = Len(dest);
//	int i = 0;
//	int sum = 0;
//	
//	for (i = 0; i < len; i++, dest++)
//	{
//		int s = pow(10, len - i - 1);
//		sum += (*dest - 48)* s;
//	}
//	printf("%d\n", sum);
//}
//
//
//int main()
//{
//	char a[] = "123456";
//	Tra(a);
//	return 0;
//}



//int main()
//{
//	int x = 1;
//	int y = 10;
//	if (5 == x)
//		if (10 == y)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	else
//		printf("qie\n");
//	return 0;
//}



//int main()
//{
//	while (1)
//	{
//		int a = getchar();
//		if (a == '#')
//		{
//			break;
//		}
//		else
//		{
//			putchar(a);
//		}
//	}
//	printf("while end¡­¡­");
//	return 0;
//}


//int main()
//{
//	int ret = printf("%s\n", "abcde");
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	float a = 7.0 / 2;
//	printf("%.1f", a);
//}

//int main()
//{
//    int a = 1234;
//    printf("0%o\n", a);
//    printf("0x%x\n", a);
//        return 0;
//}

//int main()
//{
//	int a = 1234;
//	printf("%d\n", sizeof(a));
//	return 0;
////}


int main()
{
	while (1)
	{
		int c = getchar();
		if (c == '#')
		{
			//break;
			continue;
		}
		putchar(c);
	}
	printf("\nbreak out\n");
	return 0;
}