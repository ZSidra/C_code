#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void findOne(const int* p , int sz)
{
	int num = 0;
	for (int i = 0; i < sz; i++)
	{
		num ^= *(p + i);
	}
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			count = i;
			break;
		}
	}
	int num1 = num;
	for (int i = 0; i < sz; i++)
	{
		if ((*(p + i) >> count) & 1 == 1)
		{
			num1 ^= *(p + i);
		}
	}
	int num2 = num1 ^ num;
	printf("%d %d", num1, num2);
}

int main()
{
	int arr[] = { 1 , 2 , 3 , 4 , 5 , 1 , 2 , 3 , 4 , 6 };
	int sz = sizeof(arr) / sizeof(int);
	findOne(arr , sz);

	return 0;
}