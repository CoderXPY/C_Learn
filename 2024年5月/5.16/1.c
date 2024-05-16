#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    float p = 0;
    float pp = 0;
    scanf("%f", &p);
    if (p >= 100)
        pp = 0.9 * p;
    if (p >= 500)
        pp = 0.8 * p;
    if (p >= 2000)
        pp = 0.7 * p;
    if (p >= 5000)
        pp = 0.6 * p;
    printf("%.1f", pp);
    return 0;
}

int main()
{
    int l = 0;
    scanf("%d", &l);
    if (l > ((l / 10) + 10))
        printf("v\n");
    else
        printf("w\n");
    return 0;
}

int main()
{
    int x, y, x1, y1;
    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
    if (x == x1 && y - y1 == 1)
        printf("d");
    if (x == x1 && y - y1 == -1)
        printf("u");
    if (x - x1 == 1 && y == y1)
        printf("l");
    if (x - x1 == -1 && y == y1)
        printf("r");
    return 0;
}

int main()
{
    int d = 0;
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
    return 0;
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        switch (n)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        }
    }
    return 0;
}