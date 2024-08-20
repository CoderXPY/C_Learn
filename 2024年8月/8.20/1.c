#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int flag = 0;
//	if (a + b < c || a + c < b || b + c < a)
//		flag = 1;
//	if (flag == 0)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x >= -1 && x<=1 && y>=-1 && y <= 1)
		printf("yes");
	else
		printf("no");
	return 0;
}