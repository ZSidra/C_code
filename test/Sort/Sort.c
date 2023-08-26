#include"Sort.h"

void printArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void swap(int* array, int num1, int num2)
{
	int tem = array[num1];
	array[num1] = array[num2];
	array[num2] = tem;
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

void SelectSort(int* array, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int max = end;
		int min = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (array[i] < array[min])
			{
				min = i;
			}
			if (array[max] < array[i])
			{
				max = i;
			}
		}
		if (max == begin)
		{
			max = min;
		}
		swap(array, begin, min);
		swap(array, end, max);
		begin++;
		end++;
	}
}

void bubbleSort(int* array, int n)
{

	for (int i = 0; i < n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				flag = false;
			}
		}
		if (flag)
			break;
	}
}

void shellSort(int* array, int n)
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

void adjustDwon(int* array, int size, int parent)
{
	int child = parent * 2 + 1;
	if (child + 1 < size && array[child + 1] < array[child])
	{
		child++;
	}
	while (array[child] < array[parent])
	{
		if (child + 1 < size && array[child + 1] < array[child])
		{
			child++;
		}
		if (size <= child)
		{
			break;
		}
		swap(array, child, parent);
		parent = child;
		child = parent * 2 + 1;

	}
}

void heapSort(int* array, int size)
{
	//ÉýÐò Ð¡¶¥¶Ñ 
	//1.½¨¶Ñ
	for (int i = size - 1; i >= 0; i--)
	{
		adjustDwon(array, size, i);
	}
	//2.µ÷Õû£¬ÅÅÐò
	for (int j = 1; j < size; j++)
	{
		swap(array, 0, size - j);
		adjustDwon(array, size - j, 0);
	}
}

void quickSort(int* array, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	int left = begin;
	int right = end;
	int key = begin;
	while (left < right)
	{
		while (left < right && array[right] >= array[key])
		{
			right--;
		}
		while (left < right && array[left] <= array[key])
		{
			left++;
		}
		swap(array, key, left);
	}
	key = left;

	quickSort(array, begin, key - 1);
	quickSort(array, key + 1, end);
}