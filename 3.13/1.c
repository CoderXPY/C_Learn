#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//����Ϊ����
//	{
//	case 1://�˴�����Ϊ����
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	defalut:
//		printf("�������\n");//defalut�Ǵ���λ�ò��̶�������������
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//��whileѭ����break����������ֹѭ��
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//	//continue����������������ѭ��continue����Ĵ��룬���Ƿ������һ��ѭ��
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ����˴��������printf
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}//ctrl+z - getchar �Ͷ�ȡ����
	return 0;
}