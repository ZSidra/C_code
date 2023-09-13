#define _CRT_SECURE_NO_WARNINGS 1

#include "疫情防控信息管理系统.h"

void menu()
{
	printf("*******疫情防控信息管理系统*******\n");
	printf("**********************************\n");
	printf("******* 1.add     2.del    *******\n");
	printf("******* 3.search  4.modify *******\n");
	printf("******* 5.sort    6.print  *******\n");
	printf("******* 7.load    8.save   *******\n");
	printf("******* 0.exit             *******\n");
	printf("**********************************\n");
}

void test()
{
	int input = 0;

	
	Contact con;

	
	InitContact(&con);

	do
	{
		menu();
		printf("请输入功能：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			SortContact(&con);
			break;
		case 6:
			PrintContact(&con);
			break;
		case 7:
			LoadContact(&con);
			break;
		case 8:
			SaveContact(&con);
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("输入有误\n");
			break;
		}
		system("pause");
		system("cls");
	} while (input);
}

int main()
{
	test();
	return 0;
}