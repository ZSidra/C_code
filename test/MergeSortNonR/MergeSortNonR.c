#include"MergeSortNonR.h"

void mergeSortNonR(int* array, int n)
{
	int* temp = (int*)malloc(sizeof(int) * n);
	if (temp == NULL)
	{
		perror("malloc");
		exit(0);
	}

	int gap = 1;
	while (gap < n / 2)
	{
		for (int i = 0; i < n; i += gap * 2)
		{
			int begin1 = 0;
			int end1 = begin1 + gap - 1;
			int begin2 = begin1 + gap;
			int end2 = begin1 + 2 * gap - 1;
			int j = begin1;

			if (end1 >= n && begin2 >= n)
			{
				break;
			}
			else if (end2 >= n)
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (array[begin1] <= array[begin2])
				{
					temp[j++] = array[begin1++];
				}
				else
				{
					temp[j++] = array[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				temp[j++] = array[begin1++];
			}
			while (begin2 <= end2)
			{
				temp[j++] = array[begin2++];
			}
			memcpy(array + begin1, temp + begin1, sizeof(int) * (end2 - begin1 + 1));
		}
		
	}

	free(temp);
}