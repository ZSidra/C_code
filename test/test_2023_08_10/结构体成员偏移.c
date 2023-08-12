#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define OFFSETOF(type , mem) (int)&(((type*)0) -> mem)

struct S
{
	char a;
	int b;
	double c;
};

int main()
{
	struct S s = { 'a' , 4 , 3.14 };
	printf("%d" , OFFSETOF(struct S, c));

	return 0;
}