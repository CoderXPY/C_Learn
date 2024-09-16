#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, c;
	int arr[10] = { 0 };
	for (int i = 192; i <= 333; i++)
	{
		a = i;
		b = 2 * i;
		c = 3 * i;
		if (a / 100 == 0 || a / 10 % 10 == 0 || a % 10 == 0 ||
			b / 100 == 0 || b / 10 % 10 == 0 || b % 10 == 0 ||
			c / 100 == 0 || c / 10 % 10 == 0 || c % 10 == 0 )
			continue;
		arr[a / 100] = 1;
		arr[a / 10 % 10] = 1;
		arr[a % 10] = 1;
		arr[b / 100] = 1;
		arr[b / 10 % 10] = 1;
		arr[b % 10] = 1;
		arr[c / 100] = 1;
		arr[c / 10 % 10] = 1;
		arr[c % 10] = 1;
		int flag = 1;
		for (int j = 1; j <= 9; j++)
		{
			if (arr[j] == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 0)
		{
			for (int j = 1; j <= 9; j++)
			{
				arr[j] = 0;
			}
			continue;
		}
		printf("%d %d %d\n", a, b, c);
		for (int j = 1; j <= 9; j++)
		{
			arr[j] = 0;
		}
	}
	return 0;
}