#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


////二进制位奇偶交换的宏
//#define SWAP(a) ((a &0xaaaaaaaa)>>1) + ((a &0x55555555)<<1)
//
//int main()
//{
//	int a = 10;
//	int ret = SWAP(a);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stddef.h>
//
//struct A
//{
//	int a;
//	char b;
//	short c;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct A, a));
//	printf("%d\n", offsetof(struct A, b));
//	printf("%d\n", offsetof(struct A, c));
//	printf("%d\n", offsetof(struct A, d));
//	return 0;
//}

struct A
{
	int a;
	char b;
	short c;
	double d;
};
#define OFFSETOF(struct_name,mem_name)  (int) & (((struct_name*)0)->mem_name)
int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));
	return 0;
}