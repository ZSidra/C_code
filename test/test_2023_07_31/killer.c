#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

enum
{
	A , B , C , D
};

int main()
{
	int answer = 0;
	for (answer = A; answer <= D; answer++)
	{
		if ((answer != A) + (answer == C) + (answer == D) + (answer != D) == 3)
		{
			if (answer == 0)
			{
				printf("A");
			}
			else if (answer == 1)
			{
				printf("B");
			}
			else if (answer == 2)
			{
				printf("C");
			}
			else
			{
				printf("D");
			}
		}
	}
	

	return 0;
}