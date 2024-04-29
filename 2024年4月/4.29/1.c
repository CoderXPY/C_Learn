#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stddef.h>

//struct S
//{
//	char ch1;
//	int i;
//	char ch2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//#pragma pack(2)
//
//struct S
//{
//	char ch1;
//	int i;
//	char ch2;
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	char ch1;
//	int i;
//	char ch2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, ch1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, ch2));
//	return 0;
//}

struct S
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}

int main()
{
	int count;
	scanf("%d", &count);
	printf("%d\n", count * 100);
	return 0;
}

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a / b, a % b);
	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", a % 10);
	return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", (a / 10) % 10);
	return 0;
}