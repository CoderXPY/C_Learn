#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	printf("%.3f", a);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	printf("%.12lf", a);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	int n;
//	float a;
//	double b;
//	scanf("%c\n%d\n%f\n%lf", &ch, &n, &a, &b);
//	printf("%c %d %.6f %.6lf", ch, n, a, b);
//	return 0;
//}

#include<stdio.h>

int main()
{
	double a;
	scanf("%lf", &a);
	printf("%f\n%.5f\n%e\n%g", a, a, a, a);
	return 0;
}