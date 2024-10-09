#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int s[105], k[10005][105];
int main()
{
    int n, m, ss, kk, count = 0, i, max = 0, x, j;
    scanf("%d%d", &n, &m);//输入
    m = m * 1.5;//人数计算
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &kk, &ss);//输入
        k[kk][ss]++;//计入
        s[ss]++;//计入
    }
    for (i = 100; count < m; i--)
        count += s[i];//算出分数线和能进的人数
    printf("%d %d\n", i + 1, count);//输出
    x = i + 1;//记录分数线
    for (i = 100; i >= x; i--)//分数线内从大到小枚举
        for (j = 1000; j <= 10000; j++)//在一个分数下搜报名号
            if (k[j][i]) printf("%d %d\n", j, i);//搜到输出
    return 0;
}