#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int x, l, r;
//    while (scanf("%d %d %d", &x, &l, &r) != EOF)
//    {
//        if (x >= l && x <= r)
//            printf("true\n");
//        else
//            printf("false\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int y = 0;
//    while (scanf("%d", &y) != EOF)
//    {
//        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//            printf("yes\n");
//        else
//            printf("no\n");
//
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int m = a % 100;
//    if (m >= 3 && m <= 5)
//        printf("spring\n");
//    else if (m >= 6 && m <= 8)
//        printf("summer\n");
//    else if (m >= 9 && m <= 11)
//        printf("autumn\n");
//    else
//        printf("winter\n");
//
//    return 0;
//}

int main()
{
    float w, h;
    scanf("%f %f", &w, &h);
    float bmi = w / (h * h);
    if (bmi >= 18.5 && bmi <= 23.9)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}

int main()
{
    int a;
    int max = 0;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a);
        if (a > max)
            max = a;
    }
    printf("%d", max);
    return 0;
}