#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, m, k, x, y;
	int arr[101][101] = { 0 };
	scanf("%d %d %d", &n, &m, &k);
	int i, j, a;
	for (i = 1; i < m + 1; i++)
	{
		scanf("%d %d", &x, &y);
		arr[x - 2][y] = arr[x - 1][y - 1] =
		arr[x - 1][y] = arr[x - 1][y + 1]=
		arr[x][y - 2] = arr[x][y - 1] =
		arr[x][y] = arr[x][y + 1] =
		arr[x][y + 2] = arr[x + 1][y - 1] =
		arr[x+1][y] =arr[x + 1][y + 1] = 
			arr[x + 2][y] = 1;
	}
	for (i = m + 1; i < m + k + 1; i++)
	{
		scanf("%d %d", &x, &y);

		for (j = x - 2; j <= x + 2; j++)
		{
			for (a = y - 2; a <= y + 2; a++)
			{
				arr[j][a] = 1;
			}
		}
	}
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (arr[i][j] == 0)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}