#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fac(int num)
{
	int ret = 0;
	if (num > 1)
	{
		ret = num * fac(num - 1);
	}
	if (num <= 1)
	{
		ret = num;
	}
}

int main()
{

	int num = 0;
	scanf("%d", &num);
	int ret = fac(num);
	printf("%d", ret);

	return 0;
}