#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%d", a);
//    return 0;
//}

//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%.0f", a);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    float b = 0;
//    float c = 0;
//    float d = 0;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%4d%2d%2d", &year, &month, &day);
//    printf("year=%d\nmonth=%02d\ndate=%02d", year, month, day);
//    return 0;
//}

//int main()
//{
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
//    return 0;
//}

int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        getchar();
        putchar(ch + 32);
        printf("\n");
    }
    return 0;
}