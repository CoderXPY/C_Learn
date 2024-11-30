#define   _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;

bool isprime(int x) {
	if (x % 2 == 0) return false;
	int m = sqrt(x);
	for (int i = 3; i <= m; i += 2)
		if (x % i == 0) return false;
	return true;
}

int main() {
	queue <int> q;
	int n, m = 4, a[] = { 2,3,5,7 }, b[] = { 1,3,7,9 };
	scanf("%d", &n);
	for (int i = 0; i < 4; i++) q.push(a[i]);
	for (int i = 2; i <= n; i++) {
		int l = m;
		m = 0;
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < 4; k++)
				if (isprime(q.front() * 10 + b[k]))    q.push(q.front() * 10 + b[k]), m++;
			q.pop();
		}
	}
	while (!q.empty()) {
		printf("%d\n", q.front());
		q.pop();
	}
	return 0;
}