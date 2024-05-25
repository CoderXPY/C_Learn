#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int narr[2000] = { 0 };
//    int marr[2000] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &narr[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &marr[i]);
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (narr[i] < marr[j])
//        {
//            printf("%d ", narr[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", marr[j]);
//            j++;
//        }
//    }
//    if (i == n && j < m)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", marr[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", narr[i]);
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int c1 = 0;
//    int c2 = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] - arr[i + 1] >= 0)
//            c1++;
//        else if (arr[i] - arr[i + 1] <= 0)
//            c2++;
//    }
//    if ((c2 == n - 1) || (c1 == n - 1))
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = 0;
    int flag = 0;
    scanf("%d", &a);
    for (i = 0; i < n; i++)
    {
        if (a <= arr[i])
        {
            int j = 0;
            for (j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = a;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        arr[n] = a;
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int d = 0;
    scanf("%d", &d);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == d)
        {
            int j = 0;
            for (j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            count++;
            i--;
        }
    }
    for (i = 0; i < n - count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}