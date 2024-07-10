#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 1;
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	int max = 0;
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d", &b);
		if (b > a)
			count++;
		else
		{
			if (count > max)
				max = count;
			count = 1;
		}
		a = b;
	}
	if (count > max)
		max = count;
	printf("%d", max);
	return 0;
}