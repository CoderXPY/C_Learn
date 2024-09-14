#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
long long a, b, n, m, f[23], ma[23][23];
void work(long long x, long long y) {
    ma[x][y] = 1;
    ma[x - 1][y - 2] = 1;
    ma[x - 2][y - 1] = 1;
    ma[x - 2][y + 1] = 1;
    ma[x - 1][y + 2] = 1;
    ma[x + 1][y - 2] = 1;
    ma[x + 2][y - 1] = 1;
    ma[x + 2][y + 1] = 1;
    ma[x + 1][y + 2] = 1;
}
int main() {
    scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
    a++;
    b++;
    n++;
    m++;
    work(a, b);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1)continue;
            if (ma[i][j] == 0)f[j] += f[j - 1];
        }
    printf("%lld", f[m]);
    return 0;
}