#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void* myMemcpy(void* dst, const void* src, size_t count)
{
	assert(dst && src);
	for (int i = 0; i < count; i++)
	{
		*((char*)dst + i) = *((char*)src + i);
	}
	return dst;
}

int main()
{
	int arr1[20] = { 0 };
	int arr2[20] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 };
	myMemcpy(arr1, arr2, 28);
	printf("%d", arr1[3]);
	return 0;
}