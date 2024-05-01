#pragma once

#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000


typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

//初始化
void InitContact(Contact* pc);
//添加
void AddContact(Contact* pc);
//打印
void PrintContact(Contact* pc);
//删除
void DelContact(Contact* pc);
//查找
void SearchContact(Contact* pc);
//修改
void ModifyContact(Contact* pc);