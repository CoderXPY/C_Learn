#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
int n, ans = -INT_MAX, l[105], r[105];
bool vis[1005] = { false };//标记数组
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &l[i], &r[i]);//工作时间左右端点
	for (int i = 1; i <= n; i++) {
		int maxcover = 0;
		memset(vis, false, sizeof vis);//初始化标记数组
		for (int j = 1; j <= n; j++) {
			if (j == i)continue;//当前奶牛不计算
			for (int k = l[j]; k < r[j]; k++)
				vis[k] = true;
			//在这只奶牛工作时间内的时间点都做好标记
		}
		for (int j = 0; j <= 1000; j++)
			if (vis[j])maxcover++;//求有多少个标记点
		ans = max(ans, maxcover);//更新答案
	}
	printf("%d", ans);
	return 0;
}