#define   _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int n, m;
string place;
int ans = 0;
map<string, bool> mp;

int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> place;
		string tmp;
		while (getchar() == ' ') //¶ÁÈ¡¿Õ¸ñ
		{
			cin >> tmp;
			place += tmp;
		}
		mp[place] = true;
	}

	for (int i = 1; i <= m; i++)
	{
		cin >> place;
		string tmp;
		while (getchar() == ' ')
		{
			cin >> tmp;
			place += tmp;
		}

		if (mp[place])
		{
			ans++;
		}
	}

	cout << ans;

	return 0;
}
