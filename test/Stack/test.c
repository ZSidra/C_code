#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

int main()
{
	Stack s;
	stackInit(&s);
	stackPush(&s, 1);
	stackPush(&s, 2);
	stackPush(&s, 3);
	stackPop(&s);
	printf("%d", stackTop(&s));

	return 0;
}