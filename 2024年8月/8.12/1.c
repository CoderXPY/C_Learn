#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n, a, b, c;
//	scanf("%d", &n);
//	a = n / 100;
//	b = n / 10 % 10;;
//	c = n % 10;
//	printf("%d%d%d", c, b, a);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int h, r, n;
//	scanf("%d %d", &h, &r);
//	double v = 3.14 * r * r * h;
//	n = 1;
//	while (20000-n*v>0)
//	{
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}

#include<stdio.h>
#include<math.h>

int main()
{
	int x1, y1, x2, y2;
	double l;
	scanf("%d %d\n%d %d", &x1, &y1, &x2, &y2);
	l = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%.3lf", l);
	return 0;
}