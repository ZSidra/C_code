#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

void printArray(int* array, int n);
//²åÈëÅÅĞò
void insertSort(int* array, int n);
//Ñ¡ÔñÅÅĞò
void SelectSort(int* array, int n);
// Ã°ÅİÅÅĞò
void bubbleSort(int* array, int n);
//Ï£¶ûÅÅĞò
void shellSort(int* array, int n);
//¶ÑÅÅĞò
void heapSort(int* array, int size);
//¿ìËÙÅÅĞò
void quickSort(int* array, int begin, int end);
//¹é²¢ÅÅĞò
void mergeSort(int* array, int n);
//¼ÆÊıÅÅĞò
void countSort(int* array, int n);
