#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool nine(int num)
{
	if (num % 10 == 9 || num /10 % 10 == 9)
	{
		return 1;
	}
	return 0;
}

int main()
{

	for (int i = 1; i <= 100; i++)
	{
		if (nine(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}