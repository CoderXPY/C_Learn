#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
int n, ans = -INT_MAX, l[105], r[105];
bool vis[1005] = { false };//�������
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &l[i], &r[i]);//����ʱ�����Ҷ˵�
	for (int i = 1; i <= n; i++) {
		int maxcover = 0;
		memset(vis, false, sizeof vis);//��ʼ���������
		for (int j = 1; j <= n; j++) {
			if (j == i)continue;//��ǰ��ţ������
			for (int k = l[j]; k < r[j]; k++)
				vis[k] = true;
			//����ֻ��ţ����ʱ���ڵ�ʱ��㶼���ñ��
		}
		for (int j = 0; j <= 1000; j++)
			if (vis[j])maxcover++;//���ж��ٸ���ǵ�
		ans = max(ans, maxcover);//���´�
	}
	printf("%d", ans);
	return 0;
}