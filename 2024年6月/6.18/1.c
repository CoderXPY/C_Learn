#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	int m = 0;
	int c = 0;
	int s = 0;
	int i = 0;
	int flag = 0;
	for (i = 1; i < 13; i++)
	{
		scanf("%d", &c);
		m += 300 - c;
		if (m < 0)
		{
			printf("-%d", i);
			return 0;
		}
		else
		{
			s += m / 100;
			m %= 100;
		}
	}
	printf("%d", 120 * s + m);
	return 0;
}