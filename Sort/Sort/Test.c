#include"Sort.h"





int main()
{
	int a[] = {4, 3, 7, 1, 9, 8, 4, 3, 5};
	int n = sizeof(a) / sizeof(a[0]);
	//InSort(a, n);
	//ShellSort(a, n);
	//HeapSort(a, n);
	//SelectSort(a, n);
	BubbleSort(a, n);
	PrintSort(a, n);
	return 0;
}