#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* myStrcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = {0};
	char arr2[] = { "abcdef" };
	printf("%s", myStrcpy(arr1, arr2));
	printf("%s", arr1);

	return 0;
}