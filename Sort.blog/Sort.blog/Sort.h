#pragma once
#include<stdio.h>



void _Merge(int* a, int* tmp, int begin1, int end1, int begin2, int end2);
//≤Â»Î≈≈–Ú
void InSertSort(int* a, int n);
//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);
//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n);
//∂—≈≈–Ú
void HeapSort(int* a, int n);
//√∞≈›≈≈–Ú
void BubbleSort(int* a, int n);
//øÏ≈≈
void QuickSort(int* a, int begin, int end);
//∑«µ›πÈøÏ≈≈
void QuickSortNonR(int* a, int begin, int end);
//πÈ≤¢≈≈–Ú
void MergeSort(int* a, int n);
//∑«µ›πÈπÈ≤¢
void MergeSortNonR(int* a, int n);
//º∆ ˝≈≈–Ú
void CountSort(int* a, int n);






void SortPrint(int* a, int n);
