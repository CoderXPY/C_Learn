#define   _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
int a[100], w;//a�洢������w������λ 
int b[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//������ת�� 
bool change(int n, int k) {//��kȡ�෨ 
    int flag = 1;
    while (n != 0) {
        a[++w] = n % k;
        n /= k;
    }
    for (int u = 1; u <= w / 2 + 1; u++)//������� 
        if (a[u] != a[w - u + 1]) {
            flag = 0; break;
        }
    return flag;
}
int main() {
    int i, j, k, m, n;
    scanf("%d", &n);
    for (i = 1; i <= 300; i++) {
        j = i * i; w = 0; //wҪ��ʱ��գ���λ��ʱ�̱仯 
        if (change(j, n) == 1) {
            w = 0; change(i, n);
            for (int u = w; u >= 1; u--) {        //ע��uҪ�� wö�ٵ� 1����kȡ�෨Ҫ������ 
                if (a[u] < 10)printf("%d", a[u]);
                else printf("%c", b[a[u] - 10]);
            }
            printf(" ");
            //���ԭ��
            w = 0; change(j, n);
            for (int u = 1; u <= w; u++) {        //��������1ö�ٵ�w���������ν 
                if (a[u] < 10)printf("%d", a[u]);
                else printf("%c", b[a[u] - 10]);
            }
            printf("\n");
        }
    }
    return 0;
}