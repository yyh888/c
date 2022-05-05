#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDateType;


struct Stack
{
	STDateType* a;
	int top;
	int capacity;
};

typedef struct Stack Stack;



void StackInit(Stack* pst);
void StackDestroy(Stack* pst);
void StackPush(Stack* pst, STDateType x);
void StackPop(Stack* pst);


STDateType StackTop(Stack* pst);
//¿Õ·µ»Ø0£¬·Ç¿Õ·µ»Ø1
bool StackEmpty(Stack* pst);
int StackSize(Stack* pst);