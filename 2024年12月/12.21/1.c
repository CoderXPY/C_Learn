#define   _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
int main()
{
    int n1, n2, i, ans = 0;
    cin >> n1 >> n2;
    for (i = n1; i <= n2; i++)
        if (i % 4 == 0 || i % 2 != 0)ans++;  //奇数或4的倍数
    cout << ans << endl;
    return 0;
}