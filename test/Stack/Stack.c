#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void stackInit(Stack* ps)
{
	assert(ps);
	ps->array = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void stackPush(Stack* ps, DataType data)
{
	assert(ps);
	if(ps->capacity == ps->top)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		DataType* temp = (DataType*)realloc(ps->array, sizeof(DataType) * ps->capacity);
		if (temp == NULL)
		{
			perror("realloc");
			exit(0);
		}
		ps->array = temp;
		ps->capacity = newcapacity;
	}

	ps->array[ps->top] = data;
	ps->top++;
}

void stackPop(Stack* ps)
{
	assert(ps);
	assert(!stackEmpty(ps));
	ps->top--;
}

DataType stackTop(Stack* ps)
{
	assert(ps);
	assert(!stackEmpty(ps));
	return ps->array[ps->top - 1];
}

int stackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

int stackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

void stackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->top = 0;
}