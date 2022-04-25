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

int main()
{
	SeqList1();
	return 0;
}