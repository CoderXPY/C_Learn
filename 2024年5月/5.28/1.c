#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int k = 0;
    int j = 0;
    int i = 0;
    int pos = 1;
    int arr[1000][1000] = { 0 };
    arr[0][0] = 1;
    for (k = 2; k <= n * n; k++)
    {
        if (i == 0 && j < n - 1 && pos == 1)
        {
            arr[i][++j] = k;
            pos = -1;
        }
        else if (j == 0 && i < n - 1 && pos == -1)
        {
            arr[++i][j] = k;
            pos = 1;
        }
        else if (j == n - 1 && pos == 1)
        {
            arr[++i][j] = k;
            pos = -1;
        }
        else if (i == n - 1 && pos == -1)
        {
            arr[i][++j] = k;
            pos = 1;
        }
        else if (pos == 1)
        {
            arr[--i][++j] = k;
        }
        else if (pos == -1)
        {
            arr[++i][--j] = k;
        }
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


int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };
    int count = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
                count++;
        }
    }
    float s = 100.0 * count / (m * n);
    printf("%.2f", s);
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
                flag = -1;
        }
    }
    if (flag == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}