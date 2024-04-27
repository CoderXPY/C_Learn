#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	char ch1 = '9';
//	int ret = isdigit(ch1);
//	printf("%d\n", ret);
//	char ch2 = 'a';
//	ret = isupper(ch2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 20);//20个字节
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}

//int main()
//{
//	float arr1[4] = { 1.0,2.0,3.0,4.0 };
//	float arr2[2] = { 1.0,3.0 };
//	int ret = memcmp(arr1,arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);
//	//20是按字节进行,所以是一个int是 01010101;
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	int price;
//	char id[20];
//}b4,b5,b6;//全局变量
//
//int main()
//{
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	//局部变量
//	return 0;
//}