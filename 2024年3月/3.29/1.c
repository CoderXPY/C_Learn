#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);
//	//�˴�[]Ϊ�±����ò��������������Ϊarr��4
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = Add(a, b);
//	//�˴�()Ϊ�������ò�����
//	printf("%d\n", c);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 10;
//	struct Book b = { "c����", "324324Z", 55 };
//	struct Book* pb = &b;
//
//	printf("%s\n", pb->name);
//	printf("%s\n", pb->id);
//	printf("%d\n", pb->price);
//	//printf("%s\n", b.name);
//	//printf("%s\n", b.id);
//	//printf("%d\n", b.price);
//	//.������
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000011
//	//00000000000000000000000000000011
//	char b = 127;
//	//01111111
//	//00000000000000000000000001111111
//	char c = a + b;
//	//a��b��������
//	//00000000000000000000000010000010
//	//100000010 - c
//	printf("%d\n", c);
//	//c������������
//	//11111111111111111111111110000010-����
//	//11111111111111111111111110000001-����
//	//10000000000000000000000001111110-ԭ��
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));
	printf("%u\n", sizeof(!c));//�˴�ӦΪ4����gccΪ׼
	return 0;
}