#pragma once

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>



typedef char BTDateType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDateType date;
}BTNode;

typedef int QDateType;


typedef struct QueueNode
{
	struct QueueNode* next;
	QDateType date;
}QueueNode;


typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;




extern void QueueInit(Queue* pst);
extern void QueueDestroy(Queue* pst);

extern void QueuePush(Queue* pst, QDateType x);
extern void QueuePop(Queue* pst);

extern QDateType QueueBack(Queue* pst);
extern QDateType QueueFront(Queue* pst);

extern bool QueueEmpty(Queue* pst);
extern int QueueSize(Queue* pst);