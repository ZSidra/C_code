#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* myStrncpy(char* dest, const char* src, int count)
{
	assert(dest && src);
	char* ret = dest;
	while (count-- && (*dest++ = *src++))
	{
		;
	}
	if (*src == '\0' && count != -1)
	{
		while (count--)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = {"hello world"};
	printf("%s" , myStrncpy(arr1, arr2, 15));

	return 0;
}