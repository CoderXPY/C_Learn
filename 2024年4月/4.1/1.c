#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//	//p == arr
//	//arr[2] -> *(arr + 2) -> *(2 + arr) -> 2[arr]
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int*** pppa = &ppa;
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	char ch[10];
//	int* parr[5];
//	char* pch[5];
//	return 0;
//}

//struct B
//{
//	char c;
//	short d;
//	double s;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;
////此处s1,s2是全局变量
//int main()
//{
//	struct Stu x = { {'w',20,3.15},"xpy",21,"4156"};
//	printf("%c\n", x.sb.c);
//	printf("%s\n", x.id);
//	struct Stu* px = &x;
//	printf("%c\n", (*px).sb.c);
//	printf("%c\n", px->sb.c);
//	return 0;
//}

//struct B
//{
//	char c;
//	short d;
//	double s;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu s)
//{
//	printf("%c %d %lf %s %d %s\n", s.sb.c, s.sb.d, s.sb.s, s.name, s.age, s.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.d, ps->sb.s, ps->name, ps->age, ps->id);
//}
////传地址可以节省空间，效率高
//int main()
//{
//	struct Stu x = { {'w',20,3.15},"xpy",21,"4156" };
//	print1(x);
//	print2(&x);
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 0;
//	c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	return 0;
}