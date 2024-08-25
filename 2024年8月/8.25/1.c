#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int n, a, b, c, sum;
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		s1 += a;
//		s2 += b;
//		s3 += c;
//	}
//	sum = s1 + s2 + s3;
//	printf("%d %d %d %d", s1, s2, s3, sum);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i = 0;
	int sum = 0;
	for (i = m; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}