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
		printf("ͨѶ¼����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("������\n");
}

void PrintContact(Contact* pc) 
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-10s%-5s%-5s%-20s%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	int i = 0;
	for (i = fos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	pritnf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-10s%-5s%-5s%-20s%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int fos = FindByName(pc, name);
	if (fos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[fos].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[fos].sex);
		printf("����������:>");
		scanf("%d", &(pc->data[fos].age));
		printf("������绰:>");
		scanf("%s", pc->data[fos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[fos].addr);
		printf("�޸����\n");
	}
}