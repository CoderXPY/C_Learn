#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "xpy";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
// 	return 0;
//}

//int Max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//void Swap(int* pa, int*pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	//此处通过取地址，实现了函数内外的联系
//	printf("交换后a = %d b = %d\n", a, b);
//	return 0;
//}

#include<math.h>

//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int binary_search(int arr[],int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if(k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//链式访问

//int main()
//{
//	int len = strlen("xpy");
//	printf("%d\n", len);
//	printf("%d\n", strlen("xpy"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "xpy";
//
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf返回的是屏幕打印字符的个数
//	return 0;


#include"Add.h"
#include"Sub.h"
 
int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);
	int d = Sub(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}