#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	char k[101], c[1001], m[1001] = { 0 };
	scanf("%s\n%s", k, c);
	for (int i = 0; i < strlen(c); i++) {
		int t = (k[i % strlen(k)] & 31) - 1;
		m[i] = (c[i] & 31) - t > 0 ? c[i] - t : c[i] - t + 26;
	}
	printf("%s", m);
	return 0;
}