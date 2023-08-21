#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

int main()
{
	Heap h;
	int arr[] = { 27,15,19,18,28,34,65,49,25,37 , 10 };
	//heapCreate(&h, arr, 11);
	//heapPop(&h);

	heapSort(arr, 11);

	//heapPrint(&h);

	system("pause");

   	return 0;
}