#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* myStrstr(const char* dst, const char* src)
{
	assert(dst && src);
	char* ln = (char*)dst;
	char* sh = (char*)src;
	char* s1 = NULL;

	if (*sh == 0)
	{
		return NULL;
	}

	while (*ln)
	{
		s1 = ln;
		sh = (char*)src;
		
		while (*s1 && *sh && (*s1 == *sh))
		{
			s1++;
			sh++;
		}
		if (*sh == 0)
		{
			return ln;
		}
		ln++;
	}
}

int main()
{
	char ch[20] = { "wocaonima" };
	char arr[] = { "cao" };
	//char arr[3] = {0};
	printf("%s", myStrstr(ch, arr));

	return 0;
}