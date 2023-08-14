#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int DateType;
typedef struct SListNode
{
	DateType data;
	struct SListNode* next;
}SListNode;

SListNode* buySListNode(DateType num);

void sListPrint(SListNode* plist);

void sListPushBack(SListNode** pplist, DateType num);

void sListPushFront(SListNode** pplist, DateType num);

void sListPopBack(SListNode** pplist);

void sListPopFront(SListNode** pplist);

SListNode* sListFind(SListNode* plist, DateType num);

void sListInsertAfter(SListNode* pos, DateType num);

void sListEraseAfter(SListNode* pos);