#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d/%d\n%d/%d", &a, &b, &c, &d);
	int i = 0;
	int x = a * c;
	int y = b * d;
	int n = 0;
	if (x > y)
		n = x;
	else
		n = y;
	for (i = 2; i <= n; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			x /= i;
			y /= i;
			n /= i;
			i = 1;
		}
	}
	printf("%d %d", y, x);
	return 0;
}