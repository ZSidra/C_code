#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* myStrncat(char* dest, const char* src, int count)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (count-- && (*dest++ = *src++))
	{
		;
	}
	*dest = '\0';
	return ret;
}

int main()
{

	char str1[20];
	char str2[20];
	strcpy(str1, "To be ");
	strcpy(str2, "or not to be");
	//myStrncat(str1, str2, 6);
	puts(myStrncat(str1, str2, 15));
	return 0;
}
