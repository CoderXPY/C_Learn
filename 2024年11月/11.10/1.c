#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, i, m, x, w[200000] = { 0 }, j = 0,max;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		switch (m) {
		case 0:
			scanf("%d", &x);
			w[j++] += x;
			break;
		case 1:
			w[--j] = 0;
			break;
		case 2:
			max = 0;
			for (int k = 0; k < j; k++) {
				if (max < w[k])
					max = w[k];
			}
			printf("%d\n", max);
			break;
		default:
			break;
		}
	}
	return 0;
}