#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int x = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 1000 != 0)
		{
			x = i;
			break;
		}
	}

	for (int j = x; j <= 2000; j += 4)
	{
		if (j % 100 != 0)
		{
			printf("%d ", j);
		}
		if (j % 400 == 0)
		{
			printf("%d ", j);
		}
	}

	return 0;
}