#define   _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int ans, n, m;
char c[1100][1100];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> c[i][j];//�������ַ����룻
			if (c[i][j] == 'h') if (c[i][j - 1] == 'e' && c[i][j - 2] == 'h' && c[i][j - 3] == 'e') ans++;//��������һ�Σ�
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (c[i][j] == 'h')
			{
				if (c[i][j + 1] == 'e' && c[i][j + 2] == 'h' && c[i][j + 3] == 'e') ans++;//��������һ�Σ�
				if (c[i - 1][j] == 'e' && c[i - 2][j] == 'h' && c[i - 3][j] == 'e') ans++;//��������һ�Σ�
				if (c[i + 1][j] == 'e' && c[i + 2][j] == 'h' && c[i + 3][j] == 'e') ans++;//��������¸�һ�Σ����£�
			}
		}
	}
	cout << ans << endl;
	return 0;
}