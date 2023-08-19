#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct Stack
{
	DataType* array;
	int top;
	int capacity;
}Stack;

void stackInit(Stack* ps);

void stackPush(Stack* ps, DataType data);

void stackPop(Stack* ps);

DataType stackTop(Stack* ps);

int stackSize(Stack* ps);

int stackEmpty(Stack* ps);

void stackDestroy(Stack* ps);