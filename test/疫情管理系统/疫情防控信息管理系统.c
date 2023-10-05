#define _CRT_SECURE_NO_WARNINGS 1

#include "���������Ϣ����ϵͳ.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void LoadContact(Contact* pc)
{
	FILE* pf = fopen("contact.csv", "rb");
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}


	char row[80];
	char* token;
	while (fgets(row, 80, pf) != NULL) {
		token = strtok(row, ",");
		sscanf(token , "%s", pc->data[pc->sz].no);
		token = strtok(NULL, ",");
		sscanf(token, "%s", pc->data[pc->sz].id);
		token = strtok(NULL, ",");
		sscanf(token, "%s", pc->data[pc->sz].name);
		token = strtok(NULL, ",");
		sscanf(token, "%d", &(pc->data[pc->sz].age));
		token = strtok(NULL, ",");
		sscanf(token, "%s", pc->data[pc->sz].sex);
		token = strtok(NULL, ",");
		sscanf(token, "%s", pc->data[pc->sz].phone_num);
		token = strtok(NULL, ",");
		sscanf(token, "%s", pc->data[pc->sz].health);
		token = strtok(NULL, ",");
		sscanf(token, "%f", &(pc->data[pc->sz].temp));
		pc->sz++;
	}

	fclose(pf);
	pf = NULL;
}

void AddContact(Contact* pc)
{
	assert(pc);


	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}

	printf("��������:>");
	scanf("%s", pc->data[pc->sz].no);
	printf("���������֤:>");
	scanf("%s", pc->data[pc->sz].id);
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].phone_num);
	printf("�����뽡��״��:>");
	scanf("%s", pc->data[pc->sz].health);
	printf("����������:>");
	scanf("%f", &(pc->data[pc->sz].temp));

	pc->sz++;
	printf("��ӳɹ�\n");
}


void PrintContact(const Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-10s %-19s %-20s %-5s %-5s %-12s %-30s %-5s\n","���" , "���֤" , "����", "����", "�Ա�", "�绰", "����״��" , "����");

	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-19s %-20s %-5d %-5s %-12s %-30s %-5d\n", pc->data[i].no , pc->data[i].id , pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].phone_num, pc->data[i].health , pc->data[i].temp);
	}
}

int FindByName(const Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}

	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}

	int j = 0;
	for (j = pos; j < pc->sz - 1; j++)
	{
		pc->data[j] = pc->data[j + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%-10s %-19s %-20s %-5s %-5s %-12s %-30s %-5s\n", "���", "���֤", "����", "����", "�Ա�", "�绰", "����״��", "����");
	printf("%-10s %-19s %-20s %-5d %-5s %-12s %-30s %-5d\n", pc->data[pos].no, pc->data[pos].id, pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].phone_num, pc->data[pos].health, pc->data[pos].temp);
}

void ModifyContact(Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}

	printf("��������:>");
	scanf("%s", pc->data[pos].no);
	printf("���������֤:>");
	scanf("%s", pc->data[pos].id);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].phone_num);
	printf("�����뽡��״��:>");
	scanf("%s", pc->data[pos].health);
	printf("����������:>");
	scanf("%f", &(pc->data[pos].temp));

	printf("�޸ĳɹ�\n");
}

void SortContact(Contact* pc)
{
	int n = pc->sz;
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		PeoInfo temp = pc->data[end + 1];
		while (end >= 0)
		{
			if (strcmp(temp.no , pc->data[end].no) < 0)
			{
				pc->data[end + 1] = pc->data[end];
				end--;
			}
			else
			{
				break;
			}
		}
		pc->data[end + 1] = temp;
	}
}


void SaveContact(const Contact* pc)
{
	FILE* pf = fopen("contact.csv", "wb");
	if (pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}

	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fprintf(pf, "%s,%s,%s,%d,%s,%s,%s,%f\n", pc->data[i].no , pc->data[i].id, pc->data[i].name, pc->data[i].age , pc->data[i].sex , pc->data[i].phone_num , pc->data[i].health , pc->data[i].temp);
	}

	fclose(pf);
	pf = NULL;
}