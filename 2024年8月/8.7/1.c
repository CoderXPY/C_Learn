#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld", &a, &b);
//	c = a + b;
//	printf("%lld", c);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = (a + b) * c;
//	printf("%d", d);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = (a + b) / c;
//	printf("%d", d);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	double c;
//	scanf("%d %d", &a, &b);
//	c = 1.0 * a / b;
//	printf("%.9lf", c);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a, b;
	double c;
	scanf("%d\n%d", &a, &b);
	c = 100.0 * b / a;
	printf("%.3lf%%", c);
	return 0;
}