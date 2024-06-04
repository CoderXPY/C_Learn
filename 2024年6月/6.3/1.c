#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//    int l = 0;
//    int r = 0;
//    scanf("%d %d", &l, &r);
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    for (i = l; i <= r; i++)
//    {
//        int flag = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                flag = 1;
//        }
//        if (flag == 0)
//            sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//
//int num(int a, int b)
//{
//    if (a >= b)
//        return a - b;
//    else
//        return b - a;
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int a[20] = { 0 };
//    int b[20] = { 0 };
//    scanf("%d %d", &n, &m);
//    int suma = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &a[i]);
//        suma += a[i];
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d ", &b[i]);
//    }
//    int j = 0;
//    int min = suma;
//    int sumb = 0;
//    int k = 0;
//    int l = 0;
//    for (i = 0; i < m; i++)
//    {
//        sumb = b[i];
//        for (j = i + 1; j <= m; j++)
//        {
//            if (num(suma, sumb) < min)
//            {
//                min = num(suma, sumb);
//                k = i;
//                l = j;
//            }
//            sumb += b[j];
//        }
//    }
//    for (i = k; i < l; i++)
//    {
//        printf("%d ", b[i]);
//    }
//
//    return 0;
//}

#include<math.h>

int su(long long t)
{
    long long a;
    int b = 0;
    if (t % 2 == 0)
    {
        return 0;
    }
    long double c = sqrt(t);
    for (a = 3; a < c; a += 2)
    {
        if ((t % a) == 0)
        {
            b++;
            break;
        }
    }
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    long long t = 0;
    scanf("%lld", &t);
    int arr[20] = { 0 };
    int i = 0;
    int sz = 0;
    long long a = t;
    while (a)
    {
        sz++;
        a /= 10;
    }
    for (i = sz - 1; i >= 0; i--)
    {
        if (i == sz - 1)
            arr[i] = t % 10;
        else
            arr[i] = arr[2 * sz - 2 - i] = t % 10;
        t /= 10;
    }
    for (i = 0; i < 2 * sz - 1; i++)
    {
        t += arr[i];
        if (i < 2 * sz - 2)
            t *= 10;
    }
    int flag = su(t);
    if (flag == 1)
        printf("prime\n");
    else
        printf("noprime\n");
    return 0;
}