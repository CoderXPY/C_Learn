#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct S
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	free(ps);
//	ps = NULL;
//	//struct S s = { 0 };
//	//printf("%d", sizeof(s));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if ((i + j) == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int score;
//	int i = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f", (sum - max - min) / 5.0);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = 0;
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		day = days[m];
//		if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && (m == 2))
//			day += 1;
//		printf("%d\n", day);
//	}
//	return 0;
//}

int main()
{
	int arr[51] = { 0 };

	int n = 0;
	scanf("%d", &n);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int m = 0;
	scanf("%d", &m);

	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];
		}
		else
			break;
	}
	arr[i + 1] = m;


	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}