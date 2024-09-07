#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m;
	char n[1001] = { 0 };
	scanf("%d %s", &m, &n);
	int l = strlen(n);
	int i = 0;
	for (i = 0; i < l; i++)
	{
		if (n[i] == '0')
			continue;
		if (i != 0 && n[i] != 0)
			printf("+");
		printf("%c*%d^%d", n[i], m, l - i - 1);
	}
	return 0;
}