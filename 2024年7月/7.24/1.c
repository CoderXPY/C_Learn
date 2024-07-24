#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int flag = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	int len = 0;
	int N = n;
	while (N)
	{
		len++;
		N /= 10;
	}
	if (len % 2 == 1)
		flag = 0;
	else
		flag = 1;
	while (n)
	{
		if(flag == 0)
		{
			arr[n % 10] = 1;
			flag = 1;
		}
		else
		{
			arr[n % 10] = 2;
			flag = 0;
		}
		n /= 10;
	}
	flag = 0;
	for (int i = 1; i <= 2; i++)
	{
		if ((arr[1] == arr[2] && arr[2] == arr[3] && arr[1] == i) ||
			(arr[4] == arr[5] && arr[5] == arr[6] && arr[4] == i) ||
			(arr[7] == arr[8] && arr[8] == arr[9] && arr[7] == i) ||
			(arr[1] == arr[4] && arr[4] == arr[7] && arr[1] == i) ||
			(arr[2] == arr[5] && arr[5] == arr[8] && arr[2] == i) ||
			(arr[3] == arr[6] && arr[6] == arr[9] && arr[3] == i) ||
			(arr[1] == arr[5] && arr[5] == arr[9] && arr[1] == i) ||
			(arr[3] == arr[5] && arr[5] == arr[7] && arr[3] == i))
		{
			if (i == 1)
			{
				printf("xiaoa wins.\n");
				flag = 1;
				break;
			}
			else
			{
				printf("uim wins.\n");
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		printf("drew.\n");
	return 0;
}