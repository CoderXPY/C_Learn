#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* p = "1234";
	int ret = atoi(p);
	printf("%d\n", ret);
	return 0;
}


#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float circumference, area, p;
    scanf("%d %d %d", &a, &b, &c);
    circumference = a + b + c;
    p = circumference / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f", circumference, area);
    return 0;
}


int main()
{
    int n, h, m;
    while (scanf("%d %d %d", &n, &h, &m) != EOF)
    {
        if (m % h == 0)
        {
            printf("%d\n", n - m / h);
        }
        else
        {
            printf("%d\n", n - m / h - 1);
        }
    }
    return 0;
}

int main()
{
    double f = 0;
    scanf("%lf", &f);
    printf("%.3lf\n", 5.0 / 9 * (f - 32));
    return 0;
}