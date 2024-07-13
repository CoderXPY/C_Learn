#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int h1, m1, s1, h2, m2, s2, t;
	long long s;
	scanf("%d:%d:%d\n%d:%d:%d\n%d", 
		&h1, &m1, &s1, &h2, &m2, &s2, &t);
	s = s2 + m2 * 60 + h2 * 3600 - s1 - m1 * 60 - h1 * 3600;
	long long sum = s * t;
	printf("%ld", sum);
	return 0;
}