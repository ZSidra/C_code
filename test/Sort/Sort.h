#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

void printArray(int* array, int n);
//��������
void insertSort(int* array, int n);
//ѡ������
void SelectSort(int* array, int n);
// ð������
void bubbleSort(int* array, int n);
//ϣ������
void shellSort(int* array, int n);
//������
void heapSort(int* array, int size);
//��������
void quickSort(int* array, int begin, int end);
//�鲢����
void mergeSort(int* array, int n);
//��������
void countSort(int* array, int n);
