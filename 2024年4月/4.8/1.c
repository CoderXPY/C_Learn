#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;
//	double* d[5];
//	double* (*pd)[5] = &d;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);//首元素地址
//	printf("%p\n", p2);//数组的地址
//
//	printf("%p\n", p1+1);//跳4个字节
//	printf("%p\n", p2+1);//跳过40个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}

void print1(int arr[3][4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int (*p)[4], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//print1(arr, 3, 4);
	print2(arr, 3, 4);
	return 0;
}