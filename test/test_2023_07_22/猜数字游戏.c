#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	system("cls");
	printf("��������Ϸ\n");
	printf("1.��ʼ\n");
	printf("2.�˳�\n");
}

int main()
{
	srand((unsigned int)time(NULL));

	while (1)
	{
		int num = rand() % 100 + 1;
		int num1 = 0;
		menu();
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			return 0;
		default:
			printf("�����������������룡");
			menu();
		}

		printf("���������²�����֣�");
		scanf("%d", &num1);

		while (num != num1) {
			if (num > num1) {
				printf("���µ�������ЩС�ˣ����ٲ�һ�Ρ�");
			}
			else {
				printf("���µ�������Щ���ˣ����ٲ�һ�Ρ�");
			}
			printf("���������²�����֣�");
			scanf("%d", &num1);
		}
		printf("��ϲ���������ˣ���Ϸ������");

		system("pause");
	}


	return 0;
}