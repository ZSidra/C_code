#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char input[20];
	system("shutdown -s -t 60");
	while(1)
	{
		printf("���ĵ��Խ���60s�ڹػ������롮��������ֹͣ�ػ�");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}