#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool prime(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{

	for (int i = 101; i <= 200; i+=2)
	{
		if (prime(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}