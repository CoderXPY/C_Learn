#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//函数递归

//int main()
//{
//	printf("xpy");
//	main();
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//递归出现栈溢出
//int test(int a)
//{
//	if (a < 10000)
//	{
//		test(a + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}