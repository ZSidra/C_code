#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void reverseString(char* str)
{
	int len = strlen(str);
	char temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
		reverseString(str + 1);

	*(str + len - 1) = temp;
}

int main()
{

	char arr[] = { "abcdef" };
	reverseString(arr);
	printf("%s", arr);

	return 0;
}