#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n,chin[305],math,eng,sum[305];
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++){
		scanf("%d%d%d", &chin[i], &math, &eng);
		sum[i] = chin[i] + math + eng;
	}
	for (int j = 0; j < 5; j++){
		int max = 0, maxi = 0, chinese = 0;
		for (i = 1; i <= n; i++) {
			if (sum[i] > max) {
				max = sum[i];
				maxi = i;
				chinese = chin[i];
			}
			if (sum[i] == max) {
				if (chin[i] > chinese) {
					max = sum[i];
					maxi = i;
					chinese = chin[i];
				}
				if (chin[i] == chinese) {
					if (i < maxi){
						max = sum[i];
						maxi = i;
						chinese = chin[i];

					}
				}
			}
		}
		printf("%d %d\n", maxi, max);
		sum[maxi] = chin[maxi] = -1;
	}
	return 0;
}