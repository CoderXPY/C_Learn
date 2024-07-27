#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long n = 0;
	scanf("%lld", &n);
	long long i = 0;
	for (i = 1; i * i <= n; i++)
	{
		printf("%lld ", i * i);
	}
	return 0;
}