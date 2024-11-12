#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a[1001][1001], b[1001][1001];//数组定义大点，1000会爆
int main()
{
	int n, m, x, y;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d%d", &x, &y);
		b[x][y] = 1;//b数组标记不可以走的
	}
	a[1][1] = 1;//最开始a[1][1]
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			a[i][j] += a[i - 1][j] + a[i][j - 1];//赋值
			if (b[i][j] == 1) a[i][j] = 0;//不可以走的赋值0
			a[i][j] = a[i][j] % 100003;//取%
		}
	printf("%d", a[n][n]);//输出
	return 0;
}