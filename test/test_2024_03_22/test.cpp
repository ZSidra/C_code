#include <iostream>
void swap(int& num1, int& num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
int _qSort(int* array, int begin, int end)
{
	int key = begin;
	int cur = begin + 1;
	int prev = begin;
	int val = array[begin];

	while (cur <= end)
	{
		if (array[cur] < val && cur != prev++)
		{
			swap(array[cur], array[prev]);
		}
		cur++;
	}

	swap(array[prev], array[key]);
	key = prev;

	return key;
}

void qSort(int* array, int begin, int end)
{
	if (begin >= end)return;

	int key = _qSort(array, begin, end);

	qSort(array, begin, key - 1);
	qSort(array, key + 1, end);
}

int main()
{

	int array[9] = { 6, 4, 5, 7, 1, 8, 9, 3, 2 };
	qSort(array, 0, 8);

	for (int i = 0; i < 9; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}