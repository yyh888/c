#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_stract(char* a1, const char* a2)
{
	assert(a1 && a2);
	char* ret = a1;
	while (*a1 != '\0')
	{
		a1++;
	}
	while (*a1++ = *a2++)
	{
		;
	}
	return ret;
}


int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "bit";
	my_stract(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
