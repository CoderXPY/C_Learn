#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int min = 0;
//	if (a > b)
//		min = b;
//	else
//		min = a;
//	if (c < min)
//		min = c;
//	int x;
//	for (x = 2; x <= min; x++)
//	{
//		if (a % x == b % x && a % x == c % x)
//		{
//			printf("%d", x);
//			break;
//		}
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}