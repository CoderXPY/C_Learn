#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, num = 0, count = 0;
	int arr[101] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		num += arr[i];
	}
	num /= n;
	for (i = 0; i < n; i++)
	{
		if (arr[i]-num)
		{
			arr[i + 1] += arr[i]-num;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}