#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x = 0;
	int n = 0;
	scanf("%d %d", &x, &n);
	int i = 0;
	long long count = 0;
	for (i = 0; i < n; i++)
	{
		if (x >= 1 && x <= 5)
			count += 250;
		x++;
		if (x == 8)
			x = 1;
	}
	printf("%ld", count);
	return 0;
}