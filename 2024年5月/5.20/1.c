#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n = n / 10;
    }
    return 0;
}

void test(long long n)
{
    if (n > 5)
    {
        test(n / 6);
    }
    printf("%lld", n % 6);
}

int main()
{
    long long n = 0;
    scanf("%lld", &n);
    test(n);
    return 0;
}


int main()
{
    int k = 0;
    scanf("%d", &k);
    int i = 0;
    int sum = 0;
    int k1 = 1;
    for (i = 1; k1 <= k; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (k1 > k)
                break;
            sum += i;
            k1++;
        }
    }
    printf("%d", sum);
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        int j = 0;
        int tmp = i;
        while (tmp)
        {
            j = 10 * j + tmp % 10;
            tmp /= 10;
        }
        if (j == i)
            printf("%d\n", i);
    }
    return 0;
}