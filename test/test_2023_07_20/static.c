#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���峣��
#define MAX 100
//�����  �����в�����
#define ADD(x , y) ((x) + (y))

//extern int val;//static��ı�ȫ�ֱ������������ԣ���static���ε�ȫ�ֱ�����ʧȥ�ⲿ��������
                    //������ȫ�ֱ������ƣ������κ�Ϊ˽��
                    //static�ı��˾ֲ������Ĵ洢����

int main()
{
	//printf("%d\n", val);
	//int a = 100;
	//printf("%d" ,  & a);
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);
	printf("%d\n", sum);

	return 0;
}