#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int l = 0;
	int m = 0;
	scanf("%d %d\n", &l, &m);
	int i = 0;
	int u = 0;
	int v = 0;
	int arr[10001] = { 0 };
	for (i = 0; i <= l; i++)
	{
		arr[i] = 1;
 	}
	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		int j = u;
		for (j = u; j <= v; j++)
		{
			arr[j] = 0;
		}
	}
	int sum = 0;
	for (i = 0; i <= l; i++)
	{
		if (arr[i] == 1)
			sum += 1;
	}
	printf("%d", sum);
	return 0;
}
