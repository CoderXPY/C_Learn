#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n,x,y;
	scanf("%d", &n);
	int arr[10005][4] = {0};
	int i, j;
	for (i = 1; i <= n; i++)
	{
		scanf("%d%d%d%d", &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
	}
	scanf("%d%d", &x, &y);
	int flag = -1;
	for (i = 1; i <= n; i++)
	{
		if ((x >= arr[i][1]) && (x <= arr[i][1] + arr[i][3]) &&
			(y >= arr[i][2]) && (y <= arr[i][2] + arr[i][4]))
			flag = i;
	}
	printf("%d", flag);
	return 0;
}