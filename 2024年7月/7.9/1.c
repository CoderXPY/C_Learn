#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int s1 = 0;
	int s2 = 0;
	int N = 0;
	int M = 0;
	int min = 0;
	if (n > m)
		min = m;
	else
		min = n;
	for (int i = 1; i <= min; i++)  
		s1 += (n - i + 1) * (m - i + 1);  
	for (int i = 1; i <= n; i++)
		N += i; 
	for (int i = 1; i <= m; i++)
		M += i; 
	s2 = N * M - s1;
	printf("%d %d", s1, s2);
	return 0;
}