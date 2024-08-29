#define  _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//
//int main()
//{
//	int n, sum, eff;
//	double x, y;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d", &sum, &eff);
//		if (i == 0)
//			x = 1.0 * eff / sum;
//		else
//		{
//			y = 1.0 * eff / sum;
//			if (y - x > 0.05)
//				printf("better\n");
//			else if (x - y > 0.05)
//				printf("worse\n");
//			else
//				printf("same\n");
//		}
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>

int main()
{
	int n, num;
	double d, t,x,y;
	t = 0.0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf %d", &x, &y, &num);
		d = sqrt(x * x + y * y);
		t += 2 * d / 50 + 1.5 * num;
	}
	printf("%d", (int)ceil(t));
	return 0;
}