#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    double a = 0;
//    char b = 0;
//    double c = 0;
//    scanf("%lf %c %lf", &a, &b, &c);
//    if (b == '+' || b == '-' || b == '*' || b == '/')
//    {
//        if (b == '+')
//        {
//            printf("%.4lf+%.4lf=%.4lf\n", a, c, a + c);
//        }
//        if (b == '-')
//        {
//            printf("%.4lf-%.4lf=%.4lf\n", a, c, a - c);
//        }
//        if (b == '*')
//        {
//            printf("%.4lf*%.4lf=%.4lf\n", a, c, a * c);
//        }
//        if (b == '/')
//        {
//            if (c == 0.0)
//                printf("Wrong!Division by zero!");
//            else
//                printf("%.4lf/%.4lf=%.4lf\n", a, c, a / c);
//        }
//    }
//    else
//    {
//        printf("Invalid operation!\n");
//    }
//
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    while (n)
//    {
//        sum += n;
//        n--;
//    }
//    printf("%lld", sum);
//    return 0;
//}
//
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int a = 0;
//    int b = 0;
//    while (N)
//    {
//        if (N % 2 == 0)
//            b++;
//        else
//            a++;
//        N--;
//    }
//    printf("%d %d", a, b);
//    return 0;
//}
//
//int main()
//{
//
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        int flag = 0;
//        int j;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

int main()
{
    int i = 0;
    int j = 0;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}