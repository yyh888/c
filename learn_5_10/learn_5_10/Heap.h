#pragma once
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>




typedef int HPDateType;

typedef struct Heap
{
	HPDateType* a;
	int size;
	int capacity;
}HP;


extern void Swop(int* p1, int* p2);
extern void AdJustDown(int* a, int parent, int n);
extern void HeapPush(HP* php, HPDateType x);



extern void HeapInit(HP* php, HPDateType* a, int n);
extern void HeapDestroy(HP* php);
extern void HeapPush(HP* php, HPDateType x);
extern void HeapPop(HP* php);
extern HPDateType HeapTop(HP* php);
extern int HeapSize(HP* php);
extern bool HeapEmpty(HP* php);
extern void HeapPrint(HP* php);