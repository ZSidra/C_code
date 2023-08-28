#include"Queue.h"

void queueInit(Queue* q)
{
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}

void queuePush(Queue* q, DataType data)
{
	assert(q);
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(0);
	}
	newnode->data = data;
	newnode->next = NULL;
	if (q->size == 0)
	{
		q->head = newnode;
	}
	else
	{
		q->tail->next = newnode;
	}
	q->tail = newnode;
	q->size++;
}

void queuePop(Queue* q)
{
	assert(q);
	assert(!queueEmpty(q));
	if (q->head == q->tail)
	{
		free(q->head);
		q->head = q->tail = NULL;
	}
	else
	{
		Node* temp = q->head;
		q->head = q->head->next;
		free(temp);
	}
	q->size--;
}

DataType queueFront(Queue* q)
{
	assert(q);
	assert(!queueEmpty(q));
	return q->head->data;
}

DataType queueBack(Queue* q)
{
	assert(q);
	assert(!queueEmpty(q));
	return q->tail->data;
}

int queueSize(Queue* q)
{
	assert(q);
	return q->size;
}

int queueEmpty(Queue* q)
{
	assert(q);
	return q->size == 0;
}

void queueDestroy(Queue* q)
{
	assert(q);
	while (q->head)
	{
		Node* temp = q->head;
		q->head = q->head->next;
		free(temp);
	}
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}