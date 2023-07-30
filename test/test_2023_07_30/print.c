#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
	int sz = sizeof(arr) / sizeof(int);
	print(arr, sz);

	return 0;
}