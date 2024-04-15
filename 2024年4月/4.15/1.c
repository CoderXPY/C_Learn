#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//typedef void (*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int x, int y) = Add;
//	int (*pf2)(int x, int y) = Sub;
//	int (*pfarr[2])(int x, int y) = { Add,Sub };
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x - y;
}

int Div(int x, int y)
{
	return x - y;
}

int main()
{

	return 0;
}