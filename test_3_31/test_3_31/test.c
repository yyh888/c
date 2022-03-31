#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct S
{
	int n;
	int arr[];
};



int main()
{
	//struct S s;
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		p->n = 100;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			p->arr[i] = i;
		}
		struct S* ptr = realloc(p, 50);
		if (ptr != NULL)
		{
			p = ptr;
		}
		for (i = 5; i < 10; i++)
		{
			p->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p->arr[i]);
		}
	}
	free(p);
	p = NULL;
	return 0;
}
