#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

int main()
{
    char arr[50] = { 0 };
    int count = 0;
    gets(arr);
    int i = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            count++;
        if (arr[i] >= 'a' && arr[i] <= 'z')
            count++;
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            count++;
    }
    printf("%d", count);
    return 0;
}

int main()
{
    char arr1[20] = { 0 };
    char arr2[20] = { 0 };
    while (scanf("%s %s", arr1, arr2) != EOF)
    {
        if (((strcmp(arr1, arr2)) == 0) && (strcmp(arr1, "admin") == 0))
            printf("Login Success!");
        else
            printf("Login Fail!");
    }
    return 0;
}

int main()
{
    char arr[100] = { 0 };
    scanf("%s", arr);
    int maxn = 0;
    int minn = 100;
    int count = 0;
    int i = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        count = 0;
        int j = 0;
        for (j = 0; j < strlen(arr); j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxn)
            maxn = count;
        if (count < minn)
            minn = count;
    }
    int m = maxn - minn;
    int flag = 0;
    for (i = 2; i < m; i++)
    {
        if (m % i == 0)
            flag = 1;
    }
    if (flag == 0 && m != 0 && m != 1)
        printf("Lucky Word\n%d", m);
    else
    {
        printf("No Answer\n%d", 0);
    }
    return 0;
}

int main()
{
    char arr[20] = { 0 };
    scanf("%s", arr);
    int sz = strlen(arr);
    int i = 0;
    for (i = 1; i <= sz; i++)
    {
        printf("%c", arr[i - 1]);
        if ((sz - i) % 3 == 0 && i != sz)
            printf(",");
    }
    return 0;
}
