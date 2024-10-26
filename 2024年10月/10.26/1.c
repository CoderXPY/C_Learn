#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int max(int x, int y) {
	if (x >= y)
		return x;
	else
		return y;
}


int main() {
	int n,a,b,i,ans = -2147483647;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (i == 0)
			b = a;
		else
			b = max(a, a + b);
		ans = max(ans, b);
	}
	printf("%d", ans);
	return 0;
}