#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int n = (10 * a + b) / 19;
//	printf("%d", n);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float m = 0.0;
//	if (n <= 150)
//	{
//		m = n * 0.4463;
//	}
//	else if (n > 150 && n <= 400)
//	{
//		m = 150 * 0.4463 + (n - 150) * 0.4663;
//	}
//	else
//	{
//		m = 150 * 0.4463 + (400 - 150) * 0.4663 + (n - 400) * 0.5663;
//	}
//	printf("%.1f", m);
//	return 0;
//}


#include<stdio.h>

int main()
{
	float s = 0.0;
	scanf("%f", &s);
	float i = 2.0;
	int count = 0;
	float s1 = 0.0;
	while (s1 < s)
	{
		s1 += i;
		i *= 0.98;
		count++;
	}
	printf("%d", count);
	return 0;
}