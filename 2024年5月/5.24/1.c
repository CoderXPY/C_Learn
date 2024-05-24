#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//
//int main()
//{
//    int n = 0;
//    int x = 0;
//    int count = 0;
//    scanf("%d %d", &n, &x);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == x)
//                count++;
//            m /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
//int main()
//{
//    int N = 0;
//    scanf("%d\n", &N);
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d ", &n);
//        sum += n;
//    }
//    printf("%d", sum);
//    return 0;
//}
//
//
//int main()
//{
//    int n = 0;
//    int s = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d\n", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &s);
//        if (s > max)
//            max = s;
//        if (s < min)
//            min = s;
//    }
//    printf("%d", max - min);
//    return 0;
//}

int main()
{
    int n = 0;
    int arr[50] = { 0 };
    scanf("%d\n", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int tmp = 0;
        int j = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[n - i]);
    }
    return 0;
}