#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>//����ͷ�ļ���
using namespace std;
int m, n, i, j, k = 1, t, u, ans;
struct peanuts {//�ýṹ��������������ʱ�䡣��x��y���꣬timeʱ�䣬w������
    int x, y, time, w;
};  peanuts p[1000001];//�ṹ���±���������
int a[1010][1010];//����2ά���������������ݡ�
int main() {
    cin >> m >> n >> t;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];//������ɡ�
            if (a[i][j] > 0) {//���������л�����ʱ��ʹ��������ݡ�
                p[k].w = a[i][j];
                p[k].x = i;
                p[k].y = j;
                k++;
            }
        }
    for (i = 1; i < k; i++)
        for (j = i + 1; j <= k; j++)
            if (p[i].w < p[j].w)  swap(p[i], p[j]);//ѡ���������±�������������İ�������ժ����
    for (i = 1; i <= k; i++) {//ö��ÿ��������
        u = p[i].x;//��������Ҫ���Ƕ��ɻ������أ������ص�·�̾�����ȼ�x������������x���԰�ʱ���صĻ��Ͳ����������
        if (i == 1) p[i].time = p[i].x + 1;  //��һ�������ǲ�ͬ�ģ���Ϊ���һ��ʼ����������һ����໨���������С�
        else   p[i].time = p[i - 1].time + abs(p[i].x - p[i - 1].x) + abs(p[i].y - p[i - 1].y) + 1;//���ǵ�һ���Ļ��ͼ�����ǰһ����������ټӲ�ժʱ�䡣
        if (p[i].time + u <= t) ans += p[i].w;//������ݺϷ���ô�Ͱѻ��������ϡ�
    }
    cout << ans;//�����໨�������ɡ�
    return 0;
}