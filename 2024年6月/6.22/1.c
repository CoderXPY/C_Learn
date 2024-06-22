#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	double a = 0;
	int t = 0;
	int i = 0;
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lf %d", &a, &t);
		int j = 0;
		for (j = 1; j <= t; j++)
		{
			int A = (int)(j * a);
			flag ^= A;
		}
	}
	printf("%d", flag);
	return 0;
}