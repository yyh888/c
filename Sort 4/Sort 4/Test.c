#include"Sort.h"
#include"Stack.h"
int main()
{
	int a[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 , 12, 14 };
	int n = sizeof(a) / sizeof(a[0]);
	//InSort(a, n);
	//ShellSort(a, n);
	//HeapSort(a, n);
	//SelectSort(a, n);
	//BubbleSort(a, n);
	//QuickSortNoR(a, 0, n - 1);
	//MergeSortNoR(a, n);
	CountSort(a, n);
	PrintSort(a, n);
	return 0;
}