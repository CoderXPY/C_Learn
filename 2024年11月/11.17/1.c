#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int map[1005][1005] = { 0 };  //����ģ�� 
char cache[1005];   //������ 
int n, m;
long long S;   //����� 

void solve()
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			S += (((map[i][j] > map[i + 1][j]) ? (map[i][j] - map[i + 1][j]) : 0) + ((map[i][j] > map[i - 1][j]) ? (map[i][j] - map[i - 1][j]) : 0) + ((map[i][j] > map[i][j + 1]) ? (map[i][j] - map[i][j + 1]) : 0) + ((map[i][j] > map[i][j - 1]) ? (map[i][j] - map[i][j - 1]) : 0) + ((map[i][j] == 0) ? 0 : 2));
			//�׹�ʽ���֡����������뿴˼·��б���ֲ��֡�
			//����ֻ���á�?:���������ʽ��Ū����һ�� 
		}
	}
	printf("%lld", S);    //��������S 
}

int main()
{
	scanf("%d %d", &n, &m);
	int i, j, k;
	for (i = 1; i <= n; i++)     //���벿�֣�ÿ�ζ���һ���ַ��� ��Ҳ����һ�� 
	{
		scanf("%s", cache);
		for (j = 0; j < strlen(cache); j++)
		{
			map[i][j + 1] = cache[j] - '0';   // j+1�������뿴 ϸ�ڲ��ֵĵ�5�� 
		}
	}

	solve();

	return 0;
}