#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int i)
{
	if (i == 0)
	{
		printf("%d\n", 1);
		return;
	}
	printf("%d ", 1);
	int temp = i;
	for (; i > 1; i--)
	{
		printf("%d ", temp);
	}
	printf("%d\n", 1);
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		print(i);
	}

	return 0;
}