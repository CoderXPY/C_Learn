#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, m, a[100001], i,sum = 0,ans = 1;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		sum += a[i];
		if (sum > m) {
			sum = 0;
			ans++;
			i--;
		}
	}
	printf("%d", ans);
	return 0;
}