#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);
	long long n, k;
	int i = 0;
	while(t--)
	{
		scanf("%lld%lld", &n, &k);
		if (n >= (k * k + k) / 2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}