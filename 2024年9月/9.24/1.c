#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
    int f[1001] = { 0 };
    for (int i = 1; i <= n; i++) { //1-n�ĵ���
        for (int j = 1; j <= i / 2; j++) {
            f[i] += f[j]; //ÿһλ���ӣ���������
        }
        f[i]++; //���ϱ���
    }
    printf("%d", f[n]);
	return 0;
}