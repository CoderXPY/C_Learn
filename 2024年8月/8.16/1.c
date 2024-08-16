#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	long long x, y;
//	scanf("%lld %lld", &x, &y);
//	if (x > y)
//		printf(">");
//	if (x < y)
//		printf("<");
//	if (x == y)
//		printf("=");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 10 && a < 100)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a >= 10 || b >= 20)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


#include<stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int flag = 0;
	if (x % 3 == 0)
	{
		printf("3 ");
		flag = 1;
	}
	if (x % 5 == 0)
	{
		printf("5 ");
		flag = 1;
	}
	if (x % 7 == 0)
	{
		printf("7");
		flag = 1;
	}
	if (flag == 0)
		printf("n");
	return 0;
}