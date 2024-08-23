#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n, age, sum;
//	scanf("%d", &n);
//	int i = 0;
//	sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &age);
//		sum += age;
//	}
//	double a = 1.0 * sum / n;
//	printf("%.2lf", a);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double a = 0;
	double sum = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &a);
		sum += a;
	}
	double b =  sum / n;
	printf("%.4lf", b);
	return 0;
}