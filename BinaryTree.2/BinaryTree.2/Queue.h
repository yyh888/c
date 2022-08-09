#pragma once
#include "BinaryTree.h"
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>



typedef BTNode* QDateType;


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



extern void QueueInit(Queue* pq);//初始化
extern void QueueDestroy(Queue* pq);//销毁
extern void QueuePush(Queue* pq, QDateType x);//入队
extern void QueuePop(Queue* pq);//出队
extern QDateType QueueFront(Queue* pq);//取出队头数据
extern QDateType QueueBack(Queue* pq);//取出队尾数据
extern bool QueueEmpty(Queue* pq);//判空
extern int QueueSize(Queue* pq);//求大小