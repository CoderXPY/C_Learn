#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	int arr[32] = { 0 };
	int i = 0;
	//将非负整数转换成2进制
	for (i = 31; i >= 0; i--) {
		arr[i] = n % 2;
		n /= 2;
	}
	//将强16位与后16位互换
	for (i = 0; i < 16; i++)	{
		int tmp = arr[i];
		arr[i] = arr[i + 16];
		arr[i + 16] = tmp;
	}
	//转化为十进制
	n = arr[0];
	for (i = 1; i <= 31; i++) {
		n *= 2;
		n += arr[i];
	}
	printf("%lld", n);
	return 0;
}