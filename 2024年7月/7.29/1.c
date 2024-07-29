#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	if (a < b)
	{
		long long tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		long long tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		long long tmp = b;
		b = c;
		c = tmp;
	}
	long long i = 0;
	for (i = 2; i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			i--;
		}
	}
	printf("%lld/%lld", b, a);
	return 0;
}