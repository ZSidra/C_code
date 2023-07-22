#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int arr[10];
	int max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 10; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
	}
	printf("max = %d", max);

	return 0;
}