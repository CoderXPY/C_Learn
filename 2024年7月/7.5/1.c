#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	e = (d + 60 * c - b - 60 * a) / 60;
//	f = (d + 60 * c - b - 60 * a) % 60;
//	printf("%d %d", e, f);
//	return 0;
//}

#include<stdio.h>

int main()
{
	double s, x;
	scanf("%lf %lf", &s, &x);
	double i = 7.0;
	double count = 0.0;
	while (count < (s - x))
	{
		count += i;
		i *= 0.98;
	}
	count += i;
	if (count > s + x)
		printf("n\n");
	else
		printf("y\n");
	return 0;
}