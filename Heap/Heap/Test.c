#include"Heap.h"




int main()
{
	int a[] = { 15, 18, 28, 34, 65, 19, 49, 25, 37, 27 };
	int n = sizeof(a) / sizeof(a[0]);
	HP hp;
	HeapInit(&hp, a, n);
	HeapPrint(&hp);
	HeapDestroy(&hp);
	return 0;
}