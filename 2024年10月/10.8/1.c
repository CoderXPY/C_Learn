#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, ratio, i, counter = 0;    // counter ���Ѿ����������

    scanf("%i", &n);
    for (i = n; i > 0; i--)
    {
        scanf("%i", &ratio);
        if (ratio == 0)    // ϵ��Ϊ 0 continue
            continue;
        else if (i == 1)        // ����Ϊ 1
            if (ratio == 1)            // ϵ��Ϊ 1
                if (counter == 0)        // ��һ��
                    printf("x");
                else
                    printf("+x");
            else if (ratio == -1)    // ϵ��Ϊ -1
                printf("-x");
            else                    // ����ϵ��
                if (counter == 0)        // ��һ��
                    printf("%ix", ratio);
                else
                    printf("%+ix", ratio);
        else if (ratio == 1)    // ������Ϊ 1, ϵ��Ϊ 1
            if (counter == 0)        // ��һ��
                printf("x^%i", i);
            else
                printf("+x^%i", i);
        else if (ratio == -1)    // ������Ϊ 1, ϵ��Ϊ -1
            printf("-x^%i", i);
        else                    // ������Ϊ 1, ϵ����Ϊ 1 �� -1
            if (counter == 0)        // ��һ��
                printf("%ix^%i", ratio, i);
            else                    // !!! ע������!!! �� printf() ����ÿ����ַ�ǿ���������!!!
                printf("%+ix^%i", ratio, i);
        counter++;
    }
    scanf("%i", &ratio);    // �Գ�������ж�
    if (ratio == 0)            // ����Ϊ 0
        if (counter == 0)        // ��һ��
            printf("0\n");
        else
            printf("\n");
    else if (counter == 0)    // ��һ��������
        printf("%i\n", ratio);
    else                    // ����ǿ���������
        printf("%+i\n", ratio);

    return 0;
}