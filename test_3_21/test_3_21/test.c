#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


struct Test
{
	int num;
	char* pcname;
	short sDate;
	char cha[2];
	short sba[4];
}* p;


int main()
{
	p = (struct Test*)0x00000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	
	printf("%p\n", (unsigned int*)p + 0x1);
	printf("%p\n", (unsigned short*)p + 0x1);
	return 0;
}