#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
		while (*dest++ = *src++)
		{
			;
		}
}


int main()
{
	char arr1[] = "*************";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}