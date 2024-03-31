#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//拿到的是a的第一个字节地址
//	*pa = 20;
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//指针类型决定了指针解引用权限
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//指针类型决定了指针走一步能走多远
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int* p;
//	//1.此处p没有初始化，称为野指针
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//2.第11次时越界访问，也是野指针
//	//3.指针指向的空间释放了，
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 10;
//	//地址指向的变量是test中的局部变量，已经释放了
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针减指针得到的是两个指针中间元素的个数
//	return 0;
//}

//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}