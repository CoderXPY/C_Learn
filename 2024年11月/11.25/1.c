#define   _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;

bool ispal(int n, int k) {
    short res[100] = { 0 }, p = 0;//res��װ����ת�����k������
    while (n) {
        res[p++] = n % k;
        n /= k;
    }//10ת2������ôת��10תk���ƾ���ôת����ģ��̳�������Ȼ��ô�㵽��k���������������Ǹ����ġ� 
    //��ʹ���ַ��ˣ���Ϊֻ���ж��ǲ��ǻ��ģ����Կ��Բ��ùܡ�
    //���ߣ�����ǻ��ģ��Ƿ�����ת����ûɶ����.... 
    int i = 0, j = p - 1;
    while (i < j)
        if (res[i++] != res[j--])return 0;        //�ж��ǲ��ǻ���
    return 1;
}

int main() {
    int n, s;
    cin >> n >> s;
    int ans = 0;
    for (int i = s + 1; ans != n; i++) {
        int cnt = 0;
        for (int j = 2; j <= 10 && cnt < 2; j++) {
            if (ispal(i, j))cnt++;//��j������iΪ������������cnt++ 
        }
        if (cnt >= 2)printf("%d\n", i), ans++;//��������С��2����������𰸼���ans++ 
    }
    return 0;
}