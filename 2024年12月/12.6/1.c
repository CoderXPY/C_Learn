#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<iostream>
using namespace std;
int minx = 2147483647, flag, ans;//定义最小值，标志变量和最小路程
int a[5][11], b[5][11], c[5];//3个数组
int main() {//过程华丽开始
    c[0] = c[1] = c[2] = c[3] = c[4] = 1;//注意，初值为1
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 11; j++) {
            cin >> a[i][j];//读入
            b[i][j] = a[i][j] - a[i][j - 1];//计算
        }
    }
    for (int i = 0; i < 20; i++) {
        minx = 2147483647;//每次更新初始值
        for (int j = 0; j < 5; j++) {
            if (b[j][c[j] + 1] < minx && c[j] + 1 <= 10) {//如果比目前最小值小，且没有超过10km
                flag = j;//标志
                minx = b[j][c[j] + 1];//最小值更新
            }
        }
        c[flag]++;//增加
    }
    for (int i = 0; i < 5; i++) {
        ans += a[i][c[i]];//计算最优解
    }
    printf("%d\n%d %d %d %d %d\n", ans, c[0], c[1], c[2], c[3], c[4]);//完美输出
    return 0;//过程华丽结束
}