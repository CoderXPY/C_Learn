#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	if (flag)
//	{
//		printf("haha\n");
//	}
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//sizeofΪ�����������ԣ�������ʡ��
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	//sizeof�������еĲ���������
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	//~��ʾ��λȡ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	//��ʹ�ã���Ӽ�
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int c = ++a;
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", a--);
	printf("%d\n", a);
	return 0;
}