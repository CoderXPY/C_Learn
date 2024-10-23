#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct stu{
	char name[20];
	int y;
	int m;
	int d;
}s[101];

void sort(struct stu *S,int n) {
	int i ,j;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (S[j].y < S[i].y) {
				struct stu tmp = S[i];
				S[i] = S[j];
				S[j] = tmp;
			}
			else if (S[j].y == S[i].y && S[j].m < S[i].m) {
				struct stu tmp = S[i];
				S[i] = S[j];
				S[j] = tmp;
			}
			else if (S[j].y == S[i].y && S[j].m == S[i].m&& (S[j].d == S[i].d ||S[j].d < S[i].d)) {
				struct stu tmp = S[i];
				S[i] = S[j];
				S[j] = tmp;
			}
		}
	}
}

int main() {
	int n,i;
	scanf("%d", &n);
	//将数据取入
	for (i = 0; i < n; i++) {
		scanf("%s%d%d%d", &s[i].name, &s[i].y, &s[i].m, &s[i].d);
	}
	//对数据排序
	sort(s,n);
	for (i = 0; i < n; i++) {
		printf("%s\n", s[i].name);
	}
	return 0;
}