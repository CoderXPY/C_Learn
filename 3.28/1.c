#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	//()ǿ������ת��
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 4;
//	if (a == b)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	if (a || b)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	//i = a++ && ++b && d++;
//	//��һ��Ϊ0�����Ժ������ʽ������
//	i = a++ || ++b || d++;
//	//b����Ϊ�棬�������ʽ������
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	b = (a > 5 ? 1 : -1);
//	//��Ŀ������
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	//���ű��ʽ���������Ҽ��㣬���ȡ���һ�����
	printf("%d\n", d);
	return 0;
}