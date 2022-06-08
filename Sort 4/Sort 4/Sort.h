#pragma once
#include<stdio.h>


//��������
void InSort(int* a, int n);
//ϣ������
void ShellSort(int* a, int n);
//������
void HeapSort(int* a, int n);
//ѡ������
void SelectSort(int* a, int n);
//ð������
void BubbleSort(int* a, int n);
//����
void QuickSort(int* a, int begin, int end);
//�ǵݹ����
void QuickSortNoR(int* a, int begin, int end);
//�鲢����
void MergeSort(int* a, int n);
//�ǵݹ�鲢
void MergeSortNoR(int* a, int n);
//��������
void CountSort(int* a, int n);


void PrintSort(int* a, int n);
void AdjustDown(int* a, int n, int root);