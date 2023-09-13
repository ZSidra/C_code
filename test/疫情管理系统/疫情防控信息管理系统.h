#pragma once

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//类型的声明

#define MAX 1000

#define NAME_MAX 10
#define SEX_MAX 2
#define TELE_MAX 12
#define ADDR_MAX 30

//通讯录初始状态的容量大小
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
	PeoInfo data[MAX];//可以存放1000个人的信息
	int sz;//记录通讯中已经保存的信息个数
}Contact;

//动态的版本
//typedef struct Contact
//{
//	PeoInfo* data;//可以存放1000个人的信息
//	int sz;//记录通讯中已经保存的信息个数
//	int capacity;//记录通讯录当前的最大容量
//}Contact;



//函数的声明

//初始化通讯录
void InitContact(Contact* pc);

void AddContact(Contact* pc);

void PrintContact(const Contact* pc);

void DelContact(Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void SaveContact(const Contact* pc);