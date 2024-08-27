#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int k, num;
	scanf("%d", &k);
	int i = 0;
	int count1 = 0;
	int count5 = 0;
	int count10 = 0;
	for (i = 0; i < k; i++)
	{
		scanf("%d", &num);
		if (num == 1)
			count1++;
		if (num == 5)
			count5++;
		if (num == 10)
			count10++;
	}
	printf("%d\n%d\n%d", count1, count5, count10);
	return 0;
}