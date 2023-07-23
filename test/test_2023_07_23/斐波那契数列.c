#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//µÝ¹éÐ§ÂÊ¹ýµÍ
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{

	int input = 0;
	scanf("%d", &input);
	int ret = fib(input);
	printf("%d", ret);

	return 0;
}