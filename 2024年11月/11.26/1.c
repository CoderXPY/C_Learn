#define   _CRT_SECURE_NO_WARNINGS

#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n, m, ans;//总需求量，提供的个数，总价；

struct node
{
    int a, b;//牛奶单价和产量
}a[5005];//定义结构体

bool cmp(node a, node b)
{
    if (a.a != b.a)return a.a < b.a;
    else return a.b > b.b;
}//好我们定义一个判断函数，条件见思路1；

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i].a >> a[i].b;
    sort(a + 1, a + 1 + m, cmp);//用刚定义的函数给它排序
    int i = 1;
    while (n)//从n开始减起，直达n为零停止
    {
        if (a[i].b != 0)//当这头牛还没购买完
        {
            a[i].b--;//这头牛可购买数减一
            ans += a[i].a;//总花费加上这头牛的单价（或者说当前最小单价）
            n--;//需求量减一
        }
        else i++;//购买完了换头牛
    }
    cout << ans;
    return 0;
}