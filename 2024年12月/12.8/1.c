#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 2e5 + 50;
#define D double
struct spot {
	D a[4];
}p[N];
D x, y, x_, y_, z, w, ans;
int n;
bool mmp(const spot& u, const spot& v) {
	return u.a[0] < v.a[0];
}
int main() {
	scanf("%d", &n);
	z = sin(1), w = cos(1);  //旋转1弧度≈57°
	for (int i = 1; i <= n; i++) {
		scanf("%lf%lf", &x, &y);
		x_ = x * w - y * z;
		y_ = x * z + y * w;   //计算旋转后的坐标
		p[i].a[0] = x_;
		p[i].a[1] = y_;
		p[i].a[2] = x;
		p[i].a[3] = y;   //存下来
	}
	sort(p + 1, p + n + 1, mmp);   //排序
	for (int i = n + 1; i <= n + 10; i++)
		p[i].a[0] = p[i].a[1] = -N - 0.01;  //边界处理
	ans = 2e9 + 0.01;  //初始化答案
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 5; j++) {  //枚举
			x = p[i].a[2]; y = p[i].a[3];
			x_ = p[i + j].a[2]; y_ = p[i + j].a[3];
			z = sqrt((x - x_) * (x - x_) + (y - y_) * (y - y_));  //计算距离
			if (ans > z)ans = z;   //更新答案
		}
	printf("%.4lf\n", ans);  //输出
}