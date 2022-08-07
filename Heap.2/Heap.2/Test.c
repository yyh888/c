#include "Heap.h"

int main()
{
	int a[] = { 15, 18, 28, 34, 65, 19, 49, 25, 37, 27 };
	int n = sizeof(a) / sizeof(a[0]);
	Heap hp;
	HeapCreate(&hp, a, n);
	HeapPush(&hp, 12);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapDestory(&hp);
	return 0;
}
