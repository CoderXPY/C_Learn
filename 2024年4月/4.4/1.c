#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		arc++;
//	}
//  *dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest++ = *src++;
//	}
//  *dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, const char* src)//const的作用是防止写反
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "###############";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//
//	const int num = 10;
//	num = 20;
//	//const修饰变量，变量称为常变量，不能修改，
//	//const int* p = &num;
//	//*p = 20;
//	//p = &n;
//	//const修饰指针变量，放在*左边，指针指向的内容不能通过指针改变，
//	// 但是指针变量本身可以修改
//
//	int* const p = &num;
//	*p = 20;
//	p = &n;
//	//const放在*右边时，指针变量不能改变，但是指向的内容可以改变 
//
//	printf("%d\n", num);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)//const的作用是防止写反
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回起始地址
//}
//
//int main()
//{
//	char arr1[20] = "###############";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1,arr2));
//
//	return 0;
//}

//size_t my_strlen(const char* arr)
//{
//	//assert(arr != NULL);
//	assert(arr);
//	size_t a = 0;
//	while (*arr++)
//	{
//		a++;
//	}
//	return a;
//}
//
//int main()
//{
//	char arr[] = "xpy";
//	//int i = strlen(arr);
//	int i = my_strlen(arr);
//	printf("%d\n", i);
//	return 0;
//}

//int Number0f1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}//只适用于正数

//int Number0f1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i <= 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int Number0f1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = -10;
//	int ret = Number0f1(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf(" %d%d", &m, &n);
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf(" %d%d", &m, &n);
//	int ret = m ^ n;
//	int count = Number0f1(ret);
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	pritnf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0; 
//}

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}