#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main() {
	int n, m, i, w[11000] = { 0 }, count = 0;
	//取入数据
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &w[i]);
	}
	//t记录下一个同学
	int t = m + 1;
	while (t <= n + m)
	{
		for (int i = 1; i <= m; i++)     //  枚举m个水龙头 
		{
			w[i]--;
			if (w[i] == 0)
			{
				w[i] = w[t];     //  如果这个学生的水接完了 模拟换下一个学生来这个水龙头
				t++;
			}
		}
		count++;      //  以上是模拟的1秒钟的接水时间 所有ans加一 
	}
	printf("%d", count);
	return 0;
}