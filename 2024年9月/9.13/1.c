#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n,age;
//	scanf("%d", &n);
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double d = 0.0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &age);
//		if (age > 0 && age <= 18)
//			a++;
//		if (age >= 19 && age <= 35)
//			b++;
//		if (age >= 36 && age <= 60)
//			c++;
//		if (age >= 61)
//			d++;
//	}
//	printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%", 100 * a / n, 100 * b / n, 100 * c / n, 100 * d / n);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1001] = { 0 };
//	int brr[1001] = { 0 };
//	long long sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &brr[i]);
//		sum += arr[i] * brr[i];
//	}
//	printf("%lld", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[5001];
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				arr[j] = !arr[j];
//			}
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n, x;
	scanf("%d", &n);
	int arr[10000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			printf("%d", i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("-1");
	return 0;
}