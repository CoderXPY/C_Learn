#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int l, r;
//	scanf("%d %d", &l, &r);
//	int count = 0;
//	int i = 0;
//	for (i = l; i <= r; i++)
//	{
//		int n = i;
//		while (n > 0)
//		{
//			if (n % 10 == 2)
//				count++;
//			n /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a, b, f;
	char c;
	scanf("%d %d %c %d", &a, &b, &c, &f);
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		if(f != 0)
		{
			for (j = 0; j < b; j++)
			{
				printf("%c", c);
			}
		}
		else
		{
			if(i == 0||i == a-1)
			{
				for (j = 0; j < b; j++)
				{
					printf("%c", c);
				}
			}
			else
			{
				printf("%c", c);
				for (j = 0; j < b-2; j++)
				{
					printf(" ");
				}
				printf("%c", c);
			}
		}
		printf("\n");
	}
	return 0;
}