#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HeapDataType;
typedef struct Heap
{
	HeapDataType* array;
	int size;
	int capacity;
}Heap;

void heapCreate(Heap* hp, HeapDataType* a, int n);
// �ѵ�����
void heapDestory(Heap* hp);

void adjustUp(HeapDataType* array, int child);
// �ѵĲ���
void heapPush(Heap* hp, HeapDataType data);

void adjustDwon(HeapDataType* array, int size, int parent);

void heapPop(Heap* hp);
// ȡ�Ѷ�������
HeapDataType heapTop(Heap* hp);
// �ѵ����ݸ���
int heapSize(Heap* hp);
// �ѵ��п�
bool heapEmpty(Heap* hp);

void heapPrint(Heap* hp);

void heapSort(Heap* hp, int size);