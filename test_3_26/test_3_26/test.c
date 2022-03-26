#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	char* p1 = "abcde";
//	char* p2 = "cdead";
//	int ret = strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("p1 > p2");
//	}
//	else if (ret == 0)
//	{
//		printf("p1 = p2");
//	}
//	else if (ret < 0)
//	{
//		printf("p1 < p2");
//	}
//	return 0;
//}

//int my_strcmp(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 !='\0'|| *p2 != '\0')
//	{
//		if (*p1 == *p2)
//		{
//			p1++;
//			p2++;
//			continue;
//		}
//		if (*p1 > *p2)
//		{
//			return 1;
//		}
//		if (*p1 < *p2)
//			return -1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char* a = "abcde";
//	char* b = "abcdef";
//	int ret = my_strcmp(a, b);
//		if (ret > 0)
//	{
//		printf("p1 > p2");
//	}
//	else if (ret == 0)
//	{
//		printf("p1 = p2");
//	}
//	else if (ret < 0)
//	{
//		printf("p1 < p2");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}

//char* my_strncpy(char* p1, const char* p2, int n)
//{
//	assert(p1 && p2);
//	char* start = p1;
//	while (n &&( * p1++ = *p2++))
//	{
//		n--;
//	}
//	if (n)
//		while (--n)
//			*p1++ = '\0';
//	return(start);
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	return 0;
//}


//char* my_strncat(char* dest, const char* source, int count)
//{
//	assert(*dest && *source);
//	char* start = dest;
//	while (*dest++);//找到dest的'\0'
//	dest--;
//	while (count--)
//		if (!(*dest++ = *source++))
//			return(start);
//	*dest = '\0';
//	return(start);
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello";
// 	my_strncat(arr1, arr2, 7);
//	return 0;
//}

//int my_strncmp(const char* p1, const char* p2, int num)
//{
//	assert(*p1 && *p2);
//	while (num--)
//	{
//		if (*p1 != *p2)
//		{
//			return (*p1 - *p2); 
//			break;
//		}
//		p1++;
//		p2++;
//	}
//	return 0;
//}
//
//int main()
//{
//	const char* p1 = "abcfws";
//	const char* p2 = "abcawa";
//	int ret = my_strncmp(p1, p2, 1);
//	if (ret < 0)
//		printf("小于");
//	else if (ret > 0)
//		printf("大于");
//	else if (ret== 0)
//		printf("等于");
//	return 0;
//}


//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* dest = (char*)p1;
//	if (!*p2)
//	{
//		return (char*)p1;
//	}
//	while (*dest)
//	{
//		s1 = dest;
//		s2 = (char*)p2;
//		while ((*s2) && (*s1) && !(*s1 - *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[] = "1161752748@qq.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	 ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	 ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}



int main()
{
	char arr[] = "162.168.1.1";
	char buf[1024] = { 0 };
	char* p = ".";
	strcpy(buf, arr);
	char* ret = NULL;
	for (ret = strtok(buf, p); ret != NULL;ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
}