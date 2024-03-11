#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//#define MAX 100
////1.define定义常量
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//#define ADD(x, y) x + y
////define定义宏
//
//int main()
//{
//	printf("%d\n", 5*ADD(2, 3));//此处为5*2+3
//	return 0;
//}

//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", 5 * ADD(2, 3));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int* pa = &a;//pa是用来存放地址的，是指针变量，
//	//int说明pa执行对象是int类型
//	// *说明pa是指针变量
//	char ch = 'b';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*为解引用操作符
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//结构体可以让c语言创建新的类型
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu a = { "xpy", 20,100 };
//	printf("%s %d %lf\n", a.name, a.age, a.score);
//	struct Stu* pa = &a;
//	printf("%s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);
//	printf("%s %d %lf\n", pa->name, pa->age, pa->score);
//	//->左边是结构体指针，右边是成员变量名
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int arr[a] = { 0 };
//	//此处有错误，[]内必须为常量值
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (y < x)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int c = Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}


