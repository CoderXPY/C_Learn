#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	int arr[32] = { 0 };
	int i = 0;
	//���Ǹ�����ת����2����
	for (i = 31; i >= 0; i--) {
		arr[i] = n % 2;
		n /= 2;
	}
	//��ǿ16λ���16λ����
	for (i = 0; i < 16; i++)	{
		int tmp = arr[i];
		arr[i] = arr[i + 16];
		arr[i + 16] = tmp;
	}
	//ת��Ϊʮ����
	n = arr[0];
	for (i = 1; i <= 31; i++) {
		n *= 2;
		n += arr[i];
	}
	printf("%lld", n);
	return 0;
}