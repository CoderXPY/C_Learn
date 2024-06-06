#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int a = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            a *= 3;
//        }
//        printf("%d\n", a - 1);
//    }
//    return 0;
//}


#include <stdio.h>
#include<math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int a = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        int j = 0;
        int flag = 0;
        if ((a > 2) && (a % 2 == 0))
            flag = 1;
        else
        {
            for (j = 2; j < sqrt(a); j++)
            {
                if (a % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("false\n");
        else
            printf("true\n");
    }
    return 0;
}