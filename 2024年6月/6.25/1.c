#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

void write(int i)
{
	if (i == 4)
	{
		printf("4=2+2\n");
		return;
	}
	int j = 0;
	for (j = 3; j <= i - 2; j+=2)
	{
		if (is_prime(j)==1 && j + 2 == i)
		{
			printf("%d=2+%d\n", i, j);
			return;
		}
	}
	for (j = 3; j <= i - 3; j += 2)
	{
		if (is_prime(j)==1 && is_prime(i - j))
		{
			int min = 0;
			int max = 0;
			if (j > i - j)
			{
				min = i - j;
				max = j;
			}
			else
			{
				min = j;
				max = i - j;
			}
			printf("%d=%d+%d\n", i, min, max);
			return;
		}
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 4; i <= n; i += 2)
		write(i);
	return 0;
}