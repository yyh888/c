#include"learn.h"


void SeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);                                       
	SeqListPushBack(&s, 5);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPopFront(&s);
	SeqListPopFront(&s); 
	SeqListPopFront(&s); 
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	int ret = SeqListSearch(&s, 3);
	printf("ret = %d\n", ret);
	SeqListDestory(&s);
}


void SeqList2()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);
	SeqListPop(&s, 2);
	SeqListPrint(&s);
	SeqListPushBack(&s, 100);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);





	SeqListDestory(&s);
}


int main()
{
	//SeqList1();
	SeqList2();
	return 0;
}