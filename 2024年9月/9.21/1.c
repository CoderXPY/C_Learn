#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char s[201];
int a[401], top;         //����aΪ�߾������飬topΪ���ĳ���
int judge()  //�ж�һ�����Ƿ����
{
    int t = top / 2;
    for (int i = 0; i <= t; ++i)
        if (a[i] != a[top - i])
            return 1;
    return 0;
}
int main()
{
    int n, step = 0;
    scanf("%d%s", &n, s);
    top = strlen(s) - 1;
    for (int i = 0; i <= top; ++i)   //���ַ�ת��Ϊ����
        if (s[i] >= '0' && s[i] <= '9')
            a[top - i] = s[i] - '0';
        else
            a[top - i] = s[i] - 55;   //ע��16����
    while (judge())
    {
        if (step > 30)  //���������ʮ����ֱ�ӽ�������
            return puts("Impossible!") & 0;
        for (int i = 0; i <= top; ++i)  //�߾��ȼӷ����Ǻ�ϰ�߱���߽�λ��ϰ�������ڽ�λ
            if (top - i >= i)
                a[i] += a[top - i];
            else
                a[i] = a[top - i];  //��Ϊ�������������������λ�Ļ���һ���ǻ��ĵģ���������ĺ�һ��ֱ�Ӹ���ǰһ��ͺ���
        for (int i = 0; i <= top; ++i) //��λ
            if (a[i] >= n)
                a[i + 1]++, a[i] -= n;
        if (a[top + 1])  //ע�������λ��λ������Ҫ����
            top++;
        step++;
    }
    printf("STEP=%d\n", step);
    return 0;
}