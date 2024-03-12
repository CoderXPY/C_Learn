#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("成年");
//	}
//	else
//	{
//		printf("未成年");
//		printf("不能谈恋爱");
//	}
//	//多语句时{}不能省略
//	return 0;
//}


//int main()
//{
//	int age = 60;
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age < 40)
//	{
//		printf("壮年\n");
//	}
//	{
//		printf("老年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//	else
//		printf("haha");
//	//此处不打印，else跟与他最近的if匹配
//	return 0;
//}


//int main()
//{
//	int num = 3;
//	if (4 == num)
//	//此处常量放在左边一定不会出错
//		printf("ha\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a % 2)
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100; i++)
//	{
//		if (i % 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}