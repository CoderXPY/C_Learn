#define   _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int g[N][N], dist, max_d = -10 * N, n, m;
bool vis[N];
void dfs(int st) {//����������� 
	for (int i = 1; i <= n; i++) {
		if (g[st][i] && !vis[i]) {
			vis[i] = 1;
			dist += g[st][i];
			dfs(i);
			dist -= g[st][i];//���� 
		}
	}
	max_d = max(max_d, dist);//ͳ�������� 
	vis[st] = 0;
	return;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y, z;
		cin >> x >> y >> z;//����ߺͶ�Ӧ��Ȩֵ 
		g[x][y] = z;
		g[y][x] = z;
	}
	for (int i = 1; i <= n; i++) {
		vis[i] = 1;
		dfs(i);
		memset(vis, 0, sizeof(vis));//�ǵ���ձ������
	}
	cout << max_d;
	return 0;
}