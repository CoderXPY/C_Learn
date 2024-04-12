#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int* p = arr;
//	print(p, sz);
//	return 0;
//}


//void test(int** ppa)
//{
//	**ppa = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	printf("%d\n", a);
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pf)(int, int) = &Add;
//	//pf是函数指针变量
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	printf("%p\n", pf);
//	return 0;
//}

//void test(char* atr)
//{
//
//}
//
//int main()
//{
//	void(*pt)(char*) = &test;
//	return 0;
//}

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int (*pf)(int, int) = &Add;
	//int (*pf)(int, int) = Add;
	//int ret = (*pf)(2, 4);
	//int ret = Add(2, 4);	
	int ret = pf(2, 4);
	printf("%d\n", ret);
	return 0;
}