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
//	//()强制类型转换
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
//	//第一个为0，所以后续表达式不计算
//	i = a++ || ++b || d++;
//	//b运算为真，后续表达式不计算
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	b = (a > 5 ? 1 : -1);
//	//三目操作符
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	//逗号表达式，从左往右计算，结果取最后一个结果
	printf("%d\n", d);
	return 0;
}