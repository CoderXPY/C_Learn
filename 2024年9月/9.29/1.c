#define  _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

char a[1000000];     //其实可以不保存，但是本人习惯
int w, l, x, n, g, t, m, i;
int main() {
	int p[10000], q[10000];
	while (scanf("%c", &a[t]) && a[t] != 'E') { //读取数据，到‘E’结束
		if (a[t] == 'W') {
			w++;   //11分制
			x++;   //21分制
		}
		if (a[t] == 'L') { //同上
			l++;
			n++;
		}
		if ((w > 10 && w - l > 1) || (l > 10 && l - w > 1)) {   //W或L比赛者到达11时，并且比分差不小于2，立为一局，保存一局比分
			q[m++] = w;
			q[m++] = l;
			w = 0;
			l = 0;
		}
		if ((x > 20 && x - n > 1) || (n > 20 && n - x > 1)) {   //W或L比赛者到达21时，并且比分差不小于2，立为一局，保存一局比分
			p[g++] = x;
			p[g++] = n;
			x = 0;
			n = 0;
		}
		t++;
	}
	p[g++] = x;   // 当前比分
	p[g++] = n;
	q[m++] = w;
	q[m++] = l;
	for (i = 0; i < m; i += 2) {  //输出11分制下比分
		if (i == 0) {
			printf("%d:%d", q[i], q[i + 1]);
		}
		else printf("\n%d:%d", q[i], q[i + 1]);
	}
	printf("\n");
	for (i = 0; i < g; i += 2)   //输出21分制下比分
		printf("\n%d:%d", p[i], p[i + 1]);
	return 0;
}