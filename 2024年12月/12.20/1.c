#define   _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdlib>
#include <vector>
//这么多头文件实在煤必要，大家不要学这种人
using namespace std;
int r, c, ans;
char sea[1010][1010];
bool pd = false;
void dfs(int x, int y)
{
	int heng, shu, temp = 0;
	for (shu = y;; shu++) if (sea[x][shu] == '.' || shu > c) break;
	shu--;
	for (heng = x;; heng++) if (sea[heng][y] == '.' || heng > r) break;
	heng--;
	for (int i = y; i <= shu; i++)
	{
		for (int j = x; sea[j][i] == '#'; j++) temp++;
		if (temp != heng - x + 1) { printf("Bad placement."); pd = true; return; }
		temp = 0;
	}
	for (int i = x; i <= heng; i++)
	{
		for (int j = y; sea[i][j] == '#'; j++) temp++;
		if (temp != shu - y + 1) { printf("Bad placement."); pd = true; return; }
		temp = 0;
	}
	for (int i = x; i <= heng; i++)
		for (int j = y; j <= shu; j++) sea[i][j] = '*';
	ans++;
	return;
}
int main()
{
	//	freopen("work.in","r",stdin);freopen("work.out","w",stdout);
	scanf("%d %d", &r, &c);
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++) cin >> sea[i][j];
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
		{
			if (sea[i][j] == '#') dfs(i, j);
			if (pd == true) return 0;
		}
	printf("There are %d ships.", ans);
	//	fclose(stdin);fclose(stdout);
	return 0;
}