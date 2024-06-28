#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int n = 0;
	int i = 0;
	int flag = 0;
	while(scanf("%d", &n) != EOF)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (i == N)
			{
				printf("\n");
				i = 0;
			}
			if (flag == 0)
				printf("0");
			else
				printf("1");
			i++;
		}
		if (flag == 0)
			flag = 1;
		else
			flag = 0;
	}
	return 0;
}