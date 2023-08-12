#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SWAP(num) ((num) = ((((num) & 0x55555555) << 1) + (((num) & 0xaaaaaaaa) >> 1)))

int main()
{
	int num = 10;
	SWAP(num);
	printf("%d", num);

	return 0;
}
