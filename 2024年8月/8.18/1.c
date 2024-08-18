#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int l;
//	scanf("%d", &l);
//	double t1, t2;
//	t1 = 27 + 23 + l / 3.0;
//	t2 = l / 1.2;
//	if (t1 > t2)
//		printf("Walk");
//	if (t1 < t2)
//		printf("Bike");
//	if (t1 == t2)
//		printf("All");
//	return 0;
//}

#include<stdio.h>

int main()
{
	double x;
	scanf("%lf", &x);
	double y;
	if (x >= 0 && x < 5)
		y = -1 * x + 2.5;
	if (x >= 5 && x < 10)
		y = 2 - 1.5 * (x - 3) * (x - 3);
	if (x >= 10 && x < 20)
		y = x / 2 - 1.5;
	printf("%.3lf", y);
	return 0;
}