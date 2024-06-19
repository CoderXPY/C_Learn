#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{
	long long n = 0;
	long long k = 0;
	long long sum = 0;
	while (scanf("%lld %lld", &n, &k) != EOF)
	{
		sum = n;
		long long h = n/k;
		long long l = n - h*k;
		while (h)
		{
			sum += h;
			l += h - (h / k)*k;
			h /= k;
			if (l >= k)
			{
				h++;
				l -= k;
			}
		}
	}
	printf("%lld", sum);
	return 0;
}