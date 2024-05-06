#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define M 1000
//
//int main()
//{
//	int m = M;
//	printf("%d\n", m);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	printf("%d\n", SQUARE(3));
//	printf("%d\n", 3 * 3);
//	printf("%d\n", SQUARE(3));
//	printf("%d\n", 3 + 1 * 3 + 1);
//	return 0;
//}

//#define print(x,formate) printf("the value of "#x" is "#formate"\n",x)
//
//int main()
//{
//	int a = 10;
//	print(a,"%d");
//	int b = 20;
//	print(b,"%d");
//
//	float c = 5.5f;
//	print(c, "%f");
//	return 0;
//}

#define CAT(x,y) x##y

int main()
{
	int class101 = 100;
	printf("%d\n", CAT(class, 101));
	return 0;
}