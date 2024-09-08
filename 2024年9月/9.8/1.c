#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int num = 1;
	int i = 0;
	for (i = 1; i <= n;)
	{
		num++;
		int flag = 0;
		int j = 0;
		for (j = 2; j <= sqrt(num); j++)
		{
			if (num % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			i++;
	}
	printf("%d", num);
	return 0;
}