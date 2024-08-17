#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int s;
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &s);
//		if (s < 60)
//			count++;
//	}
//	if (count == 1)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", & n);
	if (n != 1 && n != 3 && n != 5)
	{
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}