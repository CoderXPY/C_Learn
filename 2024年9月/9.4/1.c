#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double e = 1.0;
//	int i = 0;
//	long long num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//		e += 1.0 / num;
//	}
//	printf("%.10lf", e);
//	return 0;
//}

#include<stdio.h>

int main()
{
	float x;
	int n;
	scanf("%f %d", &x, &n);
	double s = 1;
	int i = 0;
	double num = 1;
	for (i = 1; i <= n; i++)
	{
		num *= x;
		s += num;
	}
	printf("%.2lf", s);
	return 0;
}