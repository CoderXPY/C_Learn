#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int isprime(int n)
{
	int i = 0;
	if (n == 1)
		return 0;
	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int n, k;
int arr[21] = { 0 };
long long ans;

void dfs(int m, int sum, int startx) {
	if (m == k) {
		if (isprime(sum))
			ans++;
		return;
	}
	for (int i = startx; i < n; i++)
		dfs(m + 1, sum + arr[i], i + 1);
	return;
}


int main()
{
	scanf("%d%d", &n, &k);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	dfs(0, 0, 0);
	printf("%lld", ans);
	return 0;
}