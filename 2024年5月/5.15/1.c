#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//    }
//    return 0;
//}
//
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//        printf("2 ");
//    if (a % 3 == 0)
//        printf("3 ");
//    if (a % 7 == 0)
//        printf("7");
//    if (a % 2 != 0 && a % 3 != 0 && a % 7 != 0)
//        printf("n");
//    return 0;
//}
//
//int main()
//{
//    int a = 0;
//    int i = 0;
//    int p = 0;
//    int n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &a);
//        if (a > 0)
//            p++;
//        if (a < 0)
//            n++;
//    }
//    printf("positive:%d\nnegative:%d", p, n);
//    return 0;
//}


int main()
{
    float p = 0;
    int m = 0;
    int d = 0;
    int c = 0;
    float pp = 0;
    scanf("%f %d %d %d ", &p, &m, &d, &c);
    if (m == 11 && d == 11)
    {
        if (c == 1)
            pp = 0.7 * p - 50;
        else
            pp = 0.7 * p;
    }
    if (m == 12 && d == 12)
    {
        if (c == 1)
            pp = 0.8 * p - 50;
        else
            pp = 0.8 * p;
    }
    if ((m != 11 && d != 11) && (m != 12 && d != 12) && c == 1)
        pp = p - 50;
    if (pp < 0)
        pp = 0;
    printf("%.2f", pp);
    return 0;
}

#include<math.h>

int main()
{
    float a = 0;
    char b = 0;
    int p = 0;
    scanf("%f %c", &a, &b);
    if (a <= 1)
    {
        if (b == 'y')
            p = 25;
        else
            p = 20;
    }
    else
    {
        if (b == 'y')
            p = 25 + ceil(a - 1);
        else
            p = 20 + ceil(a - 1);
    }
    printf("%d", p);
    return 0;
}