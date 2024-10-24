#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
//struct plat {
//	int h;
//	int l; 
//	int r;
//	int order;
//}x[1001];
//
//int main() {
//	int n, i, j;
//	scanf("%d", &n);
//	//将数据取入
//	for (i = 0; i < n; i++) {
//		scanf("%d%d%d", &x[i].h, &x[i].l, &x[i].r);
//		x[i].order = i+1;
//	}
//	//根据h从大到小排序
//	for (i = 0; i < n; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (x[j].h > x[i].h) {
//				struct plat tmp = x[i];
//				x[i] = x[j];
//				x[j] = tmp;
//			}
//		}
//	}
//	//分别判断左右
//	int flag,left[1001],right[1001];
//	for (i = 0; i < n; i++) {
//		//从左边缘
//		flag = 0;
//		for (j = i+1; j < n; j++) {
//			if (x[i].l > x[j].l && x[i].l < x[j].r&&x[i].h!=x[j].h) {
//				flag = 1;
//				left[x[i].order] = x[j].order;
//				break;
//			}
//		}
//		if (flag == 0)
//			left[x[i].order] = 0;
//		//从右边缘
//		flag = 0;
//		for (j = i + 1; j < n; j++) {
//			if (x[i].r > x[j].l && x[i].r < x[j].r && x[i].h != x[j].h){
//				flag = 1;
//				right[x[i].order] = x[j].order;
//				break;
//			}
//		}
//		if (flag == 0)
//			right[x[i].order] = 0;
//	}
//	for (i = 1; i <= n; i++){
//		printf("%d %d\n", left[i], right[i]);
//	}
//	return 0;
//}

#define MAX (1000 + 7)

int N, h[MAX], l[MAX], r[MAX], ans[2][MAX];

int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d%d%d", &h[i], &l[i], &r[i]);
	for (int i = 1; i <= N; i++)
	{
		int H1 = 0, H2 = 0;
		for (int j = 1; j <= N; j++)
		{
			if (H1 < h[j] && h[j] < h[i] && l[j] < l[i] && l[i] < r[j])
				ans[0][i] = j, H1 = h[j];
			if (H2 < h[j] && h[j] < h[i] && l[j] < r[i] && r[i] < r[j])
				ans[1][i] = j, H2 = h[j];
		}printf("%d %d\n", ans[0][i], ans[1][i]);
	}
}