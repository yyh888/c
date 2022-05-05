#include"learn.h"



void TestStack()
{
	Stack pst;
	StackInit(&pst);
	StackPush(&pst, 1);
	StackPush(&pst, 2);
	StackPush(&pst, 3);
	StackPush(&pst, 4);
	StackPush(&pst, 5);
	while (!StackEmpty(&pst))
	{
		printf("%d ", StackTop(&pst));
		StackPop(&pst);
	}

	StackDestroy(&pst);
}




int main()
{
	TestStack();
	return 0;
}