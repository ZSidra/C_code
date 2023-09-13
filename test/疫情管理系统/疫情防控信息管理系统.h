#pragma once

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//���͵�����

#define MAX 1000

#define NAME_MAX 10
#define SEX_MAX 2
#define TELE_MAX 12
#define ADDR_MAX 30

//ͨѶ¼��ʼ״̬��������С
#define DEFAULT_SZ 3

typedef struct PeoInfo
{
	char no[10];
	char id[19];
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char phone_num[TELE_MAX];
	char health[ADDR_MAX];
	float temp;
} PeoInfo;


typedef struct Contact
{
	PeoInfo data[MAX];//���Դ��1000���˵���Ϣ
	int sz;//��¼ͨѶ���Ѿ��������Ϣ����
}Contact;

//��̬�İ汾
//typedef struct Contact
//{
//	PeoInfo* data;//���Դ��1000���˵���Ϣ
//	int sz;//��¼ͨѶ���Ѿ��������Ϣ����
//	int capacity;//��¼ͨѶ¼��ǰ���������
//}Contact;



//����������

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

void AddContact(Contact* pc);

void PrintContact(const Contact* pc);

void DelContact(Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void SaveContact(const Contact* pc);