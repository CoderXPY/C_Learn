#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    double f[50];
    int n, i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;  
    scanf("%d", &n);
    for (i = 3; i <= n; i++)
    f[i] = f[i - 1] + f[i - 2]; 
    printf("%0.2lf", f[n]);
	return 0;
}