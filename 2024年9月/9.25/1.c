#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

long long gcd(long long x, long long y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}

int main()
{
	long long x, y, p, q;
	scanf("%lld%lld", &x, &y);
	int count = 0;
	long long i = 0;
	for (i = 1; i <= sqrt(x * y); i++)
	{
		if (x * y % i == 0 && gcd(i, x * y / i) == x)
			count++;
	}
	count *= 2;
	if (x == y)
		count--;
	printf("%d", count);
	return 0;
}