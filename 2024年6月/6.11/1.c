#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, i, j;
    char c;
    scanf("%d %c", &n, &c);
    x = sqrt((n + 1) / 2);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2 * (x - i) - 1; j++)
            printf("%c", c);
        printf("\n");
    }
    for (i = 2; i <= x; i++)
    {
        for (j = 0; j < x - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("%c", c);
        printf("\n");
    }
    printf("%d", n - 2 * x * x + 1);
    return 0;
}


int main()
{
    char n[1001];
    gets(n);
    int count[10] = { 0 };
    int j = 0;
    while (n[j] != '\0')
    {

        if (n[j] != 0)
        {
            count[n[j] - '0']++;
        }
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] != 0)
        {
            printf("%d:%d\n", i, count[i]);
        }
    }
    return 0;
}