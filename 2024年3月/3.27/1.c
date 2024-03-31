#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	if (flag)
//	{
//		printf("haha\n");
//	}
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//sizeof为操作符，所以（）可以省略
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	//sizeof（）其中的不参与运算
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	//~表示按位取反
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	//先使用，后加加
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int c = ++a;
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", a--);
	printf("%d\n", a);
	return 0;
}