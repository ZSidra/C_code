#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* head;
	Node* tail;
	int size;
}Queue;

void queueInit(Queue* q);

void queuePush(Queue* q, DataType data);

void queuePop(Queue* q);

DataType queueFront(Queue* q);

DataType queueBack(Queue* q);

int queueSize(Queue* q);

int queueEmpty(Queue* q);

void queueDestroy(Queue* q);