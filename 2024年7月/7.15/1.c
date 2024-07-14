#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long x, n;
	scanf("%ld %ld", &x, &n);
	long long i = 0;
	long long num = 1;
	for (i = 0; i < n; i++)
	{
		num = num * x + num;
	}
	printf("%ld", num);
	return 0;
}