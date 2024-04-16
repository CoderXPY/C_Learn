#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

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

void menu()
{
	printf("*****************************\n");
	printf("*******1.Add      2.Sub******\n");
	printf("*******3.Mul      4.Div******\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");
	printf("*****************************\n");
}

//int main()
//{
//	int input;
//	do 
//	{
//		menu();
//
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		int x;
//		int y;
//		int ret;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数字:>\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个数字:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个数字:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个数字:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("已退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择:>\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		int x;
//		int y;
//		int ret;
//		int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input > 0 && input < 5)
//		{
//			printf("请输入两个数字:>\n");
//			scanf("%d %d", &x, &y);
//			ret = (pfarr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择:>\n");
//		}
//	} while (input);
//
//	return 0;
//}

int calc(int (*pf)(int x, int y))
{
	int x;
	int y;
	printf("请输入两个数字:>\n");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input;
	do 
	{
		menu();

		printf("请选择:>\n");
		scanf("%d", &input);

		int ret;
		switch (input)
		{
		case 1:
			ret = calc(Add);
			printf("%d\n", ret);
			break;
		case 2:
			ret = calc(Sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = calc(Mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = calc(Div);
			printf("%d\n", ret);
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);

	return 0;
}