#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double x, a, y, b;
	scanf("%lf %lf %lf %lf", &x, &a, &y, &b);
	printf("%.2lf", 1.0 * ((x * a - y * b) / (a - b)));
	return 0;
}