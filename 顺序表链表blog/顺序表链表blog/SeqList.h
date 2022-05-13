#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>



typedef int SeqDateType;//方便修改类型
typedef struct SeqList
{
	SeqDateType* a;
	int size;    //有效数据的数量
	int capacity;//容量
}SeqList, SEQ;


extern void SeqListInit(SeqList* pq);
extern void SeqListDestory(SeqList* pq);
extern void SeqListPrint(SeqList* pq);
extern void SeqListPushBack(SeqList* pq, SeqDateType x);
extern void SeqListPushFront(SeqList* pq, SeqDateType x);
extern void SeqListPopBack(SeqList* pq);
extern void SeqListPopFront(SeqList* pq);
extern int SeqListSearch(SeqList* pq, SeqDateType x);
extern void SeqListInsert(SeqList* pq, int pos, SeqDateType x);
extern void SeqListPop(SeqList* pq, int pos);
