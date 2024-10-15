#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(){
	int n, m, a[10005], used[10005] = { 0 };
	scanf("%d\n%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        int x = a[i];
        for (int j = 1; j <= a[i]; j++)
            x -= used[j];
        used[a[i]] = 1;
        a[i] = x - 1;
    }
    a[n] += m;
    for (int i = n; i > 0; i--)
    {
        a[i - 1] += a[i] / (n - i + 1);
        a[i] %= n - i + 1;
    }
    memset(used, 0, sizeof(used));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= a[i]; j++)
            if (used[j])
                a[i]++;
        printf("%d ", a[i] + 1);
        used[a[i]] = 1;
    }
	return 0;
}