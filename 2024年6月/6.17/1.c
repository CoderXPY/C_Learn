#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int t1 = 0;
	int t2 = 0;
	int max = 0;
	int i = 0;
	int ret = 0;
	for (i = 1; i < 8; i++)
	{
		scanf("%d %d", &t1, &t2);
		if (((t1 + t2) > max)&&(t1 + t2)> 8)
		{
			max = t1 + t2;
			ret = i;
		}
	}
	printf("%d", ret);
	return 0;
}