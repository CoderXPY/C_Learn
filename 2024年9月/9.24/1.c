#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
    int f[1001] = { 0 };
    for (int i = 1; i <= n; i++) { //1-n的递推
        for (int j = 1; j <= i / 2; j++) {
            f[i] += f[j]; //每一位叠加，递推走起
        }
        f[i]++; //加上本身
    }
    printf("%d", f[n]);
	return 0;
}