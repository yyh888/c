#include"Heap.h"







int main()
{
	int arr[] = { 0,1,1,2,4,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	//HeapSort(arr, n);
	HP hp;
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdJustDown(arr, i, n);
	}
	HeapPrint(&hp);
	/*HeapPop(&hp);
	HeapPrint(&hp);
	HeapDestroy(&hp);
	HPDateType tmp = HeapTop(&hp);
	printf("%d", tmp);*/
  	return 0;
}