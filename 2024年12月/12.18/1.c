#define   _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
//�����ռ�
using namespace std;
int main() {
    //���������ַ���
    string a;
    string b;
    //��string�⣬����getline, ֱ�Ӷ���һ����
    getline(cin, a);
    getline(cin, b);
    //ת����Сд�����Զ�ת��Ϊ��д������Сд
    for (int i = 0; i < a.length(); ++i) {
        a[i] = tolower(a[i]);
    }
    for (int i = 0; i < b.length(); ++i) {
        b[i] = tolower(b[i]);
    }
    //��Ϊ�������Ĳ��㣬����Ҫ��ǰ��Ӽ����ո�һ��Ҫ��ͬ����ģ�ͬ����ͬ��������ͬ��
    a = ' ' + a + ' ';
    b = ' ' + b + ' ';
    //�ȿ����᲻���Ҳ�������a.find()��string::npos
    if (b.find(a) == string::npos) {
        cout << -1 << endl;
    }
    //����ҵõ�
    else {
        int alpha = b.find(a);
        int beta = b.find(a), s = 0;//��������ʼ��Ϊ0
        while (beta != string::npos) {
            ++s;//������
            beta = b.find(a, beta + 1);
        }
        cout << s << " " << alpha << endl;//�����һ�����ܹ��м���
    }
    //��������ֵΪ0��������������
    return 0;
}