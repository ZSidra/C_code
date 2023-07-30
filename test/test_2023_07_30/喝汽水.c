#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1元1瓶 ，2空瓶换1瓶
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
	int money = 20;//余额
	int num = 0;//持有空瓶数
	int sum = 0;//喝下饮料的总瓶数
	water(&money , &num , &sum);
	printf("共喝了：%d瓶", sum);

	return 0;
}