#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                int k = 0;
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    printf("%d", count);
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100] = { 0 };
    int i = 0;
    for (i = 0; i < n - 2; i++)
    {
        arr[i] = 2 + i;
    }
    int count = 1;
    int j = 0;
    for (i = 2; i < n; i++)
    {
        for (j = i - 1; j < n - 2; j++)
        {
            if (arr[j] % i == 0)
            {
                int k = 0;
                for (k = j; k < n - 2; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
                count++;
            }
        }
    }
    for (i = 0; i < n - 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d\n%d", arr[n - 3], count);
    return 0;
}