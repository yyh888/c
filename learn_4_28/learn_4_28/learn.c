#include"learn.h"






void SListPrint(SLTNode* plist)
{
	SLTNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void SListPushBack(SLTNode* plist, SLTDataType x)
{
	SLTNode* tail = plist;
	while (tail->next != NULL)
	{
		tail = 
	}
}