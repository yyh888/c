#include"SeqList.h"





int main()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	int tmp = SeqListSearch(&s, 5);
	printf("%d ", tmp);
	return 0;
}