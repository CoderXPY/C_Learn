#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    char ch = '0';
//    int a = 0;
//    int b = 0;
//    int z = 0;
//    for (z = 0; z < k; z++)
//    {
//        scanf(" %c %d %d", &ch, &a, &b);
//        if (ch == 'r')
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        if (ch == 'c')
//        {
//            for (i = 0; i < m; i++)
//            {
//                int tmp = arr[i][a - 1];
//                arr[i][a - 1] = arr[i][b - 1];
//                arr[i][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if ((j == i) || (j == 0))
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//
//int main()
//{
//    char arr[3][3] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    int flag = 0;
//    for (i = 0; i < 3; i++)
//    {
//        if ((arr[i][0] == 'K') && (arr[i][1] == 'K') && (arr[i][2] == 'K'))
//        {
//            flag = 1;
//            break;
//        }
//        if ((arr[i][0] == 'B') && (arr[i][1] == 'B') && (arr[i][2] == 'B'))
//        {
//            flag = -1;
//            break;
//        }
//    }
//    for (j = 0; j < 3; j++)
//    {
//        if ((arr[0][j] == 'K') && (arr[1][j] == 'K') && (arr[2][j] == 'K'))
//        {
//            flag = 1;
//            break;
//        }
//        if ((arr[0][j] == 'B') && (arr[1][j] == 'B') && (arr[2][j] == 'B'))
//        {
//            flag = -1;
//            break;
//        }
//    }
//    if (((arr[0][0] == 'K') && (arr[1][1] == 'K') && (arr[2][2] == 'K')) ||
//        ((arr[0][2] == 'K') && (arr[1][1] == 'K') && (arr[2][0] == 'K')))
//    {
//        flag = 1;
//    }
//    if (((arr[0][0] == 'B') && (arr[1][1] == 'B') && (arr[2][2] == 'B')) ||
//        ((arr[0][2] == 'B') && (arr[1][1] == 'B') && (arr[2][0] == 'B')))
//    {
//        flag = -1;
//    }
//    if (flag == 1)
//        printf("KiKi wins!");
//    else if (flag == -1)
//        printf("BoBo wins!");
//    else
//        printf("No winner!");
//    return 0;
//}



int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    getchar();
    char arr1[1002][1002] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%c", &arr1[i][j]);
        }
        getchar();
    }
    char arr2[1002][1002] = { 0 };
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (arr1[i][j] == '*')
                arr2[i][j] = arr1[i][j];
            else
            {
                int count = 0;
                if (arr1[i - 1][j - 1] == '*')
                    count++;
                if (arr1[i - 1][j] == '*')
                    count++;
                if (arr1[i - 1][j + 1] == '*')
                    count++;
                if (arr1[i][j - 1] == '*')
                    count++;
                if (arr1[i][j + 1] == '*')
                    count++;
                if (arr1[i + 1][j - 1] == '*')
                    count++;
                if (arr1[i + 1][j] == '*')
                    count++;
                if (arr1[i + 1][j + 1] == '*')
                    count++;
                arr2[i][j] = count + 48;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%c", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}