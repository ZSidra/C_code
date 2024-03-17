#include <iostream>

void swap(int& num1, int& num2)
{
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
}

void insertSort(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int j = i + 1;
		while (j > 0 && array[j] < array[j - 1])
		{
			swap(array[j], array[j - 1]);
			j--;
		}
	}
}


int main()
{
	int array[9] = { 2, 4, 6, 8, 1, 3, 5, 7, 9 };
	insertSort(array, 9);

	for (int i = 0; i < 9; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}