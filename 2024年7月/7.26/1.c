#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	double hp = 10;
	int lv = 0;
	int exp = 0;
	double dehp;
	int inexp;
	int explv = 1;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lf %d", &dehp, &inexp);
		if (hp- dehp <= 0)
		{
			break;
		}
		hp -= dehp;
		exp += inexp;
		if (hp > 10)
			hp = 10;
	}
	while (exp >= explv)
	{
		exp -= explv;
		lv++;
		explv *= 2;
	}
	printf("%d %d", lv, exp);
	return 0;
}