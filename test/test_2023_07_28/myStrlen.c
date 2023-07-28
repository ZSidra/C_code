#include<stdio.h>
#include<assert.h>

int myStrlen(const char * p)
{
	assert(p);
	int count = 0;
	while (*p++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[20] = { "abcdef" };
	printf("%d", myStrlen(arr)); 

	return 0;
}