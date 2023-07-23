#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数中不允许创建临时变量

int myStrlen(char * str)
{
	if (*str != '\0')
	{
	    return 1 + myStrlen(str + 1);
	}
	return 0;
}

int main()
{

	char arr[] = { "abcdef" };
	int ret = myStrlen(arr);
	printf("字符串长度为：%d", ret);

	return 0;
}