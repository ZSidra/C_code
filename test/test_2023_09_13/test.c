#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
struct stu {
	int id;
	char name[20];
	double score;
};
int total_number = 0;
struct stu myclass[N];
void display();
void additional();
void del();
void modify();
void seek();
void save();
void sort();
void menu();
void help();
void read();

int main() {

	while (1)
	{
		menu();
	}
	return 0;
}
void menu()
{
	int choose;
	do {
		printf("1) addition information:\n");
		printf("2) delete information:\n");
		printf("3) modify information:\n");
		printf("4) search information:\n");
		printf("5) sort infor: \n");
		printf("6) save to file:\n");
		printf("7) quit system:\n");
		printf("8) help:\n");
		printf("9) display information:\n");
		printf("10) read file from disk:\n");
		printf("Enter your choice:(1-9) ");
		scanf("%d", &choose);
	} while (choose > 9 || choose < 1);

	switch (choose) {
	case 1:
		additional();
		break;
	case 2:
		del();
		break;
	case 3:
		modify();
		break;
	case 4:
		seek();
		break;
	case 5:
		sort();
		break;
	case 6:
		save();
		break;
	case 7:
		exit(0);
	case 8:
		help();
		break;
	case 9:
		display();
		break;
	case 10:
		read();
		break;
	}
	system("pause");
	system("cls");

}
void display()
{
	int i;
	printf("\n\n");
	for (i = 0; i < total_number; i++)
	{
		printf("%10d%10s%20.6lf\n", myclass[i].id, myclass[i].name, myclass[i].score);
	}
	printf("\n\n");
}
void additional() {
	int length, i;
	puts("how many addition information for class: ");
	scanf("%d", &length);
	for (i = total_number; i < total_number + length; i++)
		scanf("%d%s%lf", &myclass[i].id, myclass[i].name, &myclass[i].score);

	total_number += length;

}
void del() {
	int delid = 0;
	int flag = 0;
	int temp = -1;
	printf("which do you want to delete:");
	scanf("%d", &delid);

	for (int i = 0; i < total_number; i++)
	{
		if (myclass[i].id == delid)
		{
			flag = 1;
			temp = i;
			break;
		}
	}

	if (flag == 1)
	{
		for (int j = temp; j < total_number - 1; j++)
		{
			myclass[j] = myclass[j + 1];
		}
		total_number--;
	}
	else if(flag == 0)
	{
		printf("no search\n");
	}


	return;
}
void modify() {
	int modid = 0;
	printf("who id:");
	scanf("%d", &modid);

	for (int i = 0; i < total_number; i++)
	{
		if (myclass[i].id == modid)
		{
			printf("new name? new score?:");
			scanf("%s%lf", myclass[modid].name, &myclass[modid].score);
			printf("ok!");
			return;
		}
	}
	printf("no search\n");
	

}
void seek()
{
	int serid = 0;
	printf("who id:");
	scanf("%d", &serid);

	for (int i = 0; i < total_number; i++)
	{
		if (myclass[i].id == serid)
		{
			printf("id : %d , name : %s , score : %lf\n", myclass[i].id, myclass[i].name, myclass[i].score);
			return;
		}
	}
	printf("No search\n");
	return;
}
void save()
{
	puts("writing to file....");
	FILE* fp = fopen("D:\\myclass5-6.csv", "w");
	for (int i = 0; i < total_number; i++)
		fprintf(fp, "%d,%s,%lf\n", myclass[i].id, myclass[i].name, myclass[i].score);
	fclose(fp);
	puts("file writed!!!");
}

void read()
{
	char s[50], * result;
	int counter_id, i = 0;
	FILE* fp = fopen("d:\\myclass5-6.csv", "r");
	printf("file address:%p", fp);
	puts("file opened!\n");
	while (fscanf(fp, "%d,%s,%lf\n", s) != EOF)
	{
		printf("%s", s);
		result = strtok(s, ",");
		counter_id = 1;
		while (result != NULL) {
			//printf("%s\n",result);
			switch (counter_id++) {
			case 1:
				myclass[i].id = atoi(result);//TODO
				break;
			case 2:
				strcpy(myclass[i].name, result);//TODO
				break;
			case 3:
				myclass[i].score = atof(result);
				break;
			default:
				//TODO
				break;
			}
			result = strtok(NULL, ",");
		}
		i++;
		//system("pause");
	}
	total_number = i;

}
void sort()
{
	for (int i = 0; i < total_number - 1; i++)
	{
		int end = i;
		struct stu temp = myclass[end + 1];
		while (end >= 0)
		{
			if (temp.id < myclass[end].id)
			{
				myclass[end + 1] = myclass[end];
				end--;
			}
			else
			{
				break;
			}
		}
		myclass[end + 1] = temp;
	}
}

void help()
{
	printf("no help\n");
}