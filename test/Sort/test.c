#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

int main()
{
	int array[10] = { 0 , 4 , 6 , 7 , 8 , 2 , 3 , 9 , 5 , 1 };
	quickSort(array, 0, 9);
	printArray(array , 10);

	return 0;
}