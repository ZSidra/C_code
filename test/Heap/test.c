#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
#include<time.h>

int main()
{
	//Heap h;
	//int arr[] = { 27,15,19,18,28,34,65,49,25,37 , 10 };
	//heapCreate(&h, arr, 11);
	//heapPop(&h);

	//heapSort(arr, 11);

	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 3;
	a[5121] = 1000000 + 4;
	a[120] = 1000000 + 5;
	a[99] = 1000000 + 6;
	a[0] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	topK(a, 10 , n);
	free(a);
	a = NULL;

	//heapPrint(&h);

	system("pause");

   	return 0;
}