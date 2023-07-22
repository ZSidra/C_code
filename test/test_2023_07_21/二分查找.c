#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	int right = sizeof(arr) / sizeof(int) - 1;
	int left = 0;
	int num = 0;
	scanf("%d", &num);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (num == arr[mid])
		{
			printf("下标为：%d", mid);
			break;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if(num < arr[mid])
		{
			right = mid - 1;
		}
	}
	if (left > right)
	{
		printf("未找到");
	}

	return 0;
}