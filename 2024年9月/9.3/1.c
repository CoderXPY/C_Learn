#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	while(n!=1)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%lld*3+1=%lld\n", n, 3 * n + 1);
//			n = 3 * n + 1;
//			continue;
//		}
//		else
//		{
//			printf("%lld/2=%lld\n", n, n / 2);
//			n = n / 2;
//		}
//	}
//	printf("End");
//	return 0;
//}

#include<stdio.h>

int main()
{
	long long m;
	int k;
	scanf("%lld %d", &m, &k);
	int count = 0;
	while (m > 0)
	{
		if (m % 10 == 3)
			count++;
		m /= 10;
	}
	if (count == k)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}