#pragma once
#include<stdio.h>



void _Merge(int* a, int* tmp, int begin1, int end1, int begin2, int end2);
//��������
void InSertSort(int* a, int n);
//ϣ������
void ShellSort(int* a, int n);
//ѡ������
void SelectSort(int* a, int n);
//������
void HeapSort(int* a, int n);
//ð������
void BubbleSort(int* a, int n);
//����
void QuickSort(int* a, int begin, int end);
//�ǵݹ����
void QuickSortNonR(int* a, int begin, int end);
//�鲢����
void MergeSort(int* a, int n);
//�ǵݹ�鲢
void MergeSortNonR(int* a, int n);
//��������
void CountSort(int* a, int n);






void SortPrint(int* a, int n);
