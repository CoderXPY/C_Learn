#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int min(int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}
int n, m, a[2005][2005], ans = 1 << 30;//ans����Ҫ���󣬲�Ȼ�Ҳ�����Сֵ
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)scanf("%d", &a[i][j]);
    for (int j = n - 2; j >= 0; j--)//�ӵ�����2����ʼ�����һ���ƽ�
        //���õ���0�±�
        for (int i = 0; i < m; i++)
            a[i][j] = min(a[(i + 1) % m][j + 1], a[i][j + 1]) + a[i][j];//ȡ��Сֵ������Ϊ֮��Ĳ������Сֵ
    for (int i = 0; i < m; i++)ans = min(ans, a[i][0]);//�Ҵ�
    printf("%d", ans);//����
    return 0;
}