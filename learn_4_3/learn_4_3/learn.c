#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	FILE* pf = fopen("../test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello\n", pf);
//	fputs("bit\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//	/*fgets(buf, 1024, stdin);
//	fputs(buf, stdout);*/
//	gets(buf);
//	puts(buf);
//	return 0;
//}

struct S
{
	int n;
	float m;
	char arr[10];
};

int main()
{
	struct S s = {100, 3.14f, "bit"};
	FILE* p = fopen("test.txt", "w");
	if (p == NULL)
	{
		return 0;
	}
	printf("%d %f %s", s.n, s.m, s.arr);
	fclose(p);
	p = NULL;
	return 0;
}