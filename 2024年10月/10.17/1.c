#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int w, n, p[30001], i, j, count = 0;
	scanf("%d\n%d", &w, &n);
	//取入纪念品到p[]
	for (i = 0; i < n; i++){
		scanf("%d", &p[i]);
	}
	//对p[]进行从大到小排序
	for (i = 0; i < n; i++){
		for (j = i; j < n; j++) {
			if (p[j] > p[i]) {
				int tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	//第一个和最后一个相加，即最大和最小相加，
	// 如果小于w，那么可以一组
	for (i = 0; i < n; i++){
		if (p[i] + p[n - 1] <= w && i != n - 1) {
			n--;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}