#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDatetype;

struct Stack
{
	STDatetype* a;
	int top; //ջ��
	int capacity;//����
};

typedef struct Stack Stack;

extern void StackInit(Stack* pst);//��ʼ��
extern void StackDestroy(Stack* pst);//����
extern void StackPush(Stack* pst, STDatetype x);//��ջ
extern void StackPop(Stack* pst);//��ջ
extern STDatetype StackTop(Stack* pst);//ȡջ��������
extern bool StackEmpty(Stack* pst);//�п�
extern int StackSize(Stack* pst);//ջ���ݸ���