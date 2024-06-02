#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Bian(int n)
{
    int sum = 0;
    int m = n;
    while (m)
    {
        sum += m % 10;
        m /= 10;
    }
    n = sum;
    if (n >= 10)
    {
        int ret = Bian(n);
        return ret;
    }
    else
        return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Bian(n);
    printf("%d", ret);
    return 0;
}


int Find(int l, int r)
{
    int count = 0;
    int i = 0;
    for (i = l; i <= r; i++)
    {
        int j = i;
        while (j)
        {
            if (j % 10 == 2)
                count++;
            j /= 10;
        }
    }
    return count;
}

int main()
{
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);
    int ret = Find(l, r);
    printf("%d", ret);
    return 0;
}


int main()
{
    int n = 0;
    int l = 0;
    scanf("%d", &n);
    int i = 0;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &l);
        if (l <= 60)
            sum += 0.1;
        else
            sum += 0.2;
    }
    printf("%.1f", sum);
    return 0;
}