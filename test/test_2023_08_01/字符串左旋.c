#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void left(char* p , int k)
{
	int len = strlen(p);
	for (int i = 0; i < k; i++)
	{
		char temp = *p;
		for (int j = 0; j < len - 1; j++)
		{
			*(p + j) = *(p + j + 1);
		}
		*(p + len - 1) = temp;
	}
}

int main()
{
	int k = 0;
	char arr[20] = {"ABCDEF"};
	scanf("%d", &k);
	left(arr , k);
	printf("%s", arr);

	return 0;
}