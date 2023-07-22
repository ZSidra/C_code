#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int x)
{
	int ret = 1;
	for (int i = 1; i <= x; i++)
	{
		ret *= i;
	}
	return ret;
}

int main()
{
	int m = 0;
	int num = 0;
	scanf("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		num += sum(i);
	}
	printf("%d", num);

	return 0;
}