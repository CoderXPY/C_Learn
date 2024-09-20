#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	while (n > i)
	{
		n -= i;
		i++;
	}
	if (i % 2 == 0)
		printf("%d/%d", n, (i + 1 - n));
	else
		printf("%d/%d", i + 1 - n, n);
	return 0;
}