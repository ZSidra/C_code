#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void* myMemmove(void* dst, const void* src, size_t count)
{
	assert(dst && src);
	void* ret = NULL;
	if (dst < src)
	{
		while (count--)
		{
			*((char*)dst) = *((char*)src);
			(char*)dst = (char*)dst + 1;
			(char*)src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dst + count - 1) = *((char*)src + count - 1);
		}
	}
	return ret;
}

int main()
{
	char arr[20] = { "abcdefg" };
	myMemmove(arr , arr + 3 , 3);
	printf("%s", arr);

	return 0;
}