#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int l = 0;
	int r = 0;
	scanf("%d %d", &l, &r);
	int i = 0;
	int count = 0;
	for (i = l; i <= r; i++)
	{
		int j = i;
		while (j)
		{
			if (j % 10 == 2)
				count++;
			j /= 10;
		}
	}
	printf("%d", count);
	return 0;
}