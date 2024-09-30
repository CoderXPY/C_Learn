#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int f[30] = { 0 };
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			f[i] += f[j] * f[i - j - 1];
		}
	}
	printf("%d", f[n]);
	return 0;
}