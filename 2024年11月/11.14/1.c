#define   _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int num[66666], ans;
double k;
int f[13] = { 0,0,31,60,91,121,152,182,213,244,274,305,335 };
//预处理每月的天数，注意C++的默认数组下标是从0开始的
int main() {
	int i, a, b, n;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> a >> b;
		num[i] += f[a];
		num[i] += b;//处理天数
	}
	sort(num + 1, num + n + 1);//STL模板的sort快排
	num[n + 1] = 367; //一年的末尾（想一想为什么要用367）
	for (i = 1; i <= n + 1; i++) {
		//注意这里是从1开始循环，因为num数组是在main函数外定义的，所以num[0]值为0，因此可以处理第一段时间
		ans = max(num[i] - num[i - 1] - 1, ans);//ans取最大值
	}
	k = (ans * 1.0 * 24 * 3600 / 366) + 0.5;//处理时间，注意四舍五入，加上0.5在换成整数是很常见的方法
	ans = k;//强制转化为整数

	cout << ans;//输出，完事

	return 0;
}