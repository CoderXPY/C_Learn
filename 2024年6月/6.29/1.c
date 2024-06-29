#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	char arr[200][201];
	scanf("%s", arr[0]);
	int N = strlen(arr[0]);
	int count1 = 0;
	int count0 = 0;
	int flag = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i < N; i++)
	{
		scanf("%s", arr[i]);
	}
	printf("%d ", N);
	for (i = 0; i < N; i++)
	{
		for(j = 0;j < N;j++)
		{
			if (arr[i][j] == '0')
			{
				if (flag == 1)
				{
					printf("%d ", count1);
					count1 = 0;
					flag = 0;
				}
				count0++;
			}
			else
			{
				if (flag == 0)
				{
					printf("%d ", count0);
					count0 = 0;
					flag = 1;
				}
				count1++;
			}
		}
	}
	if (count1 != 0)
		printf("%d ", count1);
	else
		printf("%d ", count0);
	return 0;
}