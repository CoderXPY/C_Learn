#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>

int main()
{
    int n = 0;
    int a = 0;
    int max = 0;
    int x = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        x = sqrt(a);
        if (a != pow(x, 2))
            if (a > max)
                max = a;
    }
    printf("%d", max);
    return 0;
}


int main()
{
    long long t, n, i;
    scanf("%lld", &t);
    long long sum = 0;
    long long num = 0;
    while (t--)
    {
        sum = 0;
        num = 0;
        scanf("%lld", &n);
        while (n)
        {
            if (n & 1)
            {
                sum++;
            }
            n = n >> 1;
        }
        for (i = 0; i < sum; i++)
        {
            num = num * 2 + 1;
        }
        printf("%lld %lld\n", sum, num);
    }
}
