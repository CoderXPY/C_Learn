#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void test3()
//{
//	printf("abcd");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= a; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("");
	}
	return 0;
}