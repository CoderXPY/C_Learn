#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>//万能头文件。
using namespace std;
int m, n, i, j, k = 1, t, u, ans;
struct peanuts {//用结构体存坐标和数量及时间。（x，y坐标，time时间，w数量）
    int x, y, time, w;
};  peanuts p[1000001];//结构体下标用来排序。
int a[1010][1010];//开个2维数组用来输入数据。
int main() {
    cin >> m >> n >> t;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];//输入完成。
            if (a[i][j] > 0) {//当它下面有花生的时候就存它的数据。
                p[k].w = a[i][j];
                p[k].x = i;
                p[k].y = j;
                k++;
            }
        }
    for (i = 1; i < k; i++)
        for (j = i + 1; j <= k; j++)
            if (p[i].w < p[j].w)  swap(p[i], p[j]);//选择排序（用下标来排序，数量多的按题意先摘）。
    for (i = 1; i <= k; i++) {//枚举每个花生。
        u = p[i].x;//由于我们要考虑多多采花生返回，而返回的路程就是深度即x，如果加上这个x可以按时返回的话就采这个花生。
        if (i == 1) p[i].time = p[i].x + 1;  //第一个花生是不同的，因为多多一开始可以跳到第一个最多花生的所在列。
        else   p[i].time = p[i - 1].time + abs(p[i].x - p[i - 1].x) + abs(p[i].y - p[i - 1].y) + 1;//不是第一个的话就加上与前一个的坐标差再加采摘时间。
        if (p[i].time + u <= t) ans += p[i].w;//如果数据合法那么就把花生数加上。
    }
    cout << ans;//输出最多花生数即可。
    return 0;
}