#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int a = 7;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == a)
//			{
//				printf("找到了");
//			}
//		}
//	}
//	return 0;
//}

int foud_num(int arr[3][3], int c, int r, int a)
{
	int x = 0;
	int y = c - 1;
	while (x < r && y >= 0)
	{
		if (arr[x][y] < a)
		{
			y--;
		}
		else if (arr[x][y] > a)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int a = 7;
	int ret = foud_num(arr, 3, 3, a);
	if (ret = 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}