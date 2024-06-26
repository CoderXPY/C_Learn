#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	printf("%d", m);
	return 0;
}