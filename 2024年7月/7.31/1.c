#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, num, price, min;
	min = 100000000;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d", &num, &price);
		int j = 1;
		while (n - j * num >0)
		{
			j++;
		}
		if (j * price < min)
			min = j * price;
	}
	printf("%d", min);
	return 0;
}