#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"

ListNode* listCreate()
{
	ListNode* listhead = (ListNode*)malloc(sizeof(ListNode));
	if (listhead == NULL)
	{
		perror("malloc");
		exit(0);
	}
	listhead->data = 0;
	listhead->next = listhead;
	listhead->prev = listhead;

	return listhead;
}

void listDestory(ListNode** pplist)
{
	assert(*pplist);
	int count = (*pplist)->data;
	while (count--)
	{
		*pplist = (*pplist)->next;
		free((*pplist)->prev);
	}
	free(*pplist);
	*pplist = NULL;
}

void listPrint(ListNode* plist)
{
	assert(plist);
	ListNode* tail = plist->next;
	while (tail != plist)
	{
		printf("%d ", tail->data);
		tail = tail->next;
	}
	printf("\n");
}

void listPushBack(ListNode* plist, DataType data)
{
	ListNode* newnode = listCreate();
	newnode->data = data;
	newnode->next = plist;
	newnode->prev = plist->prev;
	plist->prev->next = newnode;
	plist->prev = newnode;
	plist->data++;
}

void listPopBack(ListNode* plist)
{
	ListNode* prev = plist->prev->prev;
	free(plist->prev);
	plist->prev = prev;
	prev->next = plist;
	plist->data--;
}

void listPushFront(ListNode* plist, DataType data)
{
	ListNode* newnode = listCreate();
	newnode->data = data;
	newnode->prev = plist;
	newnode->next = plist->next;
	plist->next->prev = newnode;
	plist->next = newnode;
	plist->data++;
}

void listPopFront(ListNode* plist)
{
	ListNode* next = plist->next->next;
	free(plist->next);
	plist->next = next;
	next->prev = plist;
	plist->data--;
}

ListNode* listFind(ListNode* plist, DataType data)
{
	ListNode* tail = plist->next;
	while (tail != plist)
	{
		if (tail->data == data)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}

void listInsert(ListNode* plist, ListNode* pos, DataType data)
{
	ListNode* newnode = listCreate();
	newnode->data = data;
	newnode->next = pos;
	newnode->prev = pos->prev;
	pos->prev->next = newnode;
	pos->prev = newnode;
	plist->data++;
}

void listErase(ListNode* plist, ListNode* pos)
{
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	plist->data--;
}