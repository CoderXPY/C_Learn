#define   _CRT_SECURE_NO_WARNINGS


#include<bits/stdc++.h>
using namespace std;
#define maxn 1000;
char a[1000];
int b[10001];
int main() {
    int n;
    cin >> n;
    cin >> a;
    for (int j = n; j < n * 2; j++) {
        a[j] = a[j - n];
    }
    int mx = 0;
    for (int j = 0; j < 2 * n; j++) {
        int l = j, r = j + 1;
        char la = a[l];
        char ra = a[r];
        if (a[l] == 'w') {    //特殊情况
            la = a[l - 1];
        }
        if (a[r] == 'w') {
            ra = a[r - 1];
        }
        int ans = 0;
        while (l >= 0) {
            if (a[l] == la || a[l] == 'w') {
                ans++;
            }
            else break;
            l--;
        }
        while (r < 2 * n) {
            if (a[r] == ra || a[r] == 'w') {
                ans++;
            }
            else break;
            r++;
        }
        mx = max(mx, ans);
    }
    if (mx > n) mx = n;          //如果超出范围取 n
    cout << mx << endl;
    return 0;
}