#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDatetype;

struct Stack
{
	STDatetype* a;
	int top; //栈顶
	int capacity;//容量
};

typedef struct Stack Stack;

extern void StackInit(Stack* pst);//初始化
extern void StackDestroy(Stack* pst);//销毁
extern void StackPush(Stack* pst, STDatetype x);//入栈
extern void StackPop(Stack* pst);//出栈
extern STDatetype StackTop(Stack* pst);//取栈顶的数据
extern bool StackEmpty(Stack* pst);//判空
extern int StackSize(Stack* pst);//栈数据个数