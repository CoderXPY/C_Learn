#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int ADD(int a, int b)
{
	return a + b;
}

int SUB(int a, int b)
{
	return a - b;
}

int MUL(int a, int b)
{
	return a * b;
}

int DIV(int a, int b)
{
	return a / b;
}

int main()
{
	int a, b, c;
	char ch;
	scanf("%d %d %c", &a, &b, &ch);
	if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
		printf("Invalid operator!\n");
	if (ch == '+')
	{
		c = ADD(a, b);
		printf("%d", c);
	}
	if (ch == '-')
	{
		c = SUB(a, b);
		printf("%d", c);
	}
	if (ch == '*')
	{
		c = MUL(a, b);
		printf("%d", c);
	}
	if (ch == '/')
	{
		if (b == 0)
			printf("Divided by zero!\n");
		else
		{
			c = DIV(a, b);
			printf("%d", c);
		}
	}
	return 0;
}