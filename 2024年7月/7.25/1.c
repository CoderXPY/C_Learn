#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{
	int s, a, b,count;
	scanf("%d", &s);
	a = s + 1;
	while (a)
	{
		b = 0;
		count = 0;
		int i = 0;
		for (i = 1; i < a; i++)
		{
			if (a % i == 0)
				b += i;
		}
		for (i = 1; i < b; i++)
		{
			if (b % i == 0)
				count += i;
		}
		if (a != b && count == a)
		{
			printf("%d %d", a, b);
			break;
		}
		a++;
	}
	return 0;
}