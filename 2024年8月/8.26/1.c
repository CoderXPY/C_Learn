#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i = 0;
	int sum = 0;
	for (i = m; i <= n; i++)
	{
		if (i % 17 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;
}