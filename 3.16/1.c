#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±�:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//���ַ������������м��ӡ

//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//�ȴ�һ��
//		system("cls");//�����Ļ
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�ַ����ıȽ���strcmp�Ƚϵ���ASCII��ֵ
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,��������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������Σ��˳�����\n");
//	}
//	return 0;
//}

//����С��Ϸ
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*******1. play    **********\n");
//	printf("*******0. exit    **********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int a = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess == a)
//		{
//			printf("�¶���\n");
//			break;
//		}
//		else if (guess < a)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�´���\n");
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������������ѡ��");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		c = b;
//	}
//	else
//	{
//		c = a;
//	}
//
//	while (1)
//	{
//		if (a % c == 0 && b % c == 0)
//		{
//			printf("���Լ��Ϊ%d", c);
//			break;
//		}
//		else
//			c--;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ%d", c);
//	return 0;
//}

