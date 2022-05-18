#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>



typedef int QDateType;


typedef struct QueueNode
{
	struct QueueNode* next;
	QDateType date;
}QueueNode;


//记录队头和队尾
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;



extern void QueueInit(Queue* pq);
extern void QueueDestroy(Queue* pq);
extern void QueuePush(Queue* pq, QDateType x);
extern void QueuePop(Queue* pq);
QDateType QueueFront(Queue* pq);
QDateType QueueBack(Queue* pq);
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);