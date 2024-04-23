#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *(str);
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}


//三步翻转实现左旋
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//	int n = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k,str + n -1);
//	reverse(str,str + n -1);
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}

int is_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);
	for (i = 0; i < n; i++)
	{
		char tmp = *(str1);
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		*(str1 + n - 1) = tmp;
		if (strcmp(str1, str2) == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else 
	{
		printf("no\n");
	}
	return 0;
}