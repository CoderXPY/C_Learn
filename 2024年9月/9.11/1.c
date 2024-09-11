#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	double sum = 0.0;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		switch (i)
		{
		case 1:
		{
			sum += n * 28.9;
			break;
		}
		case 2:
		{
			sum += n * 32.7;
			break;
		}
		case 3:
		{
			sum += n * 45.6;
			break;
		}
		case 4:
		{
			sum += n * 78;
			break;
		}
		case 5:
		{
			sum += n * 35;
			break;
		}
		case 6:
		{
			sum += n * 86.2;
			break;
		}
		case 7:
		{
			sum += n * 27.8;
			break;
		}
		case 8:
		{
			sum += n * 43;
			break;
		}
		case 9:
		{
			sum += n * 56;
			break;
		}
		case 10:
		{
			sum += n * 65;
			break;
		}
		default:
			break;
		}
	}
	printf("%.1lf", sum);
	return 0;
}