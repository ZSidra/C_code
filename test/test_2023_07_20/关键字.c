#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef unsigned int uint;

int main()
{

	uint ui = 5;
	unsigned int ui1 = 3;//无符号整型
	register int num = 10;//register起到一个建议作用，建议讲num变量放入寄存器中,最终由编译器决定
	//寄存器变量不能取地址
	printf("%d\n", ui);
	printf("%d\n", ui1);

	return 0;
}