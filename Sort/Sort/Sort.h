#pragma once
#include<stdio.h>


//≤Â»Î≈≈–Ú
void InSort(int* a, int n);
//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);
//∂—≈≈–Ú
void HeapSort(int* a, int n);
//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n);
//√∞≈›≈≈–Ú
void BubbleSort(int* a, int n);
//øÏ≈≈
void QuickSort(int* a, int begin, int end);
//∑«µ›πÈøÏ≈≈
void QuickSortNoR(int* a, int begin, int end);



void PrintSort(int* a, int n);
void AdjustDown(int* a, int n, int root);