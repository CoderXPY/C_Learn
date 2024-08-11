#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 3-2* i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	double a, b, r;
//	scanf("%lf %lf", &a, &b);
//	int k = 0;
//	while (a- k*b >0)
//	{
//		k++;
//	}
//	k--;
//	r = a - k * b;
//	printf("%lf", r);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int r;
	double v;
	scanf("%d", &r);
	v = 4 * 3.14 * r * r * r / 3;
	printf("%.5lf", v);
	return 0;
}