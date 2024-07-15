#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, x, y;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (x > y)
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	int min = b - a;
	int len1, len2;
	if (a > x)
		len1 = a - x;
	else
		len1 = x - a;
	if (b > y)
		len2 = b - y;
	else
		len2 = y - b;
	int len = len1 + len2;
	if (len < min)
		min = len;
	printf("%d", min);
	return 0;
}