#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main() {
	int m;
	scanf("%d", &m);
	for (int k1 = sqrt(2 * m); k1 > 1; k1--)//ö��k1(ע����k1>1������k1>=1)
		if (2 * m % k1 == 0 && (k1 + 2 * m / k1) % 2) {//���K2������������K1һ��һż
			int k2 = 2 * m / k1;
			printf("%d %d\n", (k2 - k1 + 1) / 2, (k1 + k2 - 1) / 2);//�����
		}
	return 0;
}