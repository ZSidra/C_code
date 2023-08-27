#include"QuickSortNonR.h"
#include"Stack.h"

int getMidIndex(int* array, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (array[begin] < array[mid])
	{
		if (array[mid] < array[end])
		{
			return mid;
		}
		else if (array[begin] < array[end])
		{
			return end;
		}
		else
		{
			return begin;
		}
	}
	else // (a[begin] >= a[mid])
	{
		if (array[mid] > array[end])
		{
			return mid;
		}
		else if (array[begin] < array[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}

int partSort1(int* array, int left, int right)
{
	//hoare版本
	int mid = getMidIndex(array, left, right);
	swap(array, mid, left);
	int key = left;
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

	return key;
}

int partSort2(int* array, int left, int right)
{
	//挖坑法
	int mid = getMidIndex(array, left, right);
	swap(array, mid, left);
	int valuekey = array[left];
	int pit = left;
	while (left < right)
	{
		if (left < right && array[right] >= valuekey)
		{
			right--;
		}
		array[pit] = array[right];
		pit = right;
		if (left < right && array[left] <= valuekey)
		{
			left++;
		}
		array[pit] = array[left];
		pit = left;
	}
	array[pit] = valuekey;

	return pit;
}

int partSort3(int* array, int begin, int end)
{
	//前后指针法
	int mid = getMidIndex(array, begin, end);
	swap(array, mid, begin);
	int key = begin;
	int cur = begin + 1;
	int prev = begin;
	while (cur <= end)
	{
		if (array[cur] < array[key] && prev++ != cur)
			swap(array, cur, prev);

		cur++;
	}
	swap(array, key, prev);
	key = prev;

	return key;
}

void quickSortNonR(int* array, int begin, int end)
{
	Stack sta;
	stackInit(&sta);
	stackPush(&sta, end);
	stackPush(&sta, begin);

	while (!stackEmpty(&sta))
	{
		int left = stackTop(&sta);
		stackPop(&sta);
		int right = stackTop(&sta);
		stackPop(&sta);

		int key = partSort3(array, left, right);

		if (right > key + 1)
		{
			stackPush(&sta, right);
			stackPush(&sta, key + 1);
		}
		if (left < key - 1)
		{
			stackPush(&sta, key - 1);
			stackPush(&sta, left);
		}
	}
	stackDestroy(&sta);
}