#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char ch = 0;
	int flag = 0;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
			break;
		if (ch == '(')
			flag++;
		if (ch == ')')
			flag--;
		if (flag < 0)
			break;
	}
	if (flag != 0)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}