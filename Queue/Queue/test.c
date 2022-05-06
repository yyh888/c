#include"Queue.h"





void TestQueue()
{
	Queue st;
	QueueInit(&st);
	QueuePush(&st, 1);
	QueuePush(&st, 2);
	QueuePush(&st, 3);
	QueuePush(&st, 4);
	QueuePush(&st, 5);
	while (!QueueEmpty(&st))
	{
		printf("%d ", QueueFront(&st));
		QueuePop(&st);
	}


	QueueDestroy(&st);
}





int main()
{
	TestQueue();
	return 0;
}