#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int gcd(int x, int y)
{
	if (y == 0) return x;
	else return (gcd(y, x % y));
}

int main() {
	int n, ax, ay, bx, by, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &ax, &ay, &bx, &by);
		if (gcd(abs(ax - bx), abs(ay - by)) == 1)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}