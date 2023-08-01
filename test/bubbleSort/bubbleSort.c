#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(char* buf1 , char* buf2 , int width)
{
	for (int i = 0; i < width; i++)
	{
		int temp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = temp;
	}
}

void bubbleSort(void* base , int num , int width , int (*cmp)(const void* e1 , const void* e2))
{
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width , width);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

int cmpInt(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test()
{
	int arr[10] = { 2 , 4 , 6 , 8 , 0 , 1 , 3 , 5 , 7 , 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz, sizeof(int), cmpInt);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test();

	return 0;
}