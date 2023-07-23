#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{

	char arr[] = { "hello SYCU!" };
	memset(arr, "Fuuck", 5);
	printf("%s\n", arr);
	//1.设置内存的时候是以字节为单位的
	//2.每个字节的内容都是一样的
	char arr2[] = { "hello SYCU!" };
	memset(arr2, 'F', 5);
	printf("%s\n", arr2);

	return 0;
}