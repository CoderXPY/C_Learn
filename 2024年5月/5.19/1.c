#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        if (n % 2 == 0)
//            sum -= n;
//        else
//            sum += n;
//        n--;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double sum = 0.0;
//    while (n)
//    {
//        sum += 1.0 / n;
//        n--;
//    }
//    printf("%.6lf", sum);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float sum = 0.0;
//    int s = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//            s += 1 - 2 * i;
//        else
//            s += 2 * i - 1;
//        sum += 1.0 / s;
//    }
//    printf("%.3f", sum);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int s = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        s += i + 1;
//        sum += s;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    while (n)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    while (n - 1)
//    {
//        if (n % 2 == 0)
//            n = n / 2;
//        else
//            n = 3 * n + 1;
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 2020; i++)
//    {
//        if (i % 10 == 9)
//        {
//            count++;
//        }
//        else if ((i / 10) % 10 == 9)
//        {
//            count++;
//        }
//        else if ((i / 100) % 10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    int count = 0;
//    int c, m, e;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("\n%d %d %d", &c, &m, &e);
//        if ((c + m + e) / 3 < 60)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        int i = 0;
//        int count = 0;
//        for (i = m; i <= n; i++)
//        {
//            int a = i / 100;
//            int b = (i / 10) % 10;
//            int c = i % 10;
//
//            if (i == a * a * a + b * b * b + c * c * c)
//            {
//                printf("%d ", i);
//                count++;
//            }
//        }
//        if (count == 0)
//            printf("no\n");
//        else
//            printf("\n");
//
//    }
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        if (((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000)
//            + (i / 100) * (i % 100) + (i / 10) * (i % 10)) == i)
//            printf("%d ", i);
//    }
//    return 0;
//}


int main()
{
    int s = 0;
    int i = 0;
    float sum = 0;
    int max = 0;
    int min = 100;
    int count = 0;
    while (scanf("%d ", &s) != EOF)
    {
        sum += s;
        if (s > max)
            max = s;
        if (s < min)
            min = s;
        count++;
        if (count == 7)
        {
            sum = (sum - max - min) / 5;
            printf("%.2f\n", sum);
            count = 0;
            max = 0;
            min = 100;
            sum = 0;
        }
    }
    return 0;
}