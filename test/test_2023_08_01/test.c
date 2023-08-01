#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int test(char** str)
{
	printf("%d", *str);
}

int main()
{
	char* arr[3][5] = { 0 };
	arr[0][0] = 7;


	(*test)(arr);

	return 0;
}