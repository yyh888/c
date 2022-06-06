#include"Sort.h"




int main()
{
	int a[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	//InSort(a, n);
	//ShellSort(a, n);
	//HeapSort(a, n);
	//SelectSort(a, n);
	//BubbleSort(a, n);
	QuickSort(a, 0, n - 1);
	PrintSort(a, n);
	return 0;
}