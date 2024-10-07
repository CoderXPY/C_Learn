#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int k, n;
	scanf("%d%d", &k, &n);
	int arr[1001] = { 0 };
	int l = 0;
	long long ans = 0;
	while (n)
	{
		arr[++l] = n % 2;
		n /= 2;
	}
	for (int i = l; i >= 1; i--)
	{
		ans += pow(k, i - 1) * arr[i];
	}
	printf("%lld", ans);
	return 0;
}