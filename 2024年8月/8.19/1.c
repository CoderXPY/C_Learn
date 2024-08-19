#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int x;
//	char c;
//	scanf("%d %c", &x, &c);
//	int sum = 0;
//	if (c == 'y')
//		sum += 5;
//	sum += 8;
//	x -= 1000;
//	while (x>0)
//	{
//		sum += 4;
//		x -= 500;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a,b,c;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
		b = a;
	if (b > c)
		c = b;
	printf("%d", c);
	return 0;
}