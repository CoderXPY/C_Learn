#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (j == n - 1)
//                    printf("*\n");
//                else
//                    printf("* ");
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 1 + i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i + 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i + 2; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (n - i); j++)
            {
                printf(" ");
            }
            for (j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (i + 1); j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}