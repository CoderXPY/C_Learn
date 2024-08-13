#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double abs(double a) { return a > 0 ? a : -a; }
int main()
{
	double x1, y1, x2, y2, x3, y3;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	printf("%.2lf\n", abs((x1 - x3) * (y1 - y3) - (x2 - x3) * (y2 - y3)) / 2);
	return 0;
}