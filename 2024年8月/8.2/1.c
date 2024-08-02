#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, x, i;
	int count = 0;
	scanf("%d %d", &n, &x);
	for (i = 1; i <= n; i++)
	{
		int j = i;
		while (j)
		{
			if (j % 10 == x)
				count++;
			j /= 10;
		}
	}
	printf("%d", count);
	return 0;
}