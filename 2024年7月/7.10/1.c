#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	for (i = 0; i <= 9; i++)
	{
		int count = 0;
		for (j = m; j <= n; j++)
		{
			int a = j;
			while (a)
			{
				if (a % 10 == i)
					count++;
				a /= 10;
			}
		}
		printf("%d ", count);
	}
	return 0;
}