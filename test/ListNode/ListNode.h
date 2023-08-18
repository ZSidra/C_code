#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
typedef struct ListNode
{
	DataType data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;

ListNode* listCreate();

void listDestory(ListNode** plist);

void listPrint(ListNode* plist);

void listPushBack(ListNode* plist, DataType data);

void listPopBack(ListNode* plist);

void listPushFront(ListNode* plist, DataType data);

void listPopFront(ListNode* plist);

ListNode* listFind(ListNode* plist, DataType data);

void listInsert(ListNode* plist, ListNode* pos, DataType data);

void listErase(ListNode* plist, ListNode* pos);
