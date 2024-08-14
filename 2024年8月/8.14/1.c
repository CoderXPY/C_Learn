#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a1, a2, n;
//	scanf("%d %d %d", &a1, &a2, &n);
//	printf("%d", a1 + (a2 - a1) * (n - 1));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	long long a, b;
//	scanf("%lld %lld", &a, &b);
//	printf("%lld", a * b);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	int sum = 1;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		sum *= 2;
	}
	printf("%d", sum);
	return 0;
}