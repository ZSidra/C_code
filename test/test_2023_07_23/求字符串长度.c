#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�����в���������ʱ����

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
	printf("�ַ�������Ϊ��%d", ret);

	return 0;
}