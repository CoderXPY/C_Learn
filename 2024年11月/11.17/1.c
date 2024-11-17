#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int map[1005][1005] = { 0 };  //储存模型 
char cache[1005];   //读入用 
int n, m;
long long S;   //表面积 

void solve()
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			S += (((map[i][j] > map[i + 1][j]) ? (map[i][j] - map[i + 1][j]) : 0) + ((map[i][j] > map[i - 1][j]) ? (map[i][j] - map[i - 1][j]) : 0) + ((map[i][j] > map[i][j + 1]) ? (map[i][j] - map[i][j + 1]) : 0) + ((map[i][j] > map[i][j - 1]) ? (map[i][j] - map[i][j - 1]) : 0) + ((map[i][j] == 0) ? 0 : 2));
			//套公式部分。。。具体请看思路的斜体字部分。
			//这里只是用“?:”运算符将式子弄成了一行 
		}
	}
	printf("%lld", S);    //输出表面积S 
}

int main()
{
	scanf("%d %d", &n, &m);
	int i, j, k;
	for (i = 1; i <= n; i++)     //读入部分，每次读入一个字符串 ，也就是一行 
	{
		scanf("%s", cache);
		for (j = 0; j < strlen(cache); j++)
		{
			map[i][j + 1] = cache[j] - '0';   // j+1的问题请看 细节部分的第5条 
		}
	}

	solve();

	return 0;
}