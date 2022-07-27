#include "Seq.h"


int main()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);
	SeqListDestroy(&s);
	return 0;
}