#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long n, m, a,b, i;
	scanf("%lld %lld", &n, &m);
	a = n / m;
	b = n % m;
	for (i = 0; i < m - b; i++)
	{
		printf("%d ", a);
	}
	for (i = 0; i < b; i++)
	{
		printf("%d ", a+1);
	}
	return 0;
}