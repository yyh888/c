#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


typedef int HPDataType;
struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
};

typedef struct Heap HP;


void HeapInit(HP* php, HPDataType* a, int n);
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
int HeapSize(HP* php);
bool HeapEmpty(HP* php);
void AdjustDown(HPDataType a[], int n, int parent);
void Swap(HPDataType* a, HPDataType* b);
void HeapPrint(HP* php);