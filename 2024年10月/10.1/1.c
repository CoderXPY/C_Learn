#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int main()
{
	int t, m;
	scanf("%d%d", &t, &m);
	int w[105] = { 0 };
	int val[105] = { 0 };
	int dp[1005] = { 0 };
	int i = 0;
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &w[i], &val[i]);
	}
	for (i = 1; i <= m; i++)
	{
		for (int j = t; j >= 0; j--)
		{
			if (j >= w[i])
			{
				dp[j] = max(dp[j - w[i]] + val[i], dp[j]);
			}
		}
	}
	printf("%d", dp[t]);
	return 0;
}

