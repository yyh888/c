#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct S
{
	int a;
	int* arr;
};



int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	if (p != NULL)
	p->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", p->arr[i]);
	}
	int* ptr = realloc(p, 10 * sizeof(int));
	if (ptr != NULL)
	{
		p->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 5; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	return 0;
}