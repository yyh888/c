#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	char i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello", pf);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf(arr);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct A
//{
//	char a[10];
//	int b;
//};
//
//int main()
//{
//	struct A a = { "abcdef", 20 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fprintf(pf, "%s %d", a.a, a.b);
//
//	�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct A
//{
//	char a[10];
//	int b;
//};
//
//int main()
//{
//	struct A a = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fscanf(pf, "%s %d", a.a, &a.b);
//	//printf("%s %d", a.a, a.b);
//	fprintf(stdout, "%s %d", a.a, a.b);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//struct A
//{
//	char a[10];
//	int b;
//};
//
//int main()
//{
//	struct A a = { "abcdef", 20 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�Զ�����д
//	fwrite(&a, sizeof(struct A), 1, pf);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct A
//{
//	char a[10];
//	int b;
//};
//
//int main()
//{
//	struct A a = { "abcdef", 20 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�Զ����ƶ�
//	fread(&a, sizeof(struct A), 1, pf);
//	printf("%s %d", a.a, a.b);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct A
//{
//	char a[10];
//	int b;
//};
//
//int main()
//{
//	struct A a = { "abcdef", 20 };
//	struct A tmp = { 0 };
//	char buf[100] = {0};
//	//��s�еĸ�ʽ������ת�����ַ�������buf��
//	sprintf(buf, "%s %d", a.a, a.b);
//
//	//���ַ���buf�л�ȡ��ʽ�����ݵ�tmp��
//	sscanf(buf, "%s %d", tmp.a, &tmp.b);
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fseek(pf, 5, SEEK_SET);
//	//fseek(pf, -1, SEEK_END);
//	rewind(pf);
//	printf("%ld", ftell(pf));
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




