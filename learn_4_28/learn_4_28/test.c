#include"learn.h"



void testList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}


void testList2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SLTNode* pos = SListFind(&plist, 3);
	if (pos)
	{
		pos->data = 100;
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	SListPrint(plist);
}


void testList3()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SLTNode* pos = SListFind(&plist, 3);
	SListInsertAfter(pos, 100);
	SListInsertBefore(&plist, pos, 200);
	SListPrint(plist);
	SListEraseAfter(pos);
	SListPrint(plist);
	SlistEraseCur(&plist, pos);
	SListPrint(plist);
}


int main()
{
	testList3();
	return 0;
}