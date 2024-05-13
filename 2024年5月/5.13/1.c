#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n >= 140)
            printf("Genius\n");
    }
    return 0;
}

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a % 2 == 1)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}

int main()
{
    char n;
    while (scanf("%c", &n) != EOF)
    {
        getchar();
        if (n == 'a' || n == 'A' || n == 'e' || n == 'E' || n == 'O' ||
            n == 'o' || n == 'i' || n == 'I' || n == 'U' || n == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }
    return 0;
}