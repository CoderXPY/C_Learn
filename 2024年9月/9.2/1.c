#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int res = 1;
//	int i = 0;
//	for (i = 0; i < b; i++)
//	{
//		res *= a;
//		res %= 1000;
//	}
//	printf("%03d", res);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int h;
	scanf("%d", &h);
	printf("%lf\n%lf", h * 767.0 / 256.0, h / 1024.0);
	return 0;
}