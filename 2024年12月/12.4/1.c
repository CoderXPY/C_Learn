#define   _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int a[105]; // ���

int main()
{
    int i, j;
    string s;
    cin >> s;
    for (i = 0; i < s.length(); i++) {
        if (s[i] == ')') { // �ҵ���������
            for (j = i - 1; j >= 0; j--) {
                if (s[j] == '(' and a[j] == 0) { // �ҵ���û��ƥ�������������ƥ��ɹ�
                    a[i] = a[j] = 1;
                    break;
                }
                else if (s[j] == '[' and a[j] == 0) break; // �ҵ��������ŵ�ƥ��ʧ��
            }
            // �Ҳ��������ţ������κβ���
        }
        // ����ͬ��
        else if (s[i] == ']') {
            for (j = i - 1; j >= 0; j--) {
                if (s[j] == '[' and a[j] == 0) {
                    a[i] = a[j] = 1;
                    break;
                }
                else if (s[j] == '(' and a[j] == 0) break;
            }
        }
    }
    for (i = 0; i < s.length(); i++) {
        if (a[i] == 0) { // û��ƥ����ɶ����
            if (s[i] == '(' or s[i] == ')') cout << "()";
            else cout << "[]";
        }
        else cout << s[i]; // ƥ��ɹ���ֱ�����
    }
    return 0;
}