#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int a = 0;
	int b = 0;
	int left = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b);
		if (b < a)
			left = 1;
		if (b > a && left == 1)
		{
			count++;
			left = 0;
		}
		a = b;
	}
	printf("%d", count);
	return 0;
}