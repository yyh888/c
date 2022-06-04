#include"Sort.h"





int main()
{
	int a[] = { 5, 2, 4, 6, 1, 3, 10, 21, 50 , 100, 50, 32};
	int n = sizeof(a) / sizeof(a[0]);
	//InSort(a, n);
	ShellSort(a, n);
	return 0;
}