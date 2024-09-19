#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, n, m, x, b;
	scanf("%d%d%d%d", &a, &n, &m, &x);
	int f[25] = { 0,1 };
	for (int i = 2; i < n; i++)
		f[i] = f[i - 1] + f[i - 2];
	b = (m - f[n - 3] * a - a) / (f[n - 2] - 1);
	if (x == 1)
		printf("%d", a);
	else 
		printf("%d", (f[x - 2] + 1) * a + (f[x - 1] - 1) * b);
	return 0;
}