#include<stdio.h>

int main()
{

	int a = 0;
	int* p = &a;
	printf("%p ", p);
	printf("%d", sizeof(int));

	return 0;
}