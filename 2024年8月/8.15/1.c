#define   _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 0)
//		printf("positive");
//	if (n == 0)
//		printf("zero");
//	if (n < 0)
//		printf("negative");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	if (n < 0)
//		n *= -1;
//	printf("%.2f", n);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		printf("even");
//	else
//		printf("odd");
//	return 0;
//}


#include<stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	if ((int)ch % 2 == 0)
		printf("NO");
	else
		printf("YES");
	return 0;
}