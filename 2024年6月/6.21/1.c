#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	int arrc[1000] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
				arrc[i - 1] = arr[i] - arr[i - 1];
			else
				arrc[i - 1] = arr[i - 1] - arr[i];
		}
	}
	int flag = 0;
	for (i = 1; i < n; i++)
	{
		flag = 0;
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			if (arrc[j] == i)
				flag = 1;
		}
		if (flag == 0)
			break;
	}
	if (flag == 0)
		printf("Not jolly\n");
	else
		printf("Jolly");
	return 0;
}