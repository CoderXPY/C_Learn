#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, arr[101];
	scanf("%d", &n);
	int i = 0;
	//随机数取入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//随机数排序
	for (i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(arr[i]>arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	//随机数去重
	for (i = 1; i < n; i++)
	{
		if (arr[i] == arr[i-1])
		{
			for (int j = i + 1; j < n; j++)
			{
				arr[j - 1] = arr[j];
			}
			n--;
			i--;
		}
	}
	//随机数输出
	printf("%d\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}