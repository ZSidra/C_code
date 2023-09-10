#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int left(char* p1, char* p2)
{
	int len = strlen(p1);
	for (int i = 0; i < len; i++)
	{
		char temp = *p1;
		for (int j = 0; j < len - 1; j++)
		{
			*(p1 + j) = *(p1 + j + 1);
		}
		*(p1 + len - 1) = temp;
		if (strcmp(p1, p2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int k = 0;
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s%s", arr1 , arr2);
	printf("%d", left(arr1, arr2));

	return 0;
}