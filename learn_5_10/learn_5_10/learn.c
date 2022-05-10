#include"Heap.h"







int main()
{
	int arr[] = { 15, 18, 28, 34, 65, 19, 49, 25, 37, 27 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//HeapSort(arr, n);
	HP hp;
	HeapInit(&hp, arr, n);
	HeapPush(&hp, 88);
	HeapPush(&hp, 8);
	HeapPush(&hp, 888);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	/*HeapPop(&hp);
	HeapPrint(&hp);
	HeapDestroy(&hp);
	HPDateType tmp = HeapTop(&hp);
	printf("%d", tmp);*/
  	return 0;
}