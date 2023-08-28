#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void seqListInit(SeqList* psl)
{
	assert(psl);
	psl->array = NULL;
	psl->size = 0;
	psl->capicity = 0;
}

void checkCapacity(SeqList* psl)
{
	assert(psl);
	if (psl->capicity == psl->size)
	{
		size_t newCapicity = psl->capicity == 0 ? 4 : psl->capicity * 2;
		DataType* temp = (DataType*)realloc(psl->array, newCapicity * sizeof(DataType));
		if (temp == NULL)
		{
			return;
		}
		psl->capicity = newCapicity;
		psl->array = temp;
	}
}

void seqListPushBack(SeqList* psl, DataType data)
{
	assert(psl);
	checkCapacity(psl);
	psl->array[psl->size] = data;
	psl->size++;
}

void seqListPopBack(SeqList* psl)
{
	assert(psl);
	assert(psl->size > 0);

	psl->size--;
}

void seqListPushFront(SeqList* psl, DataType data)
{
	assert(psl);
	checkCapacity(psl);
	for (int i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = data;
	psl->size++;
}

void seqListPopFront(SeqList* psl)
{
	assert(psl);
	assert(psl->size > 0);
	for (int i = 0; i < psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}

int seqListFind(SeqList* psl, DataType data)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (data == psl->array[i])
			return i;
	}
	return -1;
}

void seqListInsert(SeqList* psl, size_t pos, DataType data)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	checkCapacity(psl);

	size_t right = psl->size - 1;
	while (right >= pos)
	{
		psl->array[right + 1] = psl->array[right];
		right--;
	}
	psl->array[pos] = data;
	psl->size++;
}

void seqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	assert(psl->size > 0);

	size_t right = pos;
	while (right < psl->size - 1)
	{
		psl->array[right] = psl->array[right + 1];
		right++;
	}
	psl->size--;
}

void seqListDestory(SeqList* psl)
{
	assert(psl);
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->capicity = 0;
		psl->size = 0;
	}
}

void seqListPrint(SeqList* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->array[i]);
	}
	printf("\n");
}