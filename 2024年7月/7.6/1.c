#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		arr[count] = a;
//		count++;
//		scanf("%d", &a);
//	}
//	int i = 0;
//	for (i = count - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		int j = 0;
		int count = 0;
		for (j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				count++;
		}
		printf("%d ", count);
	}
	return 0;
}