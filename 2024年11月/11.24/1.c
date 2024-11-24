#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
int a[100], w;//a存储余数，w计算数位 
int b[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//暴力的转换 
bool change(int n, int k) {//除k取余法 
    int flag = 1;
    while (n != 0) {
        a[++w] = n % k;
        n /= k;
    }
    for (int u = 1; u <= w / 2 + 1; u++)//检验回文 
        if (a[u] != a[w - u + 1]) {
            flag = 0; break;
        }
    return flag;
}
int main() {
    int i, j, k, m, n;
    scanf("%d", &n);
    for (i = 1; i <= 300; i++) {
        j = i * i; w = 0; //w要随时清空，数位会时刻变化 
        if (change(j, n) == 1) {
            w = 0; change(i, n);
            for (int u = w; u >= 1; u--) {        //注意u要从 w枚举到 1，除k取余法要倒着数 
                if (a[u] < 10)printf("%d", a[u]);
                else printf("%c", b[a[u] - 10]);
            }
            printf(" ");
            //输出原数
            w = 0; change(j, n);
            for (int u = 1; u <= w; u++) {        //回文数从1枚举到w输出都无所谓 
                if (a[u] < 10)printf("%d", a[u]);
                else printf("%c", b[a[u] - 10]);
            }
            printf("\n");
        }
    }
    return 0;
}