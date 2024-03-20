#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "xpy";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int j = 0;
//	int ret = 1;
//	for (j = 1; j <= i; j++)
//	{
//		ret = ret * j;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int Fac(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * Fac(a - 1);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fac(i);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int Fib(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//	//这样写效率太低
//}

//不考虑栈溢出的时候才有用
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//	return 0;
//}

