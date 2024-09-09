#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, c, y;
	scanf("%d %d %d", &a, &b, &c);
	int count = 0;
	for (int x = 0; x <= c / a; x++)
	{
		y = (c - a * x) / b;
		if (a * x + b * y == c)
			count++;
	}
	printf("%d", count);
	return 0;
}