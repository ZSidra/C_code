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
// 堆的销毁
void heapDestory(Heap* hp);

void adjustUp(HeapDataType* array, int child);
// 堆的插入
void heapPush(Heap* hp, HeapDataType data);

void adjustDwon(HeapDataType* array, int size, int parent);

void heapPop(Heap* hp);
// 取堆顶的数据
HeapDataType heapTop(Heap* hp);
// 堆的数据个数
int heapSize(Heap* hp);
// 堆的判空
bool heapEmpty(Heap* hp);

void heapPrint(Heap* hp);

void heapSort(int* array, int size);

void topK(int* array, int k, int size);