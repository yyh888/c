#include"learn.h"



void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushFront(plist, 50);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopFront(plist);
	ListPrint(plist);
}




void TestList2()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushFront(plist, 10);
	ListPrint(plist);
	ListNode* pos = ListFind(plist, 4);
	if (pos)
	{
		ListErase(pos, 500);
	}
	ListPrint(plist);
}

int main()
{
	//TestList1();
	TestList2();
	return 0;
}