#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int t1 = 0;
	int t2 = 0;
	int t = 0;
	int i = 0;
	int a = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &t1, &t2);
		t += t1 + t2 - 8;
		a += t;
	}
	printf("%d", a);
	return 0;
}