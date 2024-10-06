#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int v[30], p[30], f[30030];

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &v[i], &p[i]);
	}
	for (i = 0; i < m; i++)
	{
		for (int j = n; j >= v[i]; j--)
		{
			f[j] = max(f[j], f[j - v[i]] + v[i] * p[i]);
		}
	}
	printf("%d", f[n]);
	return 0;
}