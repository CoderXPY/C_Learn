#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max3(int a, int b, int c)
{
    int max = 0;
    if (a > b)
        max = a;
    else
        max = b;
    if (c > max)
        max = c;
    return max;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
    return 0;
}


int test(int a, int b)
{
    int count = 0;
    int i = 0;
    int j = 0;

    for (i = a; i <= b; i++)
    {
        j = i;
        int sum = 0;
        while (j)
        {
            sum += j % 10;
            j /= 10;
        }
        if (sum % 5 == 0)
            count++;
    }
    return count;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = test(a, b);
    printf("%d", ret);
    return 0;
}