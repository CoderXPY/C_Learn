#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//    int a = 0xABCDEF;
//    printf("%15d", a);
//    return 0;
//}

int main()
{
    int a = 1234;
    printf("%#o %#X", a, a);
    return 0;
}

int main()
{
    char ch;
    int a;
    float b;
    scanf("%c %d %f", &ch, &a, &b);
    printf("%c %d %.6f", ch, a, b);
    return 0;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d       %d       %d", a, b, c);
    return 0;
}

int main()
{
    int a, b;
    scanf("%x %o", &a, &b);
    printf("%d", a + b);
    return 0;
}