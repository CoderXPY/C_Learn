#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("δ����");
//		printf("����̸����");
//	}
//	//�����ʱ{}����ʡ��
//	return 0;
//}


//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age < 40)
//	{
//		printf("׳��\n");
//	}
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//	else
//		printf("haha");
//	//�˴�����ӡ��else�����������ifƥ��
//	return 0;
//}


//int main()
//{
//	int num = 3;
//	if (4 == num)
//	//�˴������������һ���������
//		printf("ha\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a % 2)
//		printf("����");
//	else
//		printf("ż��");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100; i++)
//	{
//		if (i % 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}