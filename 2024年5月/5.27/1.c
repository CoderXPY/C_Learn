#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    float s = 0;
//    float sum = 0;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &s);
//            printf("%.1f ", s);
//            sum += s;
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}


int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int arr[5][5] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d", arr[x - 1][y - 1]);
    return 0;
}


int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int arr[10][10] = { 0 };
    int max = 0;
    int x = 0; int y = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d", x + 1, y + 1);
    return 0;
}

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                flag = 1;
        }
    }
    if (flag == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int s = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &s);
            if (s > 0)
                sum += s;
        }
    }
    printf("%d", sum);
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int arr[20][20] = { 0 };
    int count = 0;
    int p = 0;
    int q = n - 1;
    while (count < n* n)
    {
        for (i = p; i <= q; i++)
            arr[p][i] = ++count;
        for (i = p + 1; i <= q; i++)
            arr[i][q] = ++count;
        for (i = q - 1; i >= p; i--)
            arr[q][i] = ++count;
        for (i = q - 1; i > p; i--)
            arr[i][p] = ++count;
        p++;
        q--;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}