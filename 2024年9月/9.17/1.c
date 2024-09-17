#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long s = 0;
//	long long num = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//		s += num;
//	}
//	printf("%lld", s);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int s[1005] = { 0 };
	int num[1005] = { 0 };
	s[0] = num[0] = 1;
	int i, j;
	for (i = 2; i <= n; i++)
	{
		for (j = 0; j < 100; j++)
		{
			num[j] *= i;
		}
		for (j = 0; j < 100; j++)
		{
			if (num[j] > 9)
			{
				num[j + 1] += num[j] / 10;
				num[j] %= 10;
			}
		}
		for (j = 0; j < 100; j++)
		{
			s[j] += num[j];
			if (s[j] > 9)
			{
				s[j + 1] += s[j] / 10;
				s[j] %= 10;
			}
		}
	}
	for (i = 100; i >= 0 && s[i] == 0; i--);
	for (j =i; j >= 0; j--)
	{
		printf("%d", s[j]);
	}
	return 0;
}