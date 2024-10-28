#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int isprime(int x) {
	int f = 1;
	for (int i  = 2; i < sqrt(x); i++) {
		if (x % i == 0) {
			f = 0;
			break;
		}
	}
	if (x == 0||x==1)
		f = 0;
	return f;
}


int main() {
	char arr[101];
	int maxn = 0, minn = 100, i = 0, num[26] = { 0 };
	scanf("%s", arr);
	while (arr[i]) {
		num[arr[i] - 'a']++;	
		i++;
	}
	for (i = 0; i < 26; i++) {
		if (num[i] > maxn)
			maxn = num[i];
		if (num[i] < minn && num[i] != 0)
			minn = num[i];
	}
	if (isprime(maxn - minn) == 1)
		printf("Lucky Word\n%d", maxn - minn);
	else
		printf("No Answer\n0");
	return 0;
}