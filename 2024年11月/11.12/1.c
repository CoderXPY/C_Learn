#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a[1001][1001], b[1001][1001];//���鶨���㣬1000�ᱬ
int main()
{
	int n, m, x, y;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d%d", &x, &y);
		b[x][y] = 1;//b�����ǲ������ߵ�
	}
	a[1][1] = 1;//�ʼa[1][1]
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			a[i][j] += a[i - 1][j] + a[i][j - 1];//��ֵ
			if (b[i][j] == 1) a[i][j] = 0;//�������ߵĸ�ֵ0
			a[i][j] = a[i][j] % 100003;//ȡ%
		}
	printf("%d", a[n][n]);//���
	return 0;
}