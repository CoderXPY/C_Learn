#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long x1, x2, y1, y2;
	scanf("%lld %lld\n%lld %lld", &x1, &x2, &y1, &y2);
	int a = x1;
	int b = x2;
	int c = y1;
	int d = y2;
	if (a * c != x1 * y1 ||
		a * d != x1 * y2 ||
		b * c != x2 * y1 ||
		b * d != x2 * y2)
		printf("long long int\n");
	else
		printf("int\n");
	return 0;
}