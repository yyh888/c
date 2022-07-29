#include "SLN.h"


int main()
{
	SListNode* p = NULL;
	SListPushBack(&p, 1);
	SListPushBack(&p, 2);
	SListPushBack(&p, 3);
	SListPushBack(&p, 4);
	SListPushFront(&p, 0);
	SListPopFront(&p);
	SListPopFront(&p);
	SListPopFront(&p);
	SListPopFront(&p);
	SListPopFront(&p);
	SListPrint(p);
	return 0;
}