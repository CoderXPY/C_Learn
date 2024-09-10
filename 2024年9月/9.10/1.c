#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	int arr[101] = { 0 };
	int m;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if(arr[i] == m)
			count++;
	}
	printf("%d", count);
	return 0;
}