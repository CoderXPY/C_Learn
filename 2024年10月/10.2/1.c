#define  _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int max(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}

int main()
{
	int v, n;
	int f[20010] = { 0 };
	scanf("%d%d", &v, &n);
	int w[40] = { 0 };
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &w[i]);
	}
	for (i = 1; i <= n; i++)
	{
		for (int j = v; j >= w[i]; j--)
			f[j] = max(f[j], f[j - w[i]] + w[i]);
	}
	printf("%d", v - f[v]);
	return 0;
}