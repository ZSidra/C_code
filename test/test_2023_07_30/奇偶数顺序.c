#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
	int sz = sizeof(arr) / sizeof(int);
	int* left = arr;
	int* right = arr + sz - 1;
	while(1)
	{
		if (left < right && (*left) % 2 == 1)
		{
			left++;
		}
		if (left < right && (*right) % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int temp = 0;
			temp = *left;
			*left = *right;
			*right = temp;
		}
		else
			break;
	}

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}