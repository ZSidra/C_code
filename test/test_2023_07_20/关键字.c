#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef unsigned int uint;

int main()
{

	uint ui = 5;
	unsigned int ui1 = 3;//�޷�������
	register int num = 10;//register��һ���������ã����齲num��������Ĵ�����,�����ɱ���������
	//�Ĵ�����������ȡ��ַ
	printf("%d\n", ui);
	printf("%d\n", ui1);

	return 0;
}