#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    char n = 0;
//    int a = 0;
//    int b = 0;
//    while (scanf("%c", &n) != EOF)
//    {
//        if (n == 'A')
//            a++;
//        if (n == 'B')
//            b++;
//    }
//    if (a > b)
//        printf("A\n");
//    else if (a < b)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}


int main()
{
    char arr[200] = { 0 };
    int n = 0;
    int m = 0;
    scanf("%d %d\n%s", &n, &m, arr);
    int l = 0;
    int r = 0;
    char c1 = 0;
    char c2 = 0;
    int i = 0;
    for(i = 0;i < m;i++)
    {
        scanf("%d %d %c %c", &l, &r, &c1, &c2);
        int j = 0;
        for (j = l; j <= r; j++)
        {
            if (arr[j - 1] == c1)
            {
                arr[j - 1] = c2;
            }
        }
    }
    printf("%s", arr);
    return 0;
}

int main()
{
    char arr[50] = { 0 };
    while (scanf("%s", arr) != EOF)
    {
        if (arr[0] >= 65 && arr[0] <= 90)
            printf("%c", arr[0]);
        else
            printf("%c", arr[0] - 32);
    }
    return 0;
}