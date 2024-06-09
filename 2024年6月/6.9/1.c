#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long long Ackmann(long long n, long long m)
{
    if (n == 0)
        return m + 1;
    if (n > 0 && m == 0)
        return Ackmann(n - 1, 1);
    if (n > 0 && m > 0)
        return Ackmann(n - 1, Ackmann(n, m - 1));
    return 0;
}

int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    long long ret = Ackmann(m, n);
    printf("%lld", ret);
    return 0;
}


int digit(int x, int i)
{
    if (i > 1)
        return 10 * digit(x / 10, i - 1) + x % 10;
    else
        return x % 10;
}

int main()
{
    int x = 0;
    int i = 0;
    scanf("%d %d", &x, &i);
    int ret = digit(x, i);
    printf("%d", ret);
    return 0;
}



int h(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2 * n;
    if (n > 1)
        return 2 * x * h(x, n - 1) - 2 * (n - 1) * h(x, n - 2);
    else
        return 0;
}

int main()
{
    int n = 0;
    int x = 0;
    scanf("%d %d", &n, &x);
    printf("%d", h(x, n));
    return 0;
}


void reverse(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    reverse(n);
    return 0;
}