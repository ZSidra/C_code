#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
typedef struct SeqList
{
	DataType* array;
	size_t size;
	size_t capicity;
}SeqList;

void seqListInit(SeqList* p);

void checkCapacity(SeqList* psl);

void seqListPushBack(SeqList* psl, DataType data);

void seqListPopBack(SeqList* psl);

void seqListPushFront(SeqList* psl, DataType data);

void seqListPopFront(SeqList* psl);

int seqListFind(SeqList* psl, DataType data);

void seqListInsert(SeqList* psl, size_t pos, DataType data);

void seqListErase(SeqList* psl, size_t pos);

void seqListDestory(SeqList* psl);

void seqListPrint(SeqList* psl);