#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char ch;
	int count = 0;
	while (scanf("%c",&ch)!=EOF)
	{
		if (ch == 'a' ||
			ch == 'd' ||
			ch == 'g' ||
			ch == 'j' ||
			ch == 'm' ||
			ch == 'p' ||
			ch == 't' ||
			ch == 'w' ||
			ch == ' ')
			count++;
		if (ch == 'b' ||
			ch == 'e' ||
			ch == 'h' ||
			ch == 'k' ||
			ch == 'n' ||
			ch == 'q' ||
			ch == 'u' ||
			ch == 'x')
			count += 2;
		if (ch == 'c' ||
			ch == 'f' ||
			ch == 'i' ||
			ch == 'l' ||
			ch == 'o' ||
			ch == 'r' ||
			ch == 'v' ||
			ch == 'y')
			count += 3;
		if (ch == 's' ||
			ch == 'z')
			count += 4;
		if (ch == '\n')
			break;
	}
	printf("%d", count);
	return 0;
}