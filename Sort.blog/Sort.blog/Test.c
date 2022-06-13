#include"Sort.h"




int main()
{
	int a[] = { 5, 7, 9, 1, 2, 3, 4, 6, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	//InSertSort(a, n);
	//ShellSort(a, n);
	//HeapSort(a, n);
	SelectSort(a, n);
	SortPrint(a, n);
	return 0;
}


