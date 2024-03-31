#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int ADD(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标从0开始
//	char ch[5] = { 'a','b','c','d' };
//	//不完全初始化，剩余默认为0
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
// 	return 0;
//}


//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);
//	//整数除法结果得商，要得到小数，除数或被除数中要有小数
//	float b = 7 / 2.0;
//	printf("%f\n", b);
//
//	int c = 7 % 2;
//	//%表示取模即余数
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	//左移的是二进制数，默认是32位二进制数，
//	//a=2=00000000000000000000000000000010，
// 左移一位变成00000000000000000000000000000100
//	//即b=4，即左移变大，右移减小
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	////a = a + 1;
//	//a += 1;
//
//	//a = a - 1;
//	//a -= 1;
//
//	a = a & 2;
//	a &= 2;
//
//
//	printf("%d", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//
//	//!真变假，假变真；
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	//sizeof是操作符，不是函数
//	//计算的是字节数
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~表示二进制按位取反，把所有1变成0,0变成1
//	//a=00000000000000000000000000000000
//	//b=11111111111111111111111111111111(反码)
//	//整数在内存中存储的是补码，正数的原码，反码，补码相同
//	//负数的反码是原码除第一位，其他取反，补码是反码加一
//
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = ++a;
//	//先++，后使用
//	int c = a++;
//	//先使用，后++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}



//int main()
//{
//	int a = 3.14;
//	int b = (int)3.14;
//	//()强制类型转换
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 1;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	max = a > b ? a : b;
//	//三目操作符
//
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a = b + 1, b = c - 4, c = a + b);
//	//逗号表达式从左到右计算，结果是最右边的结果
//	printf("%d\n", d);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);
//	//此处[]为下标引用操作符
//	//函数名后的()是函数调用操作符
//	return 0;
//}

void test()
{
	static int a = 1;
	//static修饰了局部变量，改变了其生命周期
	// static修饰全局变量时，只能在本文件（.c）中使用 修饰之后其他文件里就不能用了
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}