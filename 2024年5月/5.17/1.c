#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n > 0)
//            printf("1\n");
//        else if (n < 0)
//            printf("0\n");
//        else
//            printf("0.5\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c)
//        {
//            if (a == b && a == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c & b != a))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int y, m, d, y1, m1, d1;
//    scanf("%d %d %d\n%d %d %d", &y, &m, &d, &y1, &m1, &d1);
//    if (y1 == y && m1 == m && d1 >= d)
//        printf("yes\n");
//    else if (y1 == y && m1 > m)
//        printf("yes\n");
//    else if (y1 > y)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}
//
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        float delta = b * b - 4 * a * c;
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            if (delta == 0)
//                printf("x1=x2=%.2f\n", (-b / (2 * a) == 0) ? 0 : (-b / (2 * a)));
//            if (delta > 0)
//                printf("x1=%.2f;x2=%.2f\n",
//                    (-b - sqrt(delta)) / (2. * a),
//                    (-b + sqrt(delta)) / (2. * a));
//            if (delta < 0)
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//                    -b / (2. * a), sqrt(-delta) / (2. * a),
//                    -b / (2. * a), sqrt(-delta) / (2. * a));
//        }
//
//    }
//    return 0;
//}
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d", &y, &m) != EOF)
//    {
//        if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m == 2)
//            printf("29\n");
//        else
//            printf("%d\n", arr[m]);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b + c) / 3 >= 60)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}

#include <stdio.h>

int main() {
    char ISBN[14];
    int sum = 0, k = 1;
    scanf("%s", ISBN);
    for (int i = 0; i < 12; ++i) {
        if (ISBN[i] >= '0' && ISBN[i] <= '9') {
            sum += (ISBN[i] - '0') * k;
            k++;
        }
    }
    sum %= 11;
    char ret = '0';
    if (sum == 10)
        ret = 'X';
    else
        ret = sum + '0';
    if (ISBN[12] == ret)
        printf("Right");
    else {
        ISBN[12] = ret;
        printf("%s", ISBN);
    }
    return 0;
}
