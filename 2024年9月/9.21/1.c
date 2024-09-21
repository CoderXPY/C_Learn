#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char s[201];
int a[401], top;         //数组a为高精度数组，top为它的长度
int judge()  //判断一个数是否回文
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
    for (int i = 0; i <= top; ++i)   //将字符转化为数字
        if (s[i] >= '0' && s[i] <= '9')
            a[top - i] = s[i] - '0';
        else
            a[top - i] = s[i] - 55;   //注意16进制
    while (judge())
    {
        if (step > 30)  //如果超过三十步就直接结束程序
            return puts("Impossible!") & 0;
        for (int i = 0; i <= top; ++i)  //高精度加法不是很习惯边算边进位，习惯算完在进位
            if (top - i >= i)
                a[i] += a[top - i];
            else
                a[i] = a[top - i];  //因为最后算出来的数如果不进位的话就一定是回文的，所以数组的后一半直接复制前一半就好了
        for (int i = 0; i <= top; ++i) //进位
            if (a[i] >= n)
                a[i + 1]++, a[i] -= n;
        if (a[top + 1])  //注意如果首位进位，长度要增加
            top++;
        step++;
    }
    printf("STEP=%d\n", step);
    return 0;
}