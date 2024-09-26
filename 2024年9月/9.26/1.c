#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char mid[10] = { 0 };
char back[10] = { 0 };
int len;

int find(char ch)
{
	for (int i = 0; i < len; i++)
	{
		if (mid[i] == ch)
			return i;
	}
}

void dfs(int l1, int r1, int l2, int r2)
{
	int m = find(back[r2]);
	printf("%c", back[r2]);
	if (m > l1)
	{
		dfs(l1, m - 1, l2, r2 - r1 + m - 1);
	}
	if (m < r1)
	{
		dfs(m + 1, r1, l2 + m - l1, r2 - 1);
	}
}

int main()
{
	scanf("%s\n%s", &mid, &back);
	len = strlen(mid);
	dfs(0, len - 1, 0, len - 1);
	return 0;
}