#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, m, x, y, x1, y1, x2, y2, X, Y;
	int arr1[101][101] = { 0 };
	int arr2[101][101] = { 0 };
	scanf("%d %d %d %d", &n, &m, &x, &y);
	int i = 0;
	int a, b;
	for (i = 1; i <= x; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (a = x1; a <= x2; a++)
		{
			for (b = y1; b <= y2; b++)
			{
				arr1[a][b]++;
				arr2[a][b] = i;
			}
		}
	}
	for (i = 0; i < y; i++)
	{
		scanf("%d %d", &X, &Y);
		if (arr1[X][Y] != 0)
		{
			printf("Y %d %d\n", arr1[X][Y], arr2[X][Y]);
		}
		else
			printf("N\n");
	}
	return 0;
}