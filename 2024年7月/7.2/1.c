#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int count1 = 0;
	int count2 = 1;
	scanf("%d", &n);
	int i = 0;
	int arr[10000] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < n; i++)
	{
		if (arr[i] - arr[i - 1] == 1)
			count2++;
		else
		{
			if (count2 > count1)
				count1 = count2;
			count2 = 1;
		}
	}
	if (count2 > count1)
		count1 = count2;
	printf("%d", count1);
	return 0;
}