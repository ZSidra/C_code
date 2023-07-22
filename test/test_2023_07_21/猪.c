#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char input[20];
	system("shutdown -s -t 60");
	while(1)
	{
		printf("您的电脑将在60s内关机，输入‘我是猪’可停止关机");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}