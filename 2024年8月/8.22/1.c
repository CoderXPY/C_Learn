#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c, d, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = (-1 * b + sqrt(d)) / (2 * a);
		x2 = (-1 * b - sqrt(d)) / (2 * a);
		if (x1 > x2)
		{
			double tmp = x1;
			x1 = x2;
			x2 = tmp;
		}
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	if (d == 0)
	{
		x1 = (-1 * b + sqrt(d)) / (2 * a);
		printf("x1=x2=%.5lf", x1);
	}
	if (d < 0)
	{
		printf("No answer!");
	}
	return 0;
}