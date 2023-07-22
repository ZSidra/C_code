#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int x = 0;
	int y = 0;
	int max = 0;
	scanf("%d%d", &x, &y);
	for (int i = 1; i <= (x >= y ? y : x); i++)
	{
		if (x % i == 0 && y % i == 0 && i > max)
		{
			max = i;
		}
	}
	printf("max = %d", max);

	return 0;
}