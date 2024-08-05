 #define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	printf("%lld", b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	printf("%8lld %8lld %8lld", a, b, c);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("  %c\n %c%c%c\n%c%c%c%c%c", ch, ch, ch, ch, ch, ch, ch, ch, ch);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int k, m, n, a, b;
	scanf("%d %d %d", &k, &m, &n);
	int i = 0;
	int flag = 0;
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b > 0)
		{
			printf("%d ", i);
			flag = 1;
			continue;
		}
		if (b == 0)
			continue;
		int count = k / a;
		if (count * b >= n)
		{
			printf("%d ", i);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("%d", -1);
	return 0;
}