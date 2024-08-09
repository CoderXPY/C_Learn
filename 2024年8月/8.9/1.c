#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%c", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a != 0)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}


#include<stdio.h>

int main()
{
	int arr[7] = { 0 };
	int i = 0;
	int count = 0;
	for (i = 1; i <= 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= 5; i++)
	{
		if(i == 5)
			arr[i] += arr[0];
		count += arr[i] % 3;
		arr[i + 1] += (arr[i] - arr[i] % 3) / 3;
		arr[i - 1] += (arr[i] - arr[i] % 3) / 3;
		arr[i] = (arr[i] - arr[i] % 3) / 3;
	}
	arr[1] += arr[6];

	for (i = 1; i <= 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n%d", count);
	return 0;
}