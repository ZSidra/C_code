#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int input = 0;
	scanf("%d", &input);
	printf("����λ��");
	for (int i = 1; i <= 32; i++)
	{
		if (i % 2 == 1)
			printf("%d " , (input >> i) & 1);
	}
	printf("\n");
	printf("ż��λ��");
	for (int i = 1; i <= 32; i++)
	{
		if (i % 2 == 0)
			printf("%d ", (input >> i) & 1);
	}

	return 0;
}