#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define N 1000000
int n, x, h;
char s[N], t[N];
struct node// 结构体存名字和钱 我爱结构体
{
    char name[20];
    int sum;
};
struct node q[N];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%s",&q[i].name);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s);
        for (int j = 1; j <= n; j++)
            if (strcmp(s, q[j].name) == 0) { x = j; break; }//比较名字，看是谁，记下j，千万不要只比较首字母。我之前就这样偷懒然后没a
        int a, b;
        scanf("%d%d", &a, &b);
        if (b == 0)continue;//这里注意一定要判断，毕竟0不能做除数，要不然会炸
        int y = a / b;
        int m = y * b;//算每人分到的钱数
        q[x].sum -= m; //减钱
        for (int k = 1; k <= b; k++)
        {
            scanf("%s", s);
            for (int g = 1; g <= n; g++)
                if (strcmp(s, q[g].name) == 0) { h = g; break; }//分钱 同上不要只比较首字母mm
            q[h].sum += y;//加钱
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%s %d\n", q[i].name, q[i].sum);
    return 0;
}