#pragma once
#include<assert.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void AdjustDown(HPDataType* a, int n, int parent);
//extern HP* HeapInit(HPDataType* a, int n);
void HeapInit(HP* php, HPDataType* a, int n);
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
void HeapTop(HP* php);
int HeapSize(HP* php);
bool HeapEmpty(HP* php);
void HeapPrint(HP* php);