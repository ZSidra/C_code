#include"Heap.h"

void heapCreate(Heap* hp, HeapDataType* a, int n)
{
	hp->array = NULL;
	hp->capacity = hp->size = 0;

	for (int i = 0; i < n; i++)
	{
		heapPush(hp, *(a + i));
	}
}

void swap(HeapDataType* array, int num1, int num2)
{
	int tem = array[num1];
	array[num1] = array[num2];
	array[num2] = tem;
}

void heapDestory(Heap* hp)
{
	assert(hp);
	free(hp->array);
	hp->array = NULL;
	hp->capacity = hp->size = 0;
}

void adjustUp(HeapDataType* array, int child)
{
	int parent = (child - 1) / 2;
	while (array[child] < array[parent])
	{
		swap(array, child, parent);
		child = parent;
		parent = (child - 1) / 2;
	}
}

void heapPush(Heap* hp, HeapDataType data)
{
	assert(hp);
	int newcapicaty = hp->capacity == 0 ? 4 : hp->capacity * 2;
	HeapDataType* temp = (HeapDataType*)realloc(hp->array, sizeof(HeapDataType) * newcapicaty);
	if (temp == NULL)
	{
		perror("realloc");
		exit(0);
	}
	hp->capacity = newcapicaty;
	hp->array = temp;
	hp->array[hp->size] = data;

	adjustUp(hp->array, hp->size);
	hp->size++;
}

void adjustDwon(HeapDataType* array, int size, int parent)
{
	int child = parent * 2 + 1;
	while (array[child] < array[parent])
	{
		if (child + 1 < size && array[child + 1] < array[child])
		{
			child++;
		}
		if (size <= child)
		{
			break;
		}
		swap(array, child, parent);
		parent = child;
		child = parent * 2 + 1;

	}
}

void heapPop(Heap* hp)
{
	assert(hp);
	assert(!heapEmpty(hp));
	swap(hp->array, 0, hp->size - 1);
	hp->size--;
	
	adjustDwon(hp->array, hp->size, 0);
}

HeapDataType heapTop(Heap* hp)
{
	assert(hp);
	assert(!heapEmpty(hp));

	return hp->array[0];
}

int heapSize(Heap* hp)
{
	assert(hp);

	return hp->size;
}

bool heapEmpty(Heap* hp)
{
	assert(hp);

	return hp->size == 0;
}

void heapPrint(Heap* hp)
{
	assert(hp);
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->array[i]);
	}
	printf("\n");
}

void heapSort(int* array, int size)
{
	//ÉýÐò Ð¡¶¥¶Ñ 
	//1.½¨¶Ñ
	for (int i = size - 1; i >= 0; i--)
	{
		adjustDwon(array, size , i);
	}
	//2.µ÷Õû£¬ÅÅÐò
	for (int j = 1; j < size; j++)
	{
		swap(array, 0, size - j);
		adjustDwon(array, size - j , 0);
	}
}