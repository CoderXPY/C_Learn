#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	printf("xpy\n");
//	int a = 100;
//	printf("a = %d\n", a);
//	return 0;
//}
//
//
//extern int b;//��������
//
//int main()
//{
//	printf("b = %d\n", b);
//	return 0;
//}


//ö�ٳ���
enum SEX
{
	MALE,
	FEMALE,
	SECRET
};


int main()
{
	int num = 10;
	printf("%d\n", num);

	const a = 2;//������ ���ǳ���
	printf("%d\n", a);

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}