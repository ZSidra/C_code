#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* myStrstr(const char* dst, const char* src)
{
	assert(dst && src);
	char* s1 = (char*)dst;
	char* s2 = (char*)src;
	char* flag = dst;

	while (s1++)
	{

		if (*s1 == *s2)
		{
			flag = dst;
			while (s1 && s2)
			{
				if (*s1 == *s2)
				{
					s1++;
					s2++;
				}
				else
				{
					s1 = flag;
					s2 = src;
					break;
				}
			}
		}
	}
	if (s1 == 0)
	{
		return 0;
	}
	if (s2 == 0)
		return dst;
}

int main()
{
	char ch[20] = { "wocaonima" };
	char arr[] = { "cao" };
	printf("%s", myStrstr(ch, arr));

	return 0;
}