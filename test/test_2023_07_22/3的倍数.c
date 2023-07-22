#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}

	for (int j = 0; j < 100; j++)
	{
		if (arr[j] % 3 == 0)
		{
			printf("%d ", arr[j]);
		}
	}

	return 0;
}