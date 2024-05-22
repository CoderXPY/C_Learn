#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*\n");
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
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
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
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if ((i == j) || ((i + j) == (n - 1)))
                    printf("*");
                else
                    printf(" ");
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
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if ((i == 0) || (j == 0) || (i == (n - 1)) || (j == (n - 1)))
                    printf("* ");
                else
                    printf("  ");
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
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if ((i == j) || (j == 0) || (i == (n - 1)))
                    printf("* ");
                else
                    printf("  ");
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
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i + 1; j++)
            {
                printf("%d ", j + 1);
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
        int d = 3 * n;
        for (i = 0; i < n; i++)
        {
            int k = 0;
            for (k = 0; k < d - 1; k++)
            {
                printf(" ");
            }
            for (k = 0; k < i + 1; k++)
            {
                printf("*     ");
            }
            printf("\n");
            for (k = 0; k < d - 2; k++)
            {
                printf(" ");
            }
            for (k = 0; k < i + 1; k++)
            {
                printf("* *   ");
            }
            printf("\n");
            for (k = 0; k < d - 3; k++)
            {
                printf(" ");
            }
            for (k = 0; k < i + 1; k++)
            {
                printf("* * * ");
            }
            printf("\n");
            d -= 3;

        }
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < 3 * n - 1; j++)
                printf(" ");
            printf("*\n");
        }
    }
    return 0;
}


