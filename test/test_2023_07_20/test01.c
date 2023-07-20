#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

static int val = 100;

int Max(int m, int n)
{
	if (m > n)
	{
		return m;
	}
	return n;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("Max=%d\n", Max(a, b));
	return 0;
}