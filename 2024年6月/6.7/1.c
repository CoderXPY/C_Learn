#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//    char ch = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%c", &ch);
//        if (ch == a1)
//            ch = a2;
//        if (ch == a3)
//            ch = a4;
//        printf("%c", ch);
//    }
//    return 0;
//}
//
//
//#include<math.h>
//
//int main()
//{
//    int l = 0;
//    int r = 0;
//    scanf("%d %d", &l, &r);
//    int i = 0;
//    for (i = l; i <= r; i++)
//    {
//        int sum = 0;
//        int a = i;
//        while (a)
//        {
//            int tmp = a % 10;
//            sum += pow(tmp, 4);
//            a /= 10;
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}


int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int i = 0;
    int s = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &s);
        int a = s;
        int count1 = 0;
        int count0 = 0;
        if (a == 0)
            count0++;
        while (a)
        {
            if (a % 2 == 1)
                count1++;
            else
                count0++;
            a /= 2;
        }
        if (count1 % 2 == 0 && count0 % 2 != 0)
            printf("1 ");
        else if (count1 % 2 != 0 && count0 % 2 == 0)
            printf("0 ");
        else if (count1 % 2 == 0 && count0 % 2 == 0)
            printf("10 ");
        else
            printf("100 ");
    }
    return 0;
}