#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{

	char arr[] = { "hello SYCU!" };
	memset(arr, "Fuuck", 5);
	printf("%s\n", arr);
	//1.�����ڴ��ʱ�������ֽ�Ϊ��λ��
	//2.ÿ���ֽڵ����ݶ���һ����
	char arr2[] = { "hello SYCU!" };
	memset(arr2, 'F', 5);
	printf("%s\n", arr2);

	return 0;
}