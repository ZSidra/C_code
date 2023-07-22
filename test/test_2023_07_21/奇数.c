#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m = 0;
	scanf("%d", &m);
	if (0 == m % 2)
	{
		printf("·ñ");
	}
	else
	{
		printf(" ÊÇ ");
	}

	return 0;
}