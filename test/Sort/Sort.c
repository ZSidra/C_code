#include"Sort.h"

void printArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void insertSort(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = array[end + 1];
		while (end >= 0)
		{
			if (temp < array[end])
			{
				array[end + 1] = array[end];
				end--;
			}
			else
			{
				break;
			}
		}
		array[end + 1] = temp;
	}
}

void ShellSort(int* array, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = n / 3 + 1;

		for (int i = 0; i < n - gap; i++)
		{
			int end = 0;
			int temp = array[end + gap];
			while (end >= 0)
			{
				if (temp < array[end])
				{
					array[end + gap] = array[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			array[end + gap] = temp;
		}
	}
}
