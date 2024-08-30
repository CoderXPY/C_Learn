#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int m, n, num;
//	scanf("%d\n%d", &m, &n);
//	int i = 0;
//	int s = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		m -= num;
//		if (m < 0)
//		{
//			s++;
//			m += num;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n, num;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		int r = num%10 - (num/10)%10 - (num/100)%10-num/1000;
//		if (r > 0)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr1[31] = { 0 };
	int arr2[31] = { 0 };
	arr1[1] = 2;
	arr2[1] = 1;
	int i = 0;
	double sum = 0;
	for (i = 2; i <= n; i++)
	{
		arr1[i] = arr1[i - 1] + arr2[i - 1];
		arr2[i] = arr1[i - 1];
		sum += 1.0 * arr1[i] / arr2[i];
	}
	sum += 2;
	printf("%.4lf", sum);
	return 0;
}