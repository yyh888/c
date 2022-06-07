#include"Stack.h"


void StackCheck(Stack* pst)
{
	assert(pst);
	if (pst->capacity == pst->top)
	{
		STDatetype* p = (STDatetype*)realloc(pst->a,
			sizeof(STDatetype) * 2 * (pst->capacity));
		if (p == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			pst->a = p;
			pst->capacity *= 2;
		}
	}
}



void StackInit(Stack* pst)
{
	assert(pst);
	//初始化先开辟四个整形的空间
	pst->a = (STDatetype*)malloc(sizeof(STDatetype) * 4);
	pst->capacity = 4;
	pst->top = 0;
}



void StackDestroy(Stack* pst)
{
	assert(pst);
	free(pst->a);
	pst->capacity = pst->top = 0;
	pst->a = NULL;
}



void StackPush(Stack* pst, STDatetype x)
{
	assert(pst);
	//判断是否满了
	StackCheck(pst);
	pst->a[pst->top] = x;
	pst->top++;
}



void StackPop(Stack* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));
	pst->top--;
}



STDatetype StackTop(Stack* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));
	return pst->a[pst->top - 1];
}



bool StackEmpty(Stack* pst)
{
	return pst->top == 0;
}



int StackSize(Stack* pst)
{
	return pst->top + 1;
}