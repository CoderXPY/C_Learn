#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int min(int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}
int n, m, a[2005][2005], ans = 1 << 30;//ans必须要定大，不然找不到最小值
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)scanf("%d", &a[i][j]);
    for (int j = n - 2; j >= 0; j--)//从倒数第2步开始，向第一步推进
        //我用的是0下标
        for (int i = 0; i < m; i++)
            a[i][j] = min(a[(i + 1) % m][j + 1], a[i][j + 1]) + a[i][j];//取最小值，更新为之后的步骤的最小值
    for (int i = 0; i < m; i++)ans = min(ans, a[i][0]);//找答案
    printf("%d", ans);//结束
    return 0;
}