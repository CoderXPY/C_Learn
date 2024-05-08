#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    float arr[100] = { 0 };
    int n = 0;
    scanf("%d", &n);
    float max = 0;
    float min = 100;
    float sum = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%.2f %.2f %.2f", max, min, sum / n);

    return 0;
}