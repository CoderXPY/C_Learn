#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = a + b;
	printf("%d\n", ret);
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = a / b;
	printf("%d\n", ret);
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = a % b;
	printf("%d\n", ret);
	return 0;
}

int main()
{
	float a = 0;
	scanf("%f", &a);
	int ret = ((int)a) % 10;
	printf("%d", ret);
	return 0;
}