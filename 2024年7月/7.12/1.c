#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char s[256];
	int arr[126] = { 0 };
	int i;

	gets(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i - 1 >= 0 && s[i] == ':' && s[i + 1] == '=' && s[i + 3] == ';')
		{
			if (s[i + 2] >= '0' && s[i + 2] <= '9')
				{
					arr[s[i - 1]] = s[i + 2] - 48;
				}
			if (s[i + 2] >= 'a' && s[i + 2] <= 'c')
			{
				arr[s[i - 1]] = arr[s[i + 2]];
			}
		}
	}
	printf("%d %d %d", arr['a'], arr['b'], arr['c']);

	return 0;
}