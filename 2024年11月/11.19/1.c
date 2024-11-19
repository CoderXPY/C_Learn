#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

const int mod = 100003;
int n, k, a[1000000], ans = 0;
int main()
{
	scanf("%d%d", &n, &k);
	a[0] = a[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		if (i <= k)
		{
			a[i] = (a[i - 1] * 2) % mod;
		}
		else
		{
			a[i] = (a[i - 1] * 2 - a[i - k - 1]) % mod;
		}
	}
	ans = (a[n] + mod) % mod;
	printf("%d", ans);
	return 0;
}