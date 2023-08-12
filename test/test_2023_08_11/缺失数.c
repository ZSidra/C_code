#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void lostNum(int* p , int n)
{
	int num = 0;
	for (int i = 0; i < n - 1; i++)
	{
		num ^= *(p + i);
	}
	for (int j = 0; j < n; j++)
	{
		num ^= j;
	}
	printf("%d", num);
}

int main()
{
	int arr[7] = { 0 , 1 , 3 , 4 , 5 , 6 , 7 };
	lostNum(arr, 7);

	return 0;
}