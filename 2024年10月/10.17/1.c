#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int w, n, p[30001], i, j, count = 0;
	scanf("%d\n%d", &w, &n);
	//ȡ�����Ʒ��p[]
	for (i = 0; i < n; i++){
		scanf("%d", &p[i]);
	}
	//��p[]���дӴ�С����
	for (i = 0; i < n; i++){
		for (j = i; j < n; j++) {
			if (p[j] > p[i]) {
				int tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	//��һ�������һ����ӣ���������С��ӣ�
	// ���С��w����ô����һ��
	for (i = 0; i < n; i++){
		if (p[i] + p[n - 1] <= w && i != n - 1) {
			n--;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}