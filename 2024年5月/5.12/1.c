#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int r = 0;
//    scanf("%d", &r);
//    float s = 3.14 * r * r;
//    printf("%.2f\n", s);
//    return 0;
//}
//
//int main()
//{
//    float r1, r2;
//    scanf("%f %f", &r1, &r2);
//    printf("%.1f", 1.0 / (1 / r1 + 1 / r2));
//    return 0;
//}
//
//#define pie 3.14
//
//int main()
//{
//    int h, r;
//    scanf("%d %d", &h, &r);
//    float a = 10000 / (pie * h * r * r);
//    if (10000 / (pie * h * r * r) == (int)a)
//    {
//        printf("%d", (int)(10000 / (pie * h * r * r)));
//    }
//    else
//    {
//        printf("%d", (int)(10000 / (pie * h * r * r)) + 1);
//    }
//    return 0;
//}
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", b + (b - a));
//    return 0;
//}
//
//
//#define pie 3.14
//int main()
//{
//    int r;
//    scanf("%d", &r);
//    printf("%.2f", 4 * pie * r * r * r / 3);
//    return 0;
//}
//
//int main()
//{
//    int k, h, m;
//    while (scanf("%d:%d %d", &h, &m, &k) != EOF)
//    {
//        printf("%02d:%02d", (((k + m) / 60) + h) % 24, (k + m) % 60);
//    }
//    return 0;
//}
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d", (n / 12) * 4 + 2);
//    }
//
//    return 0;
//}

int main()
{
    int m, n;
    int min, max;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m > n)
        {
            int tmp = m;
            m = n;
            n = tmp;
        }
        int i = 0;
        for (i = n; i <= m * n; i++)
        {
            if ((i%m) == 0 && (i%n) == 0)
            {
                min = i;
                break;
            }
        }
        max = m * n / min;
        printf("%d", min + max);

    }
    return 0;
}

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    //求最大公约数
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    //先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
    long long a = n;
    long long b = m;

    //辗转相除法
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;
    //最小公倍数=n*m/max
    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}

int bian(int a)
{
    int b = a % 10;
    int c = b % 2;
    a /= 10;
    if (a)
    {
        return 10 * bian(a) + c;
    }
    return c;
}

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        int d = bian(a);
        printf("%d", d);
    }

    return 0;
}

int main()
{
    int arr[4];
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%.1f", 0.2 * arr[0] + 0.1 * arr[1] + 0.2 * arr[2] + 0.5 * arr[3]);
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", (a + b - c) * d);
    return 0;
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d\n%d %d", &x1, &y1, &x2, &y2);
    printf("%d", (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", ((a % 100) + (b % 100)) % 100);
    return 0;
}