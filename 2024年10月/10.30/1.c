#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, k, arr[10001], i, j,count = 0;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//从小到大排序
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	int flag = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] != arr[i + 1]) {
			count++;
		}
		if (count == k) {
			printf("%d", arr[i]);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("NO RESULT");
	return 0;
}