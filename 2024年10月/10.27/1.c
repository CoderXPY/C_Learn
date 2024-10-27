#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, count = 0,arr[10001],i,j;
	scanf("%d", &n);
	//数据取入
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//排序
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}