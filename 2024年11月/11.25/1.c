#define   _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;

bool ispal(int n, int k) {
    short res[100] = { 0 }, p = 0;//res里装的是转换后的k进制数
    while (n) {
        res[p++] = n % k;
        n /= k;
    }//10转2进制怎么转，10转k进制就怎么转——模拟短除法。当然这么搞到的k进制数在数组里是个反的。 
    //即使数字反了，因为只用判断是不是回文，所以可以不用管。
    //再者，如果是回文，那反不反转好像没啥区别.... 
    int i = 0, j = p - 1;
    while (i < j)
        if (res[i++] != res[j--])return 0;        //判断是不是回文
    return 1;
}

int main() {
    int n, s;
    cin >> n >> s;
    int ans = 0;
    for (int i = s + 1; ans != n; i++) {
        int cnt = 0;
        for (int j = 2; j <= 10 && cnt < 2; j++) {
            if (ispal(i, j))cnt++;//在j进制下i为回文数，计数cnt++ 
        }
        if (cnt >= 2)printf("%d\n", i), ans++;//若计数不小于2，则输出，答案计数ans++ 
    }
    return 0;
}