#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加完成\n");
}

void PrintContact(Contact* pc) 
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("%-10s%-5s%-5s%-20s%-20s\n", "名字", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s%-5s%-5d%-20s%-20s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}

}

static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME];
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = fos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	pritnf("删除成功\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找的人的名字:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-10s%-5s%-5s%-20s%-20s\n", "名字", "性别", "年龄", "电话", "地址");
		printf("%-10s%-5s%-5d%-20s%-20s\n",
				pc->data[fos].name,
				pc->data[fos].sex,
				pc->data[fos].age,
				pc->data[fos].tele,
				pc->data[fos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改的人的名字:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[fos].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[fos].sex);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[fos].age));
		printf("请输入电话:>");
		scanf("%s", pc->data[fos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[fos].addr);
		printf("修改完成\n");
	}
}