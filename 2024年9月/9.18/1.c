#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

void div(int n)
{
	int flag = 0;
	while (n != 0)
	{
		int t = (int)(log2(n));
		if (flag)
			printf("+");
		if (t == 1)
			printf("2");
		else if (t == 0)
			printf("2(0)");
		else
		{
			printf("2(");
			div(t);
			printf(")");
		}
		n -= pow(2, t);
		flag = 1;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	div(n);
	return 0;
}