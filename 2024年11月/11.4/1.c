#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main() {
	int m;
	scanf("%d", &m);
	for (int k1 = sqrt(2 * m); k1 > 1; k1--)//枚举k1(注意是k1>1而不是k1>=1)
		if (2 * m % k1 == 0 && (k1 + 2 * m / k1) % 2) {//如果K2是整数而且与K1一奇一偶
			int k2 = 2 * m / k1;
			printf("%d %d\n", (k2 - k1 + 1) / 2, (k1 + k2 - 1) / 2);//输出答案
		}
	return 0;
}