#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	bool arr[100000000];
	arr[0] = 1;
	scanf("%d", &n);
	int i = 0;
	int max = 0;
	int a;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (!arr[a])
			count++;
		arr[a] = 1;
	}
	int sum = 10 * max + n + 5 * count;
	printf("%d", sum);
	return 0;
}