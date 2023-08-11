#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<limits.h>
#include<ctype.h>

int myAtoi(const char* str)
{
	assert(str);
	long long ret = 0;
	int flag = 1;
	if (*str == '\0')
	{
		return 0;
	}
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	else if (*str == '+')
	{
		flag = 1;
		str++;
	}
	while (*str && isdigit(*str))
	{
		ret = 10 * ret + flag * (*str - 48);
		str++;
		if (ret > INT_MAX)
		{
			ret = INT_MAX;
			break;
		}
		else if (ret < INT_MIN)
		{
			ret = INT_MIN;
			break;
		}
	}

	return (int)ret;
}

int main()
{
	char* str = "  -834fhf";
	printf("%d", myAtoi(str));

	return 0;
}