#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int ADD(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±��0��ʼ
//	char ch[5] = { 'a','b','c','d' };
//	//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
// 	return 0;
//}


//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);
//	//��������������̣�Ҫ�õ�С���������򱻳�����Ҫ��С��
//	float b = 7 / 2.0;
//	printf("%f\n", b);
//
//	int c = 7 % 2;
//	//%��ʾȡģ������
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	//���Ƶ��Ƕ���������Ĭ����32λ����������
//	//a=2=00000000000000000000000000000010��
// ����һλ���00000000000000000000000000000100
//	//��b=4�������Ʊ�����Ƽ�С
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	////a = a + 1;
//	//a += 1;
//
//	//a = a - 1;
//	//a -= 1;
//
//	a = a & 2;
//	a &= 2;
//
//
//	printf("%d", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//
//	//!���٣��ٱ��棻
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	//sizeof�ǲ����������Ǻ���
//	//��������ֽ���
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~��ʾ�����ư�λȡ����������1���0,0���1
//	//a=00000000000000000000000000000000
//	//b=11111111111111111111111111111111(����)
//	//�������ڴ��д洢���ǲ��룬������ԭ�룬���룬������ͬ
//	//�����ķ�����ԭ�����һλ������ȡ���������Ƿ����һ
//
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = ++a;
//	//��++����ʹ��
//	int c = a++;
//	//��ʹ�ã���++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}



//int main()
//{
//	int a = 3.14;
//	int b = (int)3.14;
//	//()ǿ������ת��
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 1;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	max = a > b ? a : b;
//	//��Ŀ������
//
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a = b + 1, b = c - 4, c = a + b);
//	//���ű��ʽ�����Ҽ��㣬��������ұߵĽ��
//	printf("%d\n", d);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);
//	//�˴�[]Ϊ�±����ò�����
//	//���������()�Ǻ������ò�����
//	return 0;
//}

void test()
{
	static int a = 1;
	//static�����˾ֲ��������ı�������������
	// static����ȫ�ֱ���ʱ��ֻ���ڱ��ļ���.c����ʹ�� ����֮�������ļ���Ͳ�������
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}