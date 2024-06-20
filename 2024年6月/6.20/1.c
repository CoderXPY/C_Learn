#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int k = 0;
	scanf("%d", &k);
	int sub1 = 0;
	int sub2 = 0;
	int sub3 = 0;
	int flag = 0;
	int i = 0;
	for (i = 10000; i <= 30000; i++)
	{
		sub1 = i / 100;
		sub2 = i % 10000 / 10;
		sub3 = i % 1000;
		if ((sub1 % k == 0) && 
			(sub2 % k == 0) && 
			(sub3 % k == 0))
			{
				printf("%d\n", i);
				flag++;
			}
	}
	if (flag == 0)
		printf("No");
	return 0;
}