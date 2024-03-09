#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	"dfhsuji";//字符串
//	char arr[] = "xpy";
//	//字符串结尾隐藏了一个\0字符
//	//\0是字符串结束标志
//
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "xpy";
//	char arr2[] = { 'x','p','y' };
//	char arr3[] = { 'x','p','y','\0' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//打印没有结束标志会有？？
//	printf("%s\n", arr3);
//
//	return 0;
//}


//int main()
//{
//	int len = strlen("xpy");//头文件为string.h
//	printf("%d\n", len);//\0计算长度时不计入
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "xpy";
//	char arr2[] = { 'x','p','y' };
//	char arr3[] = { 'x','p','y','\0' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//
//	return 0;
//}


//int main()
//{
//	printf("c:\test\n");
//	printf("ab\cd\n");
//	//转义字符\t和\c
//
//	printf("c:\\test\n");
//	printf("ab\\cd\n");
//
//
//	printf("(are you ok??)\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("\a\a\a");
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');
//	//8进制数130 = 10进制数88
//	//X的ASCII码值是88，所以会打印出X
//
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	//8进制数中不会出现8所以\32跟8是分开的
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("要好好学习吗(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("能考研");
//	}
//	else
//	{
//		printf("回家");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 3000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 3000)
//	{
//		printf("成功\n");
//	}
//	else
//	{
//		printf("失败\n");
//	}
//	return 0;
//}

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	//int a = 1;
	//int b = 2;
	//int sum = a + b;
	//printf("%d\n", sum);
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//int sum = num1 + num2;
	int sum = ADD(num1, num2);
	printf("%d\n", sum);


	return 0;
}