#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int myStrcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return *s1 - *s2;
	}
	return 0;
}

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[] = { "abcdg" };
	printf("%d", myStrcmp(arr1, arr2));

	return 0;
}