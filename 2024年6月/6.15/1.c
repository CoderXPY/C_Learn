#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int h = 0;
	scanf("%d", &h);
	h += 30;
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] <= h)
			count++;
	}
	printf("%d", count);
	return 0;
}