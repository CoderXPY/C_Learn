#define  _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (!(i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7))
			sum += i * i;
	}
	printf("%d", sum);
	return 0;
}