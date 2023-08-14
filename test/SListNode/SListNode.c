#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"

SListNode* buySListNode(DateType num)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	assert(newnode);
	newnode->data = num;
	newnode->next = NULL;
	return newnode;
}

void sListPrint(SListNode* plist)
{
	while (plist)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	printf("NULL\n");
}

void sListPushBack(SListNode** pplist, DateType num)
{
	assert(pplist);
	SListNode* newnode = buySListNode(num);
	SListNode* tail = *pplist;

	if (!(*pplist))
	{
		*pplist = newnode;
	}
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->next = NULL;
	}
}

void sListPushFront(SListNode** pplist, DateType num)
{
	assert(pplist);
	SListNode* newnode = buySListNode(num);
	newnode->next = *pplist;
	*pplist = newnode;
}

void sListPopBack(SListNode** pplist)
{
	assert(*pplist);
	SListNode* tail = *pplist;
	if (!((*pplist)->next))
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void sListPopFront(SListNode** pplist)
{
	assert(*pplist);
	SListNode* temp = (*pplist)->next;
	free(*pplist);
	*pplist = temp;
}

SListNode* sListFind(SListNode* plist, DateType num)
{
	while (plist)
	{
		if (num == plist->data)
		{
			return plist;
		}
		plist = plist->next;
	}
	return NULL;
}

void sListInsertAfter(SListNode* pos, DateType num)
{
	assert(pos);
	SListNode* newnode = buySListNode(num);
	newnode->next = pos->next;
	pos->next = newnode;
}

void sListEraseAfter(SListNode* pos)
{
	assert(pos && pos->next);
	SListNode* temp = pos->next->next;
	free(pos->next);
	pos->next = temp;
}