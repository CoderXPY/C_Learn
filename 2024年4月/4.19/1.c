#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//    int arr[3] = { 0 };
//    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//    printf("%d", arr[1]);
//    return 0;
//}

int main()
{
    char a = 0;
    scanf("%c", &a);
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 3; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    char a = 0;
    scanf("%c", &a);
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2 - i; j++)
        {

            printf(" ");
        }
        for (j = 0; j <= 2 * i; j++)
        {

            printf("%c", a);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < i + 1; j++)
        {

            printf(" ");
        }
        for (j = 0; j < 3 - 2 * i; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}