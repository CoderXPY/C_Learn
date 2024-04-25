#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	char arr1[] = "xpy";
//	int len1 = strlen(arr1);
//	printf("%d\n", len1);
//
//	char arr2[] = { 'x','p','y' };
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[] = "xpy";
//	int len1 = my_strlen(arr1);
//	printf("%d\n", len1);
//	return 0;
//}

//strlen返回的是无符号数
//int main()
//{
//	if (strlen("xpy") - strlen("xpyxpy") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "hello");
//	//\0也会被拷贝过去
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}

//void my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
