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


//��¼��ͷ�Ͷ�β
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;



extern void QueueInit(Queue* pq);//��ʼ��
extern void QueueDestroy(Queue* pq);//����
extern void QueuePush(Queue* pq, QDateType x);//���
extern void QueuePop(Queue* pq);//����
extern QDateType QueueFront(Queue* pq);//ȡ����ͷ����
extern QDateType QueueBack(Queue* pq);//ȡ����β����
extern bool QueueEmpty(Queue* pq);//�п�
extern int QueueSize(Queue* pq);//���С