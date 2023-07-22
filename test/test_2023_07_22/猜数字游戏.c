#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	system("cls");
	printf("猜数字游戏\n");
	printf("1.开始\n");
	printf("2.退出\n");
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
			printf("输入有误！请重新输入！");
			menu();
		}

		printf("请输入您猜测的数字：");
		scanf("%d", &num1);

		while (num != num1) {
			if (num > num1) {
				printf("您猜的数字有些小了，请再猜一次。");
			}
			else {
				printf("您猜的数字有些大了，请再猜一次。");
			}
			printf("请输入您猜测的数字：");
			scanf("%d", &num1);
		}
		printf("恭喜您，猜中了！游戏结束。");

		system("pause");
	}


	return 0;
}