#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a, n;
//	scanf("%d %d", &a, &n);
//	int result = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		result *= a;
//	}
//	printf("%d", result);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int x, n;
//	scanf("%d %d", &x, &n);
//	double y = 1.0 * x;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		y *= 1.001;
//	}
//	printf("%.4lf", y);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n, a;
	scanf("%d", &n);
	int arr[31] = { 0 };
	arr[1] = arr[2] = 1;
	int i = 0;
	for (i = 3; i < 31; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		printf("%d\n", arr[a]);
	}
	return 0;
}