#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1Ԫ1ƿ ��2��ƿ��1ƿ
void water(int* m , int* n , int* s)
{

	while (*m != 0)
	{
		(*m)--;
		(*n)++;
		(*s)++;
	}
	if (*n > 1)
	{
		*n = *n - 2;
		(*m)++;
		water(m, n, s);
	}
}

int main()
{
	int money = 20;//���
	int num = 0;//���п�ƿ��
	int sum = 0;//�������ϵ���ƿ��
	water(&money , &num , &sum);
	printf("�����ˣ�%dƿ", sum);

	return 0;
}