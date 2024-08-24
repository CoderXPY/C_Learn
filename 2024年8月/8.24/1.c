#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n, num, sum;
//	double average;
//	scanf("%d", &n);
//	int i = 0;
//	sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	average = 1.0 * sum / n;
//	printf("%d %.5lf", sum, average);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n, s;
	scanf("%d", &n);
	int max = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s);
		if (s > max)
			max = s;
	}
	printf("%d", max);
	return 0;
}