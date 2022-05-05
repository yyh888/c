#include"learn.h"


void StackInit(Stack* pst)
{
	assert(pst);
	pst->a = (STDateType*)malloc(sizeof(STDateType) * 4);
	pst->capacity = 4;
	pst->top = 0;
}



void StackDestroy(Stack* pst)
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->capacity = pst->top = 0;
}



void StackPush(Stack* pst, STDateType x)
{
	assert(pst);
	if (pst->top == pst->capacity)
	{
		STDateType* tmp = (STDateType*)realloc(pst->a, sizeof(Stack) * 2 * pst->capacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}
	pst->a[pst->top] = x;
	pst->top++;
}



void StackPop(Stack* pst)
{
	assert(pst);
	//�ǿ�
	assert(!StackEmpty(pst));
	pst->top--;
}

STDateType StackTop(Stack* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));
	return pst->a[pst->top - 1];
}
//�շ���0���ǿշ���1
bool StackEmpty(Stack* pst)
{
	assert(pst);
	return pst->top == 0;
}



int StackSize(Stack* pst)
{
	assert(pst);
	return pst->top;
}

