#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<algorithm>//sort和bound都需要此库
using namespace std;
const int MAXN = 1e6 + 10;//n的最大值
int a[MAXN];
int main() {
	int n, d, ans = 0;
	scanf("%d%d", &n, &d);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	sort(a + 1, a + n + 1);//排序
	for (int i = 1; i <= n; i++) {//遍历每只奶牛
		int k = upper_bound(a + i + 1, a + n + 1, a[i] + d) - a;//二分
		ans += (k - i - 1);//记录
	}
	printf("%d", ans);
	return 0;//华丽结束
}