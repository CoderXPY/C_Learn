#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	int arr[3000] = { 0 };
	int sum = 0;
	int min = 300000;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n-m+1; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum += arr[i + j];
		}
		if (sum < min)
			min = sum;
		sum = 0;
	}
	printf("%d", min);
	return 0;
}