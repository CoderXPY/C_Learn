#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main()
{
	int n,s1,s2,num;
	char name[25], ch1, ch2;
	int sum = 0;
	int nsum = 0;
	int max = 0;
	char maxn[25];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %c %c %d", name, &s1, &s2, &ch1, &ch2, &num);
		if (s1 > 80 && num > 0)
			sum += 8000;
		if (s1 > 85 &&s2 > 80)
			sum += 4000;
		if (s1 > 90)
			sum += 2000;
		if (s1 > 85 && ch2 == 'Y')
			sum += 1000;
		if (s2 > 80 && ch1 == 'Y')
			sum+= 850;
		nsum += sum;
		if (sum > max)
		{
			max = sum;
			strcpy(maxn, name);
		}
		sum = 0;
	}
	printf("%s\n%d\n%d", maxn, max, nsum);
	return 0;
}