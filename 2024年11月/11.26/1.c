#define   _CRT_SECURE_NO_WARNINGS

#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n, m, ans;//�����������ṩ�ĸ������ܼۣ�

struct node
{
    int a, b;//ţ�̵��ۺͲ���
}a[5005];//����ṹ��

bool cmp(node a, node b)
{
    if (a.a != b.a)return a.a < b.a;
    else return a.b > b.b;
}//�����Ƕ���һ���жϺ�����������˼·1��

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i].a >> a[i].b;
    sort(a + 1, a + 1 + m, cmp);//�øն���ĺ�����������
    int i = 1;
    while (n)//��n��ʼ����ֱ��nΪ��ֹͣ
    {
        if (a[i].b != 0)//����ͷţ��û������
        {
            a[i].b--;//��ͷţ�ɹ�������һ
            ans += a[i].a;//�ܻ��Ѽ�����ͷţ�ĵ��ۣ�����˵��ǰ��С���ۣ�
            n--;//��������һ
        }
        else i++;//�������˻�ͷţ
    }
    cout << ans;
    return 0;
}