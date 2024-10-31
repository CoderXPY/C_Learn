#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main() {
	int n, m,i,num[10000000] = {0}, e, g = 0, sum = 0;
	char arr[100] = { 0 };
	//取入数据
	scanf("%d\n%s\n%d", &n, arr, &m);
	//先转换10进制
	int l = strlen(arr);
	for (i = 0; i < l; i++) {
		if (arr[i] < 'A') {
			e = pow(n, l - i - 1);
			e *= (arr[i] - '0');
			sum += e;
		}
		else {
			e = pow(n, l - 1 - i);
			e *= (arr[i] - 'A' + 10);
			sum += e;
		}
	}
	while (sum) {
		num[g++] = sum % m;
		sum /= m;
	}
	for (i = g - 1; i >= 0; i--) {
		if (num[i] >= 10)
			printf("%c", num[i] + 'A' - 10);
		else
			printf("%d", num[i]);
	}
	return 0;
}