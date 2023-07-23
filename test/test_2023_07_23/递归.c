#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main()
{

	int num = 0;
	scanf("%d", &num);
	print(num);

	return 0;
}