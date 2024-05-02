#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10 , sizeof(int));
//	if (p == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	int* pr = (int*)realloc(p, 20 * sizeof(int));
//	if (pr != NULL)
//	{
//		p = pr;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)realloc(NULL, 10 * sizeof(int));
	if (p == NULL)
		return 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}

int main()
{
	int X, N;
	scanf("%d %d", &X, &N);
	printf("%d\n", (X + N - 1) % 7 + 1);
	return 0;
}
int main()
{
	int s;
	scanf("%d", &s);
	printf("%d %d %d", s / 3600, (s % 3600) / 60, s % 60);
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", 1 << n);
	return 0;
}

int main()
{
	int age;
	scanf("%d", &age);
	printf("%d0000\n", age * 3156);
	return 0;
}