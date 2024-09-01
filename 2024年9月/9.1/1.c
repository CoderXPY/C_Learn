#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a, b, n;
//	scanf("%d %d %d", &a, &b, &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		a %= b;
//		a *= 10;
//	}
//	a /= b;
//	printf("%d", a);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i = 0;
	a %= 7;
	int num = 1;
	for (i = 0; i < b; i++)
	{
		num *= a;
		num %= 7;
	}
	switch (num)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 0:
		printf("Sunday\n");
		break;
	default:
		break;
	}
	return 0;
}