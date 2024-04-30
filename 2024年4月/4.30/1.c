#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//enum color
//{
//	RED,
//	BLUE,
//	GREEN
//};
//
//int main()
//{
//	enum color c = BLUE;
//	printf("%d\n", RED);
//	printf("%d\n", BLUE);
//	printf("%d\n", GREEN);
//	return 0;
//}

//union UN
//{
//	char i;
//	int j;
//};
//
//int main()
//{
//	union UN u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

int check_sys()
{
	union Un
	{
		char i;
		int a;
	}u;
	u.a = 1;
	return u.i;
}


int main()
{
	int ret =  check_sys();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;

}