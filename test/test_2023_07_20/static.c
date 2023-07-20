#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//定义常量
#define MAX 100
//定义宏  宏是有参数的
#define ADD(x , y) ((x) + (y))

//extern int val;//static会改变全局变量的链接属性，被static修饰的全局变量会失去外部链接属性
                    //函数与全局变量类似，被修饰后为私有
                    //static改变了局部变量的存储类型

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